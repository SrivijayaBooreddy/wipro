#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;
struct Student
{
};
class Employee
{
};
int main()
{
auto x = 5;
auto y = 5.25;
auto z = 'a';
Student s;
cout << typeid(x).name() << endl;
cout << typeid(y).name() << endl;
cout << typeid(z).name() << endl;
cout << typeid(s).name() << endl;
cout << typeid(Employee).name() << endl;
cout << typeid(typeid(s)).name() << endl;

return 0;
}
