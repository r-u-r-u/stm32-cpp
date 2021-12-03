/**
 * @file pose.hpp
 * @brief pose admin
 * @author wako
 * @date 2021/12/02
 */

#include "pose.hpp"
namespace mouse{
  pose::pose(){
    // std::cout<<"pose"<<std::endl;
  }
  
  pose::~pose(){

  }

  inline void pose::update(){
  }

  void pose::set_pose(pose2d pose){
    _pose = pose;
  }

  pose2d pose::get_pose(){
    return _pose;
  }
};