#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define wl int t; cin >> t; while(t--)
#define sumL_R(L,R) (R*(R+1)/2)-((L-1)*((L-1)+1)/2)
#define sum1_n(n) n*(n+1)/2
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
#define vint vector<int>
#define vpi vector<pair <int,int>>
#define vll vector<ll>
#define ii pair<int,int>
#define pqint priority_queue<int>
#define pqll priority_queue<ll>
#define sort(v) sort(v.begin(),v.end())
#define sortrv sort(v.rbegin(),v.rend())
#define cin(v) for(auto& i : v) cin >> i;
#define cout(v) for(auto& i : v) cout << i << " "; cout <<' ';
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

//===============================================
bool comp( pair<string,int> &a , pair<string,int> &b){
    return a.second > b.second;
}
//================================================
//bool isprime(ll n);
//ll gcd(ll a,ll b);
//ll lcm(ll a, ll b);
//void prime_factors(ll n);
//================================================
int main() {
    //The road is deserted and faulty, use it at your own risk!
    fast;

    wl{
        int n; cin >> n;
        string s, ans; cin >> s;
        loop(i,n) s[i] = tolower(s[i]);
        loop(i,n){
            if(s[i] != s[i+1]) ans.push_back(s[i]);
        }
        (ans == "meow")? yes : no;
    };

}
//==============================================
//bool isprime(ll n){
//    if(n == 1) return false;
//    for(int i = 2; i * i <= n ;i++)
//    {
//        if(n % i == 0) return false;
//    }
//    return true;
//}
//void prime_factors(ll n){
//    for(int i=2;i*i<=n;i++){
//        while(!(n%i)){
//            cout<<i<<' ';
//            n/=i;
//        }
//    }
//    if(n>1) cout<<n<<' ';
//}
//ll gcd(ll a,ll b){
//    if (b == 0) return a;
//    return gcd(b, a % b);
//}
//ll lcm(ll a, ll b){
//    return a/gcd(a,b)*b;
//}
//=================================================
//  smallest => priority_queue<int, vector<int>, greater<int>> pq;
