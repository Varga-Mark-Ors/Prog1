#include <iostream>

using namespace std;


int main()
{
    char a;
    cout<<"DB=? ";
    int db,b;
    cin>>db;
    db=db-1;
    int tomb[db];
    int i=0;
    while (i<=db)
    {
        cout<<endl<<"Adat=";
        cin>>a;
        b=int(a)-48;
        
        if (b<10 and b>=0)
        {
            tomb[i]=b;
            i+=1;
        }
        else if (b<=54 and b>=49)
        {
            tomb[i]=b-39;
            i+=1;
        }
        else
        {
            cout<<"Az adat nem megfelelo!!"<<endl;
        }
       
    }
    for (i=0;i<=db;i++)
    {
        cout<<tomb[i]<<",";
    }
    return 0;
}