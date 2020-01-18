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

To build with unit tests ([GTest required](.github/workflows/main.yml#L12)) and run the tests:
```
cd build
cmake .. -DBUILD_TESTS=ON
make
./ALL_TEST
```
