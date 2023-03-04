#include <iostream>

using namespace std;

int main()
{
        int db,i;
        db=0;
        cout<<"Kérek egy számot=";
        cin>>i;
        for(int j=2;j<(i/2);j++)
        {
           if (i%j==0)
           {
               db=db+1;
               break;
           }
        }
        if (db==0 and i!=1)
        {
            cout<<"Prím";
        }
        else
        {
            cout<<"Nem prím";
 
        }
}