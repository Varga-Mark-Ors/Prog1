#include <iostream>
#include <string>


const int n=10;
int jatek;
const int m=11;
const int arr[n][m]=
    {0,2,0,0,0,0,0,0,0,0,0,
    0,0,6,0,0,0,0,0,0,0,0,
    0,0,1,15,0,0,0,0,0,0,0,
    0,0,0,2,100,0,0,0,0,0,0,
    0,0,0,2,10,200,0,0,0,0,0,
    1,0,0,0,3,20,500,0,0,0,0,
    1,0,0,0,2,6,60,5000,0,0,0,
    1,0,0,0,0,5,25,350,20000,0,0,
    2,0,0,0,0,3,12,100,1200,100000,0,
    2,0,0,0,0,1,3,30,350,8000,1000000,};

using namespace std;

string szemely(string nv)
{
    cout<<"Játékos neve=";
    getline(cin,nv);
    return nv;
}

int money()
{
    cout<<"Játszott összeg=";
    int osz;
    cin>> osz;
    return osz;
}

int mod(int jate)
{
    int jatek=0;
    while (jate<1 or jate>10)
    {
        cout<<"Játékmód=";
        cin>>jate;
        if (jate<1 or jate>10)
        {
            cout<<"A megadott mód nem létezik, kérem adjon egy másik számot."<<endl;
        }
    }
    return jate;
}

int random(int min,int max)
{
    return rand() % (max-min+1)+min;
}

int jatval(int b)
{
    int szamot=0;
    while (szamot<1 or szamot>80)
    {
        cout<<"Kérek egy számot="<<endl;
        cin>>szamot;
        if (szamot<1 or szamot>80)
        {
            cout<<"A szám nem megfelelő"<<endl;
        }
    }
    return szamot;
}

int has(int jarr[],int rarr[])
{
    int dd=0;
    for (int t=0;t<jatek;t++)
    {
        for (int e=0;e<20;e++)
        {
            if (jarr[t]==rarr[e])
            {
                dd=dd+1;
            }
        }
    }
    return dd;
}

int main()
{
    string nev;
    nev=szemely(nev);
    
    int ossz;
    ossz=money();
    
    jatek=mod(jatek);
    
    int randsz[20];
    bool all=true;
    int i=0;
    while (i<20)
    {   
        all=true;
        int a=random(1,80); 
        for (int j=0;j<=i;j++)
        {
            if (randsz[j]==a)
            {
                all=false;
            }
        }
        if (all==true)
        {
            randsz[i]=a;
            i=i+1;
        }
    }
    
    for (int i=0;i<20;i++)
    {
        cout<<randsz[i]<<" ";
    }
    cout<<endl;
    i=0;
    int jatsz[jatek];
    while (i<jatek)
    {   
        all=true;
        int a=jatval(a); 
        for (int j=0;j<=i;j++)
        {
            if (jatsz[j]==a)
            {
                all=false;
                cout<<"Ez a szám már volt egyszer."<<endl;
            }
        }
        if (all==true)
        {
            jatsz[i]=a;
            i=i+1;
        }
    }
    
   
    int db=has(jatsz,randsz);

    int szor=arr[jatek-1][db];
    
    if (szor==0)
    {
        cout<<nev<<", ön sajnos nem nyert.";
    }
    else
    {
        cout<<nev<<", ön "<<szor*ossz<<" forintot nyert!";
    }
    
    return 0;
}