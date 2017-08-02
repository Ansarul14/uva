#include<bits/stdc++.h>
using namespace std;
void make_set(int x,int y);
int froot(int x);
int fi(int x,int y);
#define ll long long
ll arr[30005],siz[30005];
ll  n,m,chck=-1;
main()
{
    ll t,i,j,x,y;
    cin>>t;
    for(ll ii=1;ii<=t;ii++)
    {
        cin>>n>>m;
        if (m==0)
            cout<<"1"<<endl;
        else {
        chck=-1;
        for(j=1;j<=n;j++)
        {
            arr[j]=j;
            siz[j]=1;
        }
        for(i=1;i<=m;i++)
        {
            cin>>x>>y;
            make_set(x,y);
        }
        //sort(siz,siz+n);
        //cout<<siz[n-1]<<endl;

        cout<<chck<<endl;}
    }
}
void make_set(int x,int y)
{
    int root1=froot(x);
    int root2=froot(y);
    if (root1!=root2){
    if (siz[root1]<siz[root2])
    {
        arr[root1]=arr[root2];
        siz[root2]+=siz[root1];
        if (siz[root2]>chck)
            {
                chck=siz[root2];
            }
    }
    else
    {
        arr[root2]=arr[root1];
        siz[root1]+=siz[root2];
        if (siz[root1]>chck)
        {
            chck=siz[root1];
        }
    }
    }

}
int froot(int x)
{
    while(x!=arr[x])
    {
        arr[x]=arr[arr[x]];
        x=arr[x];

    }
    return x;
}
