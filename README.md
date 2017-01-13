## Utils

---

### Rate: Achieve simple frame rate control using C++ 11 standard library

Header: `Rate.hpp`, Source: `Rate.cpp`.

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

Refer to `test.cpp` for the usage. Test it like:

```
c++ -c Rate.hpp Rate.cpp -std=c++11
c++ test.cpp Rate.o  -std=c++11 -o ./test
./test
``` 

The output should be like:

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
