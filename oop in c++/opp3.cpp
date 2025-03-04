#include <iostream>
using namespace std;

class myclass {
    public:
    int a;
    string b;
    cout <<"Enter the num1";
    cin >> a;
    cout <<"Enter the your name ";
    cin >> b;
};
int main()
{
    myclass myobj;
    myobj.a;
    myobj.b;

    cout <<myobj.a;"\n";
    cout <<myobj.b;
    return 0;
}