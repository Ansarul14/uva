#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
   // getchar();
   map<string,string>mp;
   map<string,string>::iterator it;
    getline(cin,s1);
    while(s1!="")
    {
         stringstream ss(s1);
         ss>>s2>>s3;
         mp[s3]=s2;
        getline(cin,s1);
    }
    while(cin>>s1)
    {
        it=mp.find(s1);
        if (it==mp.end())
        {
            cout<<"eh"<<endl;
        }
        else
        {
            cout<<it->second<<endl;
        }
    }
}
