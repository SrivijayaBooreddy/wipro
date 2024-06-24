#include <iostream>
#include <unistd.h>
#include <thread>
using namespace std;
void print()
{
for(int i=0;i<10000;i++)
{
cout<< '*';
}
}
int main()
{
thread t1(print);
for(int i=0;i<10000;i++)
{
cout <<'-';
}
tm join();

return 0;
}
