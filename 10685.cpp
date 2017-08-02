#include<bits/stdc++.h>
using namespace std;
void make_set(int x,int y);
int froot(int x);

#define ll long long
ll arr[5005],siz[5005];
ll n,m,chck=-1;
main()
{
    ll i,j,p,q;

    while(cin>>n>>m){
            if (n==0&&m==0)break;
            //if (n!=0&&m==0)
            chck=-1;

   char s1[35],s2[35];
    for(i=1;i<=n;i++)
    {
        cin>>s1;
        arr[i]=i;
        siz[i]=1;

    }
    //chck=-1;
    map<string,int>mp;
    int tx,ty,size=0;
    if (m==0){chck=1;cout<<"1"<<endl;}
    else {
    for(i=1;i<=m;i++)
    {
        cin>>s1>>s2;
        tx=mp[s1];
        if (tx==0)
        {
            mp[s1]=++size;
            tx=size;
        }
        ty=mp[s2];
        if (ty==0)
        {
            mp[s2]=++size;
            ty=size;
        }
        make_set(tx,ty);
    }
    cout<<chck<<endl;

    }
    //cout<<endl;
}
}
void make_set(int x,int y)
{
    int root1=froot(x);
    int root2=froot(y);
    if (root1!=root2)
    {
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
    while(arr[x]!=x)
    {
        arr[x]=arr[arr[x]];
        x=arr[x];
    }
    return x;
}
