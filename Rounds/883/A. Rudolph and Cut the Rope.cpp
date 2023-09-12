#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define wl int t; cin >> t; while(t--)
#define vint vector<int>
#define vll vector<ll>
#define sort(v) sort(v.begin(),v.end())
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main() {
    fast;
    wl{
        int n , cnt = 0, x, y; cin >> n;
        while (n--){
            cin >> x >> y;
            if(x > y) cnt++;
        }
        cout << cnt << '\n';
    };
}
