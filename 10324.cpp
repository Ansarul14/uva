#include<bits/stdc++.h>
using namespace std;
main()
{
   char s[2000000];
    char ch;
    long int i,j,n,m,c,k,t,p,q,flag,l;
    c=1;
    while(cin>>s)
    {
            l=strlen(s);
            if (l==0)break;
           cin>>t;
           flag=0;

           for(i=1;i<=t;i++)
           {
               cin>>n>>m;
               p=min(n,m);
               q=max(n,m);
               for(j=p+1;j<=q;j++)
               {
                   if (s[p]==s[j])
                   {
                       flag=0;
                   }
                   else
                   {
                       flag=1;break;
                   }
               }
               if (i==1)
               printf("Case %ld:",c);
               if (i==1)
                cout<<endl;
               if (flag==0)
                cout<<"Yes"<<endl;
               if (flag==1)
                cout<<"No"<<endl;

           }
           c++;
    }
}
