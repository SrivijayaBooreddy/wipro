#include <stdio.h>
#include <unistd.h>
#include <thread>
#include <iostream>
#include <mutex>
#include <future>
#include <chrono>
using namespace std;
int global = 0;
mutex m_global;

int factorial(future<int> &n)
{
   cout << "Thread Strated \n";
   int limit = n.get();
   cout << "Got the value for n \n";
   int res = 1;
   for(int i =1; i<=limit; i++)
   {
       res = res*i;
       this_thread::sleep_for(chrono::seconds(1));
   }
   cout << "Completion of Factorial function \n";
   return res;
}
int main()
{
   promise<int> prom;
   future<int> fut_prom = prom.get_future();
   
   future<int> fut_ret = async( factorial, ref(fut_prom));
   
   this_thread::sleep_for(chrono::seconds(2));
   cout << "Setting value for promise \n";
   prom.set_value(5);
   
   cout << "Waiting to collect return value \n";
   cout << fut_ret.get() << endl;
   cout << "End of Program \n";
}
