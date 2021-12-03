/**
 * @file map.hpp
 * @brief map admin
 * @author wako
 * @date 2021/12/02
 */
#pragma once

namespace mouse{

enum class map_size{
  MAP_SIZE_16,
  MAP_SIZE_32,
  MAP_SIZE_64,
};

typedef struct{
  int x;
  int y;
} position;

class map{
  private:
  position _position;
  public:
  map();
  map(map_size);
  ~map();
  inline void update();
  void set_position(position);
  position get_position();
  
};

};