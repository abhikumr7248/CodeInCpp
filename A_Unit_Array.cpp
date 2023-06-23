#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll signed long long
#define ld long double
#define to_low(s) transform(s.begin(), s.end(), s.begin(), ::tolower); // convert string to lowercase
#define to_up(s) transform(s.begin(), s.end(), s.begin(), ::toupper);  // convert string to uppercase
/*------------------------------------------------------------------------------------------------------------------------------*/
class Solution
{
private:
//1
void sw(int& aa, int& bb)
{
    aa^= bb^= aa^=bb;
}
//2
void ul(char& aa)
{
    aa=aa^32;
}
//3
bool eq(int aa, int bb)
{
    if(!(aa^bb))
    return true;
    else
    return false;
}
//4
int max3(int aa,int bb,int cc)
{
    int maxi=aa;
    (maxi<bb) && (maxi=bb);
    (maxi<cc) && (maxi=cc);
    return maxi;
}
//5
int min3(int aa, int bb, int cc)
{
    int mini = aa;
    (mini > bb) && (mini = bb);
    (mini > cc) && (mini = cc);
    return mini;
}
//6
int isPowerOf2(int aa)
{
    return (aa && !(aa & (aa-1)));
}
public:
// int n;
// vector<int> v;
    void input()
    {
        // cin>>n;
        // v.resize(n);
        // for(auto &it: v)
        // cin>>it;
    }
    void solve()
    {
        // int neg=0,pos=0;
        // for(int i=0;i<n;++i)
        // {
        //     if(v[i]==1)
        //     pos++;
        //     else
        //     neg++;
        // }
        // if(pos>=neg && neg%2==0)
        // cout<<0<<endl;
        // else if(pos>=neg && neg%2!=0)
        // cout<<1<<endl;
        // else if(pos<neg)
        // {
        //     int x=neg-pos;
        //     x--;
        //     neg=neg-x;
        //     int ans=x;
        //     if(neg%2!=0)
        //     ans++;
        //     cout<<ans<<endl;
        // }
        int n;
        cin >> n;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
        int x;
        cin >> x;
        if (x == 1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
        }
        int ans = 0;
        while (cnt1 < cnt2)
        {
        cnt1++;
        cnt2--;
        ans++;
        }
        if (cnt2 % 2 == 1)
        {
        ans++;
        }
        cout << ans << endl;
    }
};
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    Solution S[n];
    for (int i = 0; i < n; ++i)
    {
        S[i].input();
        S[i].solve();
    }
    // Solution S;
    // S.input();
    // S.solve();
    return 0;
}