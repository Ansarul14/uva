#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,m,c=2;
    m=1;
    while (1)
    {
        n=m;
        if ((n/2==2||3||5)||(n/3==2||3||5)||(n/5==2||3||5)){
            c++; cout<<n<<endl;}

        if (c==15)break;
        m=m+1;
    }


}
