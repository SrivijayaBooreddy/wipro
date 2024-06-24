#include <stdio.h>
#include <unistd.h>
#include <thread>
#include <iostream>
#include <mutex>
#include <future>
using namespace std;
int global = 0;
mutex m_global;

int factorial(int n)
{
   int res = 1;
   for(int i =1; i<=n; i++)
   {
       res = res*i;
   }
   return res;
}
int main()
{
   int n = 5;
   cout << this_thread::get_id() << endl;
   future<int> f = async(factorial, n);
   
   cout << f.get() << endl;
}
