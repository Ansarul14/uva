#include<bits/stdc++.h>
using namespace std;
main()
{
    double num,ans;
    int n;
    while (cin>>num)
    {
        if (num==0)
            break;
        n=sqrt(num);
        ans=pow(n,2);
        if (ans==num)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
