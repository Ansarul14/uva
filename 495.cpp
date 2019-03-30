#include<bits/stdc++.h>
using namespace std;
long long fib(int n,int m);
int c,t;
long long sum;
main()
{
    int   a,b,add,n,i,j;

    while (cin>>t)
    {
        c=1;
        i=0;j=1;
        sum=0;
        fib(i,j);
        cout<<sum<<endl;
       // sum=0;
    }
}
long long fib(int n,int m)
{
    if (c<t){
    sum=n+m;
    n=m;
    m=sum;
    c++;
    fib(n,m);}
    else
    {
        return sum;
    }
}


