#include <iostream>

using namespace std;

int main()
{
    float fok,adat;
    cout<<"Fahrenheit(1) vagy Celsius(2)=";
    cin>>fok;
    cout<<"Értéket kérném szépen=";
    cin>>adat;
    if (fok==1)
    {
        adat=(adat-32)*0.5556;
        cout<<adat<<" Celsius";
    }
    else
    {
        adat=(adat*1.8)+32;
        cout<<adat<<" Fahrenheit";

    }
    return 0;
}