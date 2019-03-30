#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
    long long unsigned   n,m,i,j,c,p,t,k;
    vector<long long unsigned int>v;
    vector<long long unsigned int>v1;
     while (cin>>n>>m){


     if (n==0&&m==0)break;

     if (n<=m){
         for (i=n;i<=m;i++){
                t=i; c=0;k=0;
         while (1)
         {
             if (t%2==0)
             {
                 p=t/2;c++;k++;
                 if (p==1){v.push_back(c);v1.push_back(k);break;}
             }
             if (t%2!=0)
             {
                 p=3*t+1;
                 c++;k++;
             }
             t=p;
         }
         }
      sort(v.begin(),v.end(),std::greater<int>());

      //cout<<v[0]<<endl;
      for (j=0;j<v1.size();j++)
      {
          if (v1[j]==v[0]){
         printf ("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",n,m,j+n,v[0]);break;}
      }
      v1.clear();
      v.clear();

}
if (n>m){
         for (i=m;i<=n;i++){
                t=i; c=0;k=0;
         while (1)
         {
             if (t%2==0)
             {
                 p=t/2;c++;k++;
                 if (p==1){v.push_back(c);v1.push_back(k);break;}
             }
             if (t%2!=0)
             {
                 p=3*t+1;
                 c++;k++;
             }
             t=p;
         }
         }

           sort(v.begin(),v.end(),std::greater<int>());

      //cout<<v[0]<<endl;
      for (j=0;j<v1.size();j++)
      {
          if (v1[j]==v[0]){
         printf ("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",m,n,j+m,v[0]);break;}
      }
      v1.clear();
      v.clear();

}
}
return 0;
}
