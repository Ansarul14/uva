#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[30],s2[30],ch;
    int n,m,i,j,sum,ans;
    //getchar();
        while(cin.getline(s1,30)){
        cin.getline(s2,30);
        int sum1=0,sum2=0;
        for(i=0;s1[i]!='\0';i++)
        {
            if(s1[i]>='a' && s1[i]<='z')
                s1[i]=s1[i]-32;
            if(s1[i]>='A' && s1[i]<='Z')
            {
                sum1+=s1[i]-65+1;
                //cout<<sum1<<endl;
            }
        }
        for(i=0;s2[i]!='\0';i++)
        {
            if(s2[i]>='a' && s2[i]<='z')
                s2[i]=s2[i]-32;
            if(s2[i]>='A' &&s2[i]<='Z')
            {
                sum2+=s2[i]-65+1;
            }
        }
        while(1)
        {
            if(sum1<=9)break;
            ans=0;
            n=sum1;
            while(n!=0)
            {
                ans+=n%10;
                n=n/10;
            }
            sum1=ans;
            //cout<<sum1<<endl;
        }
        while(1)
        {
            if(sum2<=9)break;
            ans=0;
            n=sum2;
            while(n!=0)
            {
                ans+=n%10;
                n=n/10;
            }
            sum2=ans;
            //cout<<sum1<<endl;
        }
        //cout<<sum1<<" "<<sum2<<endl;
       double res=((double)min(sum1,sum2)*100.0)/(double)max(sum1,sum2);
       printf("%.2lf",res);
       cout<<" %"<<endl;
        }
}
