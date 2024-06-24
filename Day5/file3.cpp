#include <iostream>
#include <cstring>
using namespace std;

class testconst
{
  const int constDataMember;
public :
   Testconst() : constDataMember(5)
   { }
   TestConst(int value) : constDataMember(value)
   { }
   void display(){
       cout << constDataMember << endl;
   }
};
int main()
{
   TestConst t1;
   TestConst t2 = TestConst(8);
   TestConst t3 = TestConst(4);

  t1.display();
  t2.display();
  t3.display();
}
