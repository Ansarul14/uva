#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,c,i,j;

    while(cin>>n>>m>>k)
    {
        if (n==0&&m==0&&k==0)
            break;
            char s[30][30];
        int sum[20][20];
        for(i=0;i<n;i++)
            cin>>s[i];
        int x,y;
        x=0;y=k-1;
        c=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                sum[i][j]=-1;
        }
        sum[x][y]=0;
        while(1)
        {
            c++;
            if (s[x][y]=='N')
                x--;
            else if (s[x][y]=='S')
                x++;
            else if (s[x][y]=='E')
                y++;
            else
                y--;
            if (x<0||y<0||x>=n||y>=m)
            {
                cout<<c<<" step(s) to exit"<<endl;
                break;
            }
            if (sum[x][y]!=-1)
            {
                printf("%d step(s) before a loop of %d step(s)\n",sum[x][y],c-sum[x][y]);
                break;
            }
            sum[x][y]=c;
        }
    }
}
