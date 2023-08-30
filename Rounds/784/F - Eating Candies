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
        int n, ans = 0; cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        map <int, int> a, b;
        int k = arr[0];
        for (int i = 0; i < n - 1; i++) {
            a[k] = i;
            k += arr[i+1];
        }

        k = arr[n - 1];
        for (int i = n -1; i >= 1; i--) {
            b[k] = i;
            k += arr[i-1];
        }

        for(auto &[x, y] : a) {
            if (b.count(x)) {
                if (b[x] > a[x]) {
                    ans = a[x] + 1 + (n - b[x]);
                }
            }
        }
        cout << ans; endl;
    }
}
