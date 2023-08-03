#include <stdint.h>     // for uint32_t data type
//#include <stm32f4xx.h>  // header file for STM32F4xx microcontroller

int main(void) {

  // Enable GPIOA peripheral clock
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);

  // Configure PA5 as output push-pull
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.GPIO_Pin = GPIO_Pin_5;
  GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;
  GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_NOPULL;
  GPIO_Init(GPIOA, &GPIO_InitStruct);

  // Loop forever, toggling the LED every second
  while (1) {
    GPIO_ToggleBits(GPIOA, GPIO_Pin_5);
    for (uint32_t i = 0; i < 1000000; i++) {} // delay
  }
}

