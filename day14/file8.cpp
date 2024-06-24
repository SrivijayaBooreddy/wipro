#include <iostream>
#include <memory>
using namespace std;
int main()
{
   shared_ptr<Test> sp1 ( new Test(5) );
   weak_ptr<Test> wp(sp1);
   
   cout << sp1.use_count() << endl;
   cout << wp.use_count() << endl;
}
