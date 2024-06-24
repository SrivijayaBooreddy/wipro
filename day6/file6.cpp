#include <iostream>
#include <algorithm>
using namespace std;
int add(int a,int b)
{
cout << "Add function " << a << " " << b << endl;
return a+b;
}
int gcd(int a, int b)
{
cout << "gcd :"<<a<<" "<<b<<endl;
return a;
}
bool isprime(int n){return true;}
void calculate(int (*p)(int,int) )
{
p(78,56);
}
int main()
{
int res = add(5, 10);
calculate( add );
bool (*ptr)(int);
ptr = isprime;
ptr(12);
return 0;
}
