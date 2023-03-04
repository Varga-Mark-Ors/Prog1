#include <iostream>

using namespace std;

int main()
{
    int szam;
    cout<<"Kérek egy számot=";
    cin>>szam;
    for (int i=2;i<=szam;i++)
    {
        if (szam%i==0)
            {
            cout<<i<<endl;
            }
    }
    return 0;
}