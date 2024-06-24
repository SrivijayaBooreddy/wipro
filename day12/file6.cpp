#include <iostream>
#include <unistd.h>
#include <thread>
using namespace std;
class A
{
char c;
int n;
public :
void print()
{
for(int i=0; i<n; i++)
{
cout << c;
}
}
};
int main()
{
A obj;
thread t1(&A::print, &obj);

t1.join();
return 0;
}
