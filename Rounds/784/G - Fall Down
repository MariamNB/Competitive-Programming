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
#define wl int t; cin >> t; while(t--)
#define sort(v) sort(v.begin(),v.end())
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

int main() {

    wl {
        int r, c, cnt, idx; cin >> r >> c;
        char a[r][c];

        for(int i = 0; i < r; i++){
            for(int z = 0; z < c; z++) cin >> a[i][z];
        }

        for(int i = 0; i < c; i++){

            for(int z = r-1; z >= 1; z--){
                if(a[z][i] == '.' && a[z-1][i] == '*'){
                    int k = z;
                    while (z < r && a[z][i] != 'o'){
                        swap(a[z][i], a[z-1][i]);
                        z++;
                    }
                    z = k;
                }
            }
        }

        for(int i = 0; i < r; i++){
            for(int z = 0; z < c; z++) {
                cout << a[i][z];
            }
            endl;
        }
        endl;

    }
}
