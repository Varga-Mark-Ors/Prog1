#include <iostream>

using namespace std;

int main()
{
    int szam,a;
    cout<<"Kérek egy számot=";
    cin>>szam;
    while (szam>0)
    {
        a=(a*10)+(szam%10);
        szam=szam/10;
    }
    cout<<a;
    return 0;
}