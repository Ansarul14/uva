#include<bits/stdc++.h>
using namespace std;
int make_set(int u,int v);
int froot(int u);
int find(int u,int v);
int arr[1000],siz[1000];
int main()
{
    int n,m,i,j,p,q,t,k;
    string s;
    scanf("%d\n\n",&t);
    //getchar();
    while(t--)
    {
        getline(cin,s);
        j=1;
        map<char,int>mp;
        map<char,int>::iterator it;

        for(char ch1='A';ch1<=s[0];ch1++)
        {
            mp[ch1]=j;
            j++;
        }
        j=j-1;

        for(k=1;k<=j;k++)
        {
            arr[k]=k;
            siz[k]=1;
        }
        while(1)
        {
            if (!getline(cin,s)||s.empty())break;
            p=mp[s[0]];
            q=mp[s[1]];
            make_set(p,q);

        }int co=0;
        set<int>ss;
        //cout<<j<<endl;
        for(k=1;k<=j;k++){
               q=froot(k);
               //cout<<q<<endl;
               ss.insert(q);
        }
        //if (i!=1)cout<<endl;

        cout<<ss.size()<<endl;
        if (t)
            cout<<endl;
    }
}
int make_set(int u,int v)
{
    int froot1=froot(u);
    int froot2=froot(v);
    if (siz[froot1]<siz[froot2]){
        arr[froot1]=arr[froot2];
        siz[froot2]+=siz[froot1];
    }
    else {
        arr[froot2]=arr[froot1];
        siz[froot1]+=siz[froot2];
    }
}
int froot(int u ){
    while(arr[u]!=u)
    {
        arr[u]=arr[arr[u]];
        u=arr[u];
    }
    return u;
}
int find(int u,int v)
{
    if (arr[u]==arr[v])
    {
        return true;
    }
    else
        return false;
}
