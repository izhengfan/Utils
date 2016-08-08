#include <iostream>
#include "Rate.hpp"

using namespace std;
using namespace std::chrono;

void print_time_now();

int main(int argc, char** argv)
{
    

    int counter = 0;
    auto tp_start = high_resolution_clock::now();
    int iteration = 300;

    int fps = 30; 
    Rate rate(fps);
    for(int i = 0; i < iteration; i++)
    {
        counter++;
        if(counter == fps)
        {
            cout << "Time now: ";
            print_time_now();
            counter = 0;
        }
        if(i == 100)
            std::this_thread::sleep_for(seconds(2));
        rate.sleep();
    }

    auto tp_end = high_resolution_clock::now();

    auto duration = (tp_end - tp_start).count();

    cout << "After " << iteration << " iterations, " << duration/1e9 << " seconds has passed." << endl; 

    return 0;
}

void print_time_now() 
{
    auto tp = high_resolution_clock::now();
    std::time_t tt = system_clock::to_time_t(tp);
    cout << ctime(&tt) << endl;
}