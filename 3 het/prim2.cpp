#include <iostream>

using namespace std;

int main()
{
    int db;
    for (int i=2;i<1000;i++)
    {
        db=0;
        for(int j=2;j<(i/2);j++)
        {
           if (i%j==0)
           {
               db=db+1;
               break;
           }
        }
        if (db==0)
        {
            cout<<i<<" ";
        }
    }
}