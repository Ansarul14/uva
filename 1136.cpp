#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int i,j,n,m,s,k,c,t;

    scanf("%lld",&t);
    for (j=1;j<=t;j++)
    {
        scanf("%lld %lld",&n,&m);c=0;
        for (i=n;i<=m;i++)
        {
            s=i*(i+1)/2;
            if (s%3==0)c++;

        }
        printf ("Case %lld: %lld\n",j,c);
    }
    return 0;
}
