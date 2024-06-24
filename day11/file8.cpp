#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {12,23,34,45,56};
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
