#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,i,x;
    long long p,q,ans;
    while(cin>>n>>m)
    {
        if (n==0&&m==0)break;
        int c=0;
        /*for(i=n;i<=m;i++)
        {
            x=sqrt(i);
            if (x==(int)x)
                c++;
        }
        cout<<c<<endl;*/
        //better way no need loop...
        x=sqrt(n);
        p=sqrt(n);
        q=sqrt(m);
        ans=abs(q-p);
        if (x==p)
            ans=ans+1;
        cout<<ans<<endl;
    }
}
