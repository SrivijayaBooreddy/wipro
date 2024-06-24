#include <iostream>
using namespace std;
int main()
{
    try{
          for( ; ; )
          {
              int *ptr = new int[1000000000];
              cout << ptr << endl;
          }
    }
    catch(bad_alloc &e)
    {
       cout << "Unable to allocate Memory : " << e.what() << endl;
    }
    return 0;
}
