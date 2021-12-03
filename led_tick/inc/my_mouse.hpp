#pragma once
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