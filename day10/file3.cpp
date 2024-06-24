#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;
class DS
{
public : virtual ~DS(){}
};
class Stack : public DS
{};
class Queue : public DS
{
public : void foo() {}
};
int main()
{
    int a = 5;
    int b = 2;
    float res = static_cast<float>(a)/b;
    cout << res << endl;
    return 0;
}
