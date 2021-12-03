/**
 * @file pose.hpp
 * @brief pose admin
 * @author wako
 * @date 2021/12/02
 */
#pragma once
namespace mouse{

typedef struct{
  float x;
  float y;
  float w;
}pose2d;

class pose{
  private:
  pose2d _pose;
  public:
  pose();
  ~pose();
  inline void update();
  void set_pose(pose2d);
  pose2d get_pose();
};

};