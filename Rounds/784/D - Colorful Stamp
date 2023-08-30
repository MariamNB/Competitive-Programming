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
        int n, ch = 1; cin >> n;
        string s = "";

        int cnt = 0;
        for(int i = 0; i < n; i++){
            char c; cin >> c;
            if(s.empty()) s.pb(c);
            else{
                if(s.back() != c) s.pb(c);
                else cnt++;
            }
        }

        if(n == cnt && s.back() != 'W') ch = 0;
        n = s.size();
        if((s[0] != 'W' && s[1] == 'W') || (s[n-1] != 'W' && s[n-2] == 'W') ||
        (n == 1 && s != "W") || (n == 2 && s[0] != s[1]) && (s[0] == 'W' || s[1] == 'W')) ch = 0;

        if(n >= 3){
            for (int i = 1; i <= n - 2; i++) {
                if (s[i] != 'W' && s[i - 1] == 'W' && s[i + 1] == 'W') ch = 0;
            }
        }

      ch? yes : no;

    }
}
