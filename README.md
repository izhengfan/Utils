# cxxtk

A C++ Toolkit.

[![](../../workflows/CI/badge.svg)](../../actions)

## Build

```
cd cxxtk
mkdir build
cd build
cmake ..
make
```

To build with unit tests (GTest required) and run the tests:
```
cd build
cmake .. -DBUILD_TESTS=ON
make
./ALL_TEST
```
