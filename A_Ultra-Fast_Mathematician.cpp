#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.length();++i)
    {
        if(s1[i]!=s2[i])
        cout<<1;
        else
        cout<<0;
    }
}