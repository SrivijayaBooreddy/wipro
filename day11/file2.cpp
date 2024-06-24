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
    
    if(denominator != 0)
    {
       int quotient = numerator/denominator;
       printf(" %d/%d=%d\n", numerator, denominator, quotient);
    }
    else
       cout << "Denominator should not be Zero \n";
    return 0;
}
