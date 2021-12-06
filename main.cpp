#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int v[1000],i,ok1=1,ok2=0,x,j;
    for(i=0 ; i<=999 ; i++)
        v[i]=0;
    while(in>>x)
    {
        v[x]++;
    }
    for(i=0 ; i<=999 ; i++)
        if(v[i]%2!=0){
        ok2++;
        j=i;
        }
    for(i=0 ; i<=999 ; i++)
        if(v[i]%2!=0 && j!=i)
        ok1=0;
    if(ok1==1 && ok2==1)
        cout<<"DA";
    else
        cout<<"NU";

    in.close();

    return 0;
}
