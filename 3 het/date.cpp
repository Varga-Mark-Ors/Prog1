
#include <iostream>

using namespace std;

int main()
{
    cout<<"Kérek szépen egy értéket=";
    int a,ev,het;
    cin>>a;
    while (a>6)
    {
        if (a % 365>0)
        {
            ev=a/365;
            a=a%365;
        }
        if (a % 7>0)
        {
            het=a/7;
            a=a%7;
        }
    }
    cout<<"Évek="<<ev<<endl;
    cout<<"Hetek="<<het<<endl;
    cout<<"Napok="<<a<<endl;

    return 0;
}