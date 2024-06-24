#include <stdio.h>
#include <unistd.h>
#include <thread>
#include <iostream>
#include <mutex>
using namespace std;

int global = 0;
mutex m_global;

void update( )
{
   for(int i=0; i<100000; i++)
   {
       unique_lock<mutex>    ul(m_global);
   //    m_global.lock();
       global++;
   //    m_global.unlock();
         ul.unlock();
    }
}
int main()
{
   thread t1(update);
   
   t1.join();       
   thread t2(update);
   t2.join();
   cout << "Global = "<< global << endl;
}

