#include<bits/stdc++.h>
using namespace std;
int a[1000000],b[1000000],d[1000000];
main()
{
     long long int n,i,j,c,m,k,p,t;
     cin>>n;
     for(i=1;i<=n;i++)
     {
         //cout<<endl;
         cin>>m;
         t=0;
         for(j=1;j<=m;j++)
            cin>>a[j]>>b[j];
            c=0;
            //cout<<endl;
         for(j=m;j>=1;j--)
         {
               k=a[j]+b[j]+c;
               if (k>=10)
               {
                   c=1;
                   p=k%10;
               }
               else{
                p=k;c=0;}
             d[t++]=p;
         }

         for(j=t-1;j>=0;j--)
            cout<<d[j];
            cout<<endl;
            if (i!=n)
                cout<<endl;


     }

     return 0;
}
