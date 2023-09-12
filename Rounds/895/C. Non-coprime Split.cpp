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

vint factors(int n){
    vint res;
    for(int i = 2; i * i <= n; i++){
        if(!( n % i)){
            res.pb(i);
            if(i * i != n){
                res.pb(n / i );
            }
        }
    }
    return res;
}

int main() {

    fast;

    wl{
        int a, b;
        cin >> a >> b;

        int ev = 0;
        for(int i = a-2; i <= b-2 && ! ev; i++){
            if(i % 2 == 0 && i > 0){
                ev = i;
            }
        }

        if(ev && 2 + ev <= b){
            cout << 2 << ' ' << ev;
        }
        else if(a == b && a % 2){
            int c = 0;
            vint fac = factors(a);
            for(auto& i : fac){
                if(gcd(a, a-i) != 1 && i + (a-i) == a){
                    c = 1;
                    cout << i  << ' ' << a-i;
                    break;
                }
            }
            if(!c) cout << -1;
        }else{
            cout << -1;
        }
        endl;
    };
}
