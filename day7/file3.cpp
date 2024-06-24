#include <iostream>
using namespace std;
class A
{
public : A(int a) {
cout << "A";
}
};
class B
{
public : B(int b) {
cout << "B";
}
};
class C : public A, public B
{
public : C(int a,int b,int c) :A(a),B(b) {
cout << "C";
}
};
int main()
{
C obj_a{12,23,34};
//obj_a.pub_A = 0;

return 0;
}
