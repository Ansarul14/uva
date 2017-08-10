#include<bits/stdc++.h>
using namespace std;
bool prime[1000005]={0};
int sum(int j);
#define ll long long
int main()
{
    ll n,m,i,j,p,q,tm,c,t;
    for(i=4;i<=1000000;i+=2)
    {
        prime[i]=1;
    }
    prime[2]=0;prime[1]=1;prime[0]=1;
    for(i=3;i<=sqrt(1000000);i+=2)
    {
        if (prime[i]==0)
        for(j=i*i;j<=1000000;j+=2*i)
            prime[j]=1;
    }
    vector<ll>v;
    c=0;
    ll ans;
    for(i=0;i<=1000000;i++)
    {
        if (prime[i]==0&&prime[sum(i)]==0){
            c++;

        }
        v.push_back(c);
    }
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&n,&m);

       ans=abs(v[m]-v[n-1]);
        printf("%lld\n",ans);
    }
}
int sum(int j)
{
    int sum=0;
    while(j!=0)
    {
        sum+=j%10;
        j=j/10;
    }
    return sum;
}
