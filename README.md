# cxxtk

A C++ Toolkit.

[![](../../workflows/CI/badge.svg)](../../actions)

## Build

```
cd cxxtk
mkdir build
cd build
cmake ..
cmake --build . --target cxxtk
```

To build with unit tests ([GTest required](.github/workflows/main.yml#L12)) and run the tests:
```sh
cd build
cmake .. -DBUILD_TESTS=ON
cmake --build . --target ALL_TEST
./ALL_TEST 
# ./Debug/ALL_TEST.exe (on Windows with Visual C++)
```
