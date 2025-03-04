#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    // first input
    cout<<"Enter the value of a: ";
    cin>>a;

    // second input
    cout << "enter the value of b :";
    cin>>b;

    cout << "Enter the operation you want to perform (+,-,*,/): ";
    cin>>c;

    switch (c)
    {
    case '+':
        c= a+b;
        break;
    
    case '-':
        cout << "subtraction of a and b is: "<<a-b;
        break;
    
    case '*':
        cout << "multiplication of a and b is: "<<a*b;
        break;
    
    case '/':
        cout << "division of a and b is: "<<a/b;
        break;
    
    default:
    cout << "Invalid operation";
        break;
    }

    return 0;
}