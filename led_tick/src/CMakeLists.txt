add_library(map map.cpp)
target_include_directories(map PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_library(pose pose.cpp)
target_include_directories(pose PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_library(my_mouse my_mouse.cpp)
target_include_directories(my_mouse PUBLIC ${PROJECT_SOURCE_DIR}/include)