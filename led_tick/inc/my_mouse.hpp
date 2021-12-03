#pragma once

#include "main.h"
#include "adc.h"
#include "i2c.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

#include"map.hpp"
#include"pose.hpp"

namespace mouse{

class my_mouse{
  private:
  map _map;
  pose _pose;
  public:
  my_mouse();
  ~my_mouse();
  void update();
};

};