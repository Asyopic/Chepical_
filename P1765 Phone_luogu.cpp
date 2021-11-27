#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans = 0; string s;
    int num[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
    {
        if((s[i] >= 'a')&&(s[i] <= 'z'))
        {
            ans += num[s[i] - 'a'];
        }
        if(s[i] == ' ')
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
