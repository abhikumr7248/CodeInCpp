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
int n;
string s;
public:
    void input()
    {
        cin>>n;
        cin>>s;
    }
    void solve()
    {
        set<char>q;
	for (int i = 0; i < n; ++i) {
		q.insert(toupper(s[i]));
	}
	if (q.size() == 26) {
		cout << "YES";
		return;
	}
    cout << "NO";
        // string t="pangram";
        // unordered_map<char,int> mp;
        // for(auto &a: s)
        // {
        // if(isupper(a))
        // a=tolower(a);
        // mp[a]++;
        // //cout<<a<<endl;
        // }
        
        // int x=0;
        // for(int i=0;i<t.size();++i)
        // {
        //     if(mp.find(t[i])==mp.end())
        //     {
        //         cout<<"NO";
        //         x=1;
        //         break;
        //     }
        // }
        // if(x==0)
        // cout<<"YES";
    }
};
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int n;
    // cin >> n;
    // Solution S[n];
    // for (int i = 0; i < n; ++i)
    // {
    //     S[i].input();
    //     S[i].solve();
    // }
    Solution S;
    S.input();
    S.solve();
    return 0;
}