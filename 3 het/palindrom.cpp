
#include <iostream>

using namespace std;

int main()
{
    int szam,a,sz;
    cout<<"Kérek egy számot=";
    cin>>szam;
    sz=szam;
    while (szam>0)
    {
        a=(a*10)+(szam%10);
        szam=szam/10;
    }
    if (sz==a)
    {
        cout<<"Palindrom";
    }
    else
    {
        cout<<"Nem palindrom";
    }
    return 0;
}