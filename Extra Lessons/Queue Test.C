uint16_t LastState1 = 0xFFFF; // Estado inicial das teclas do TDA9525 "1"

uint16_t LastState2 = 0xFFFF; // Estado inicial das teclas do TDA9525 "2"

 

// -------------------------------------------------------

 

void CheckKey_TDA1(void)

{

 

  uint16_t rx1 = ReadI2CLow(1) + (ReadI2CHigh(1) << 8);

  

  // XOR de 2 variaveis de 16 bits , cada bit do resultado é

  // 1 se os bits dos operandos forem diferentes

 

  // A = 0100000000000001

  // B = 0100010000000001

  // C = A xor B

  // C = 0000010000000000

 

 

  uint16_t xorRx1 = LastState1 ^ rx1;

  for (uint16_t i=0; i<16= i++)

  {

    uint16_t mask = 1 << i;

    if (xorRx1 & mask)

    {

      // TECLA "i (0 a 15) do TDA1 foi alterada"

      if (rx1 & mask)

      {

          // tecla foi solta

          LastState1 |= mask;

          // TRATAR A TECLA SOLTA

      }

      else

      {

        // tecla foi pressionada

        LastState1 &= ~mask;

        // TRATAR A TECLA PRESSIONADA

      }

    }

  }

}

// -------------------------------------------------------

 

void CheckKey_TDA2(void)

{

  // ...

}

// -------------------------------------------------------

 

 

bool isr1, isr2;

 

// -------------------------------------------------------

 

interrupt void ISR_GPIO(void)

{

  if (GPIO_Reg_INTORIGIN == 0x01)

    isr1 = true;

  else if (GPIO_Reg_INTORIGIN == 0x02)

    isr2 = true;

}

// -------------------------------------------------------

 

 

int main(void)

{

  // Configura o processador

  // ...

  // ...

  // ...

 

  // Configurar o TDA9535 para: -  setar como input. E que o input gera uma interrupção.

  // I2C_xxxx

  // ...

 

  // Configurar o uC para gerar uma interrupçãode borda de descida

  //

  ISR_GPIO_1 = &ISR_GPIO;

 

  isr1 = false;

  isr2 = false;

  LastState1 = 0xFFFF;

  LastState2 = 0xFFFF;

 

  // Antes de entrar no LOOP, habilita todas as interrupções

  EINT;

 

  // Loop infinito

  for (;;)

  {

    CheckLed();    

    if (isr1)

    {

      CheckKey_TDA1();

      isr1 = false;

    }

    if (isr2)

    {

      CheckKey_TDA2();

      isr2 = false;

    }

  }

}