#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
int n;
int ele;
cout <<"Enter the number of element : ";
cin >> n;
vector<int> v;
v.reserve(n);
for(int i = 0; i<n ; i++){
cin >> ele;
v.push_back(ele);

}
int arr[5];
max_element(begin(arr) , end(arr) );

vector<int>::iterator ptr = max_element(begin(v) , end(v));

cout << *ptr << endl;
cout << ptr - v.begin() << endl;

return 0;
}
