#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define endl cout << '\n'
#define vint vector<int>
#define vll vector<ll>
#define pb push_back
#define S second
#define F first
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define cnte(v, x) count(all(v), (x))
#define wl int t; cin >> t; while(t--)
//#define sort(v) sort(v.begin(),v.end())
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main() {

    fast;
    wl{
        int mx = 500;

        wl{
            int a, b;
            cin >> a >> b;

            int x = a + (((b-2)+1)/2);
            mx = min(x, mx);
        };

        cout << mx; endl;
    }
}
