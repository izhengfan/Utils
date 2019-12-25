
## cxxtk

![](https://github.com/izhengfan/Utils/workflows/CI/badge.svg)


- [Rate](#rate)
- [Histogram](#histogram)
- [Math](#math)
    - [median](#median)
    - [mean](#mean)
    - [min, max, minmax](#min-max-minmax)
    - [norm](#norm)
    - [normSquare](#normsquare)
    - [stddev](#stddev)

### Rate

Achieve simple frame rate control using C++ 11 standard library

Header: `Rate.h`, Source: `Rate.cpp`.

Use `Rate` to control framerate of a loop, like this:

```cpp
int fps = 30;
Rate rate(fps);
while(true)
{
    // Do sth. here
    rate.sleep();
}
```

If the execution in one loop use more time than the time limit set by FPS, `Rate` just set the current moment as the timing beginning point. 

Refer to `test/test_rate.cpp` for the usage. The output should be like:

```
Time now: Mon Aug  8 18:44:04 2016

Time now: Mon Aug  8 18:44:05 2016

Time now: Mon Aug  8 18:44:06 2016

Time now: Mon Aug  8 18:44:09 2016

Time now: Mon Aug  8 18:44:10 2016

Time now: Mon Aug  8 18:44:11 2016

Time now: Mon Aug  8 18:44:12 2016

Time now: Mon Aug  8 18:44:13 2016

Time now: Mon Aug  8 18:44:14 2016

Time now: Mon Aug  8 18:44:15 2016

After 300 iterations, 11.9673 seconds has passed.
```

### Histogram

Header: `Histogram.h`, Source: `Histogram.cpp`.

Create a histogram (output as `vector<int>`) from source `vector<_T>` given a range `vector<_T>`. The provided API is `Histogram::create(src, range, out)`. For any given range, the sorting principle is __left closed and right open__ (i.e. `[min max)`). Obviously, the size of the output vector is one less than that of the range.

For usage, refer to `test/test_histogram.cpp`.

### Math

Header: `Math.hpp`.

Mathematical calculation functions.

#### median

Return median number as `double` of all elements in a stl container.

#### mean

Return mean(average) value (unlike `median`, here the returned type is the same as in the container)

#### min, max, minmax

Return minimum, maximum, or minimum-maximum (as `std::pair`) value(s).

#### norm

Return norm (sqrt of the sum of all elements' square).

#### normSquare

Return sum of all elements's square.

#### stddev

Return standard deviation.
