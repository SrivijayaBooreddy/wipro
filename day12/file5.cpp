#include <iostream>
#include <unistd.h>
#include <thread>
using namespace std;
void print(char c,int n)
{
for(int i=0;i<n;i++)
{
cout << c;
}
}
int main()
{
char c = '*';
thread t1(print, ref(c), 200000);
char d = '-';
thread t2(print, ref(d), 100000);

t1.join();
t2.join();
return 0;
}
