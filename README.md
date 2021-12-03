# stm32 cpp
## build
```
mkdir build  
cd build  
cmake -DCMAKE_TOOLCHAIN_FILE=cmake/arm-none.cmake ..  
```

## flash
```
sudo st-flash --reset write target.bin 0x08000000
```