#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
main()
{
    long long n,m,i,p,c,j,b,s,d;
    while (cin>>i>>m){

    if (i<=m){j=0;
        for (p=i;p<=m;p++){

            n=p;c=0;
    while (1)
    {
          if (n==1){
                c++; a[j]=c;
                j++;
            break;}

        if (n%2==0)
        {
            b=n/2;
            c++;
        }
         if (n%2!=0)
        {
            b=3*n+1;
            c++;
        }

        n=b;
    }

    }
    sort(a,a+j);
    cout<<i<<' '<<m<<' '<<a[j-1]<<endl<<j<<endl;}
    if (i>m)
    {
        s=0;
         for (p=i;p>=m;p--){

            n=p;c=0;
    while (1)
    {
          if (n==1){
                c++; a[s]=c;
                s++;
            break;}

        if (n%2==0)
        {
            b=n/2;
            c++;
        }
         if (n%2!=0)
        {
            b=3*n+1;
            c++;
        }

        n=b;
    }

    }
    sort(a,a+s);
    cout<<i<<' '<<m<<' '<<a[s-1]<<endl;}
    }
    return 0;
}
