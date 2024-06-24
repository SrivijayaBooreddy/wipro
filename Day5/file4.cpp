#include <iostream>
#include <stack>
using namespace std;
int main()
{
stack<int> s;
cout << "Size of Stack : " << s.size() << endl;
cout << "Is Stack Empty : " << s.empty() << endl;

s.push(34);
cout << endl << "After inserting some elements " << endl;
cout << "Size of Stack : " << s.size() << endl;
cout << "Is Stack Empty : " << s.empty() << endl;

s.pop();
cout << endl << "After Removing elements " << endl;
cout << "Size of Stack : " << s.size() << endl;
cout << "Is Stack Empty : " << s.empty() << endl;

cout << "The top element of Stack : " << s.top() << endl;
}
