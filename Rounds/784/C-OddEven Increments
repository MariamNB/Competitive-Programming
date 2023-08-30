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

    wl{
        int evIdx = -1, odIdx = -1, x, n, ch = 1; cin >> n;
        while (n--){
            cin >> x;
            if(n % 2 && evIdx == -1){
                if(x % 2) evIdx = 0;
                else evIdx = 1;
            }
            else if(n % 2 == 0 && odIdx == -1){
                if(x % 2) odIdx = 0;
                else odIdx = 1;
            }
            else{
                if(n % 2){
                    if((x % 2  == 0 && !evIdx )||( x % 2 && evIdx)) ch = 0;
                }else{
                    if((x % 2  == 0 && !odIdx) || (x % 2 && odIdx)) ch = 0;
                }
            }
        }
        ch? yes : no;
    }

}
