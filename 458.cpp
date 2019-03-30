#include<bits/stdc++.h>
using namespace std;
main()
{
    char s[1000];
    while (cin>>s){
    int i,l;
    l=strlen(s);
    for (i=0;i<l;i++)
        s[i]=s[i]-7;
        printf ("%s",s);
    printf ("\n");}
    return 0;
}
