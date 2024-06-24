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
    catch(const char *msg)
    {
       cout << "Unable to allocate Memory : " << endl;
    }
    catch(...)
    {
       cout << "Generic Catch \n";
    }
    return 0;
}
