#include <iostream>
using namespace std;
class shallow {
public:
    int* data;
    shallow(int value) {
      cout << "Constructor \n";
      data = new int(value);
      {
      shallow(const shallow &old);
      }
      // data = old.data;
      data = new int(*old.data);
      }
     ~shallow() {
          delete data;
      }
};
int main()
{
  shallow obj1(10);
  shallow obj2 = obj1; // Shallow copy
}
