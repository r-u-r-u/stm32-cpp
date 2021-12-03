/**
 * @file map.cpp
 * @brief map admin
 * @author wako
 * @date 2021/12/02
 */

#include "map.hpp"

namespace mouse{
  map::map(){
    // std::cout<<"map"<<std::endl;
  }

  map::map(map_size){
  }

  map::~map(){
  }

  inline void map::update(){
  }

  void map::set_position(position new_position){
    _position = new_position;
  }

  position map::get_position(){
    return _position;
  }
  
};