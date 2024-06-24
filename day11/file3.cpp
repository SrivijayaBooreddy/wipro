#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int numerator = 0;
    int denominator = 0;
    
    cout <<"Enter the value of numerator: ";
    cin >> numerator;
    cout << "Enter the value of denominator: ";
    cin >> denominator;
    
    try
    {
    if(denominator == 0)
           throw "denominator should not be zero \n";
       int quotient = numerator/denominator;
       printf(" %d/%d=%d\n", numerator, denominator, quotient);
    }
    catch(const char *msg)
    {
        cout << msg;
    }
    return 0;
}
