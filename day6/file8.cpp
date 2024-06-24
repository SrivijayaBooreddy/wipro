#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
int key = 50;
vector<int> v = {12,23,34,45,56,67,78,89.90};
auto it = count_if( begin(v) , end(v) , [key](int num){return num > key; } );
cout << it << endl;
return 0;
}
