#include <iostream>
#include <vector>
#include <algorithm>
using namespaces std;
int main()
{
vector<int> v = {12,23,34,45,56,67,89,90};
auto it = find_if( beign(v) , end(v) , [](int num){return num % 2 !=0;} );
cout << *it << endl;
return 0;
}
