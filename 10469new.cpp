#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j;
    while(cin>>n>>m){
    double p1=log(n)/log(2);
    long long q1=p1;
    double p2=log(m)/log(2);
    long long q2=p2;
    double ch1,ch2;
    ch1=pow(2,q1);
    ch2=pow(2,q2);
    //cout<<ch1<<" "<<ch2<<endl;
    long long arr1[10005],arr2[10005];
    q1=ch1;q2=ch2;
    long long c1=0,c2=0,sum=0;
    while(1)
    {
        if(sum+q1<=n){
            arr1[c1++]=1;
            sum+=q1;
        }
        else
            arr1[c1++]=0;

        q1=q1/2;
        if(q1==0)break;

    }
    sum=0;
    while(1)
    {
        if(sum+q2<=m){
            arr2[c2++]=1;
            sum+=q2;
        }
        else
            arr2[c2++]=0;

        q2=q2/2;
        if(q2==0)break;
    }
    long long temp=1,ans=0;
    long long dif=max(c1,c2)-min(c1,c2);
    //cout<<dif<<" "<<c1<<" "<<c2<<endl;
    for(i=min(c1,c2)-1;i>=0;i--)
    {
        if(c1>c2)
        {
            if(arr2[i]!=arr1[dif+i])
                ans+=temp;
        }
        else if(c2>c1)
        {
            if(arr2[dif+i]!=arr1[i])
                ans+=temp;
        }
        else
        {
            if(arr2[i]!=arr1[i])
                ans+=temp;
        }
        temp=temp*2;
    }
   // cout<<ans<<endl;
   // temp=temp*2;
    for(i=dif-1;i>=0;i--)
    {
        if(c1>c2)
        {
            if(arr1[i]==1)
                ans+=temp;
        }
        if(c2>c1)
        {
            if(arr2[i]==1)
                ans+=temp;
        }
        temp=temp*2;
    }
    cout<<ans<<endl;
    }
}
