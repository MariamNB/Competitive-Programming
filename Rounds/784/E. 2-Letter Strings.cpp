#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define endl cout << '\n'
#define vint vector<int>
#define vll vector<ll>
#define pb push_back
#define wl int t; cin >> t; while(t--)
#define sort(v) sort(v.begin(),v.end())
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main() {

    wl {
        ll ans = 0;
        map <pair<char, char> , int> mp;
        wl{
            string s; cin >> s;
            for(char c = 'a'; c <= 'k'; c++){
                if(c != s[0]){
                    ans += mp[{c, s[1]}];
                }
                if(c != s[1]){
                    ans += mp[{s[0], c}];
                }
            }
            mp[{s[0], s[1]}]++;
        };
        cout << ans; endl;
    }
}
