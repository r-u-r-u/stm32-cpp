cmake_minimum_required(VERSION 3.15.2)
project(mouse)

enable_language(ASM)
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Drivers/STM32F3xx_HAL_Driver)
# add_subdirectory(Core)

# make src file list
file(GLOB SRCS
    src/*.cpp
    Core/Src/*c
    startup_stm32f303x8.s)

# add static lib link dir
link_directories(${CMAKE_SOURCE_DIR}/Drivers/CMSIS/Lib/GCC)

set(EXEC_NAME ${CMAKE_PROJECT_NAME})

add_executable(${EXEC_NAME}.elf ${SRCS})

target_include_directories(${EXEC_NAME}.elf PUBLIC inc)
target_include_directories(${EXEC_NAME}.elf PUBLIC Core/Inc )
target_include_directories(${EXEC_NAME}.elf PUBLIC Drivers/STM32F3xx_HAL_Driver/Inc )
target_include_directories(${EXEC_NAME}.elf PUBLIC Drivers/STM32F3xx_HAL_Driver/Inc/Legacy )
target_include_directories(${EXEC_NAME}.elf PUBLIC Drivers/CMSIS/Device/ST/STM32F3xx/Include )
target_include_directories(${EXEC_NAME}.elf PUBLIC Drivers/CMSIS/Include)

target_link_libraries(${EXEC_NAME}.elf
    hal
    # core
    libarm_cortexM4lf_math.a)

add_custom_command(TARGET ${EXEC_NAME}.elf POST_BUILD COMMAND ${CMAKE_SIZE} --format=berkeley ${EXEC_NAME}.elf)
add_custom_target(${EXEC_NAME}.hex ALL DEPENDS ${EXEC_NAME}.elf COMMAND ${CMAKE_OBJCOPY} -Oihex ${EXEC_NAME}.elf ${EXEC_NAME}.hex)
add_custom_target(${EXEC_NAME}.bin ALL DEPENDS ${EXEC_NAME}.elf COMMAND ${CMAKE_OBJCOPY} -Obinary ${EXEC_NAME}.elf ${EXEC_NAME}.bin)