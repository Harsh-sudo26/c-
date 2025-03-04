#include <iostream>
using namespace std;

class myclass{
    public:
    int mynum;
    string myString;
};
int main()
{
    myclass myobj;
    myobj.mynum = 10;
    myobj.myString = "some text";

    cout <<myobj.mynum <<"\n";
    cout <<myobj.myString;
    return 0;
}