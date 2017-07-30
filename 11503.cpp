#include<bits/stdc++.h>
using namespace std;
int make_set(int x,int y);
int froot(int x);
int fi(int x,int y);
int siz[100005],arr[100005];
int main()
{
    char s1[30],s2[30];

    int t,n,tx,ty,i,p;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        map<string,int>mp;
        for(int j=1;j<=n;j++)
        {
            siz[j]=1;
            arr[j]=j;
        }
        int sizee=0;
        for(int j=1;j<=n;j++)
        {
            cin>>s1>>s2;
            tx=mp[s1];
            //cout<<tx<<endl;
            if (tx==0)
            {
                mp[s1]=++sizee;
                tx=sizee;
            }

            ty=mp[s2];
            if (ty==0)
            {
                mp[s2]=++sizee;
                ty=sizee;
            }


           make_set(tx,ty);
        }
    }
}
int  make_set(int x,int y)
{
    int root1=froot(x);
    int root2=froot(y);
    if (root1!=root2){

    if (siz[root1]<siz[root2])
    {
        arr[root1]=arr[root2];
        siz[root2]+=siz[root1];
        cout<<siz[root2]<<endl;
       // return siz[root2];
    }
    else
    {
        arr[root2]=arr[root1];
        siz[root1]+=siz[root2];
        //return siz[root1];
        cout<<siz[root1]<<endl;
    }

    }
   else cout<<siz[root1]<<endl;
    //
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
