#include <iostream>
#include <thread>
using namespace std;
void print()
{
  cout <<"Print Function \n";
}
int main()
{
   thread t1(print);
   thread t2{ [](){cout << "Lambda Function \n";} };
   
   t1.join();
   t2.join();
   return 0;
}
