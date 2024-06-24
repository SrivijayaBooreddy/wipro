#include <stdio.h>
#include <unistd.h>
#include <thread>
#include <iostream>
using namespace std;

int global = 0;

void update( )
{
   for(int i = 0 ; i < 100000 ; i++)
   global++;
}
int main()
{
   thread t1(update);
   
   t1.join();       
   thread t2(update);
   t2.join();
   cout << "Global = "<< global << endl;
}

