#include <iostream>

using namespace std;

int main()
{
    int sz1,sz2;
    cout<<"1.szám=";
    cin>>sz1;
    cout<<"2.szám=";
    cin>>sz2;
    while (sz1!=sz2)
    {
        if (sz1>sz2)
        {
            sz1=sz1-sz2;
        }
        else
        {
            sz2=sz2-sz1;
        }
    }
    cout<<"LNKO="<<sz2;
    return 0;
}