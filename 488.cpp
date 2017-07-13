#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i,j,k,n,m,p;
    cin>>t;
    //cout<<endl;
    for (i=1;i<=t;i++)
    {

        cin>>n>>m;

        for (j=1;j<=m;j++)
        {
            for (k=1;k<=n;k++)
            {
                for (p=1;p<=k;p++)
                    cout<<k;
                   cout<<endl;
            }
            for (k=n-1;k>=1;k--)
            {
                for (p=1;p<=k;p++)
                    cout<<k;
                cout<<endl;
            }
               //cout<<endl;
          if (i<=t)
            cout<<endl;
        }

    }
}
