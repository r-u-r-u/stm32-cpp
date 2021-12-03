#include "my_mouse.hpp"

namespace mouse{
my_mouse::my_mouse():_map(),_pose(){
  HAL_Init();

  SystemClock_Config();

  MX_GPIO_Init();
  MX_USART2_UART_Init();
  MX_ADC1_Init();
  MX_ADC2_Init();
  MX_I2C1_Init();
  MX_TIM1_Init();
  MX_TIM2_Init();
  MX_TIM3_Init();
  MX_TIM16_Init();
  MX_TIM17_Init();
}
my_mouse::~my_mouse(){

}
void my_mouse::update(){

}

};