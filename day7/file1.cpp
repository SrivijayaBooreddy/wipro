#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Integer
{
int value;
public:
Integer(int p_value) : value(p_value){
}
Integer(const Integer& old){
cout << "Copy Constructor \n";
value = old.value;
}
Integer& operator =(const Integer& rhs){
value = rhs.value;
cout << "Operator = \n";
return *this;
}
bool operator >(const Integer& rhs) const { return value > rhs.value; }
bool operator ==(const Integer& rhs) const { return value == rhs.value; }
friend ostream& operator << (ostream& out, const Integer& e);

