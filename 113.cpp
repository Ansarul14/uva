#include<bits/stdc++.h>
#include<math.h>
using namespace std;
main()
{

  double m,p,k,n;
  while (cin>>n>>p)
  {
    m=  1/n;
       k=pow(p,m);
       printf ("%.0lf\n",k);
  }
  return 0;
}
