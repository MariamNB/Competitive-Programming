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
    wl {
        ll n, m, h, y; cin >> n >> m >> h;
        ll probF , penalF , pos = 1;

        for(int z = 0; z < n; z++){
            ll tim = 0, prob = 0, penal = 0;
            vector <int> v(m,0);
            for(int i = 0; i < m; i++) cin >> v[i];
            sort(v); y = 0;
            for(int i = 0; i < m; i++){
                tim += v[i];
                if(tim <= h) {
                    penal += (y + v[i]);
                    prob++;
                }
                if(!i) y = v[i];
                else y += v[i];
            }
            // cout << prob << ' ' << penal << '\n';
            if(!z){
                probF = prob, penalF = penal;
            }else{
                if(prob > probF) pos++;
                else if(prob == probF){
                    if(penalF > penal) pos++;
                }
            }
        }
        cout << pos << '\n';
    };
}
