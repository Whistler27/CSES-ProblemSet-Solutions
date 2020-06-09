#include <bits/stdc++.h>
typedef long long int ll;
//typedef unsigned long long int ull;
typedef long double ld;
 
#define endl '\n'
#define loop(i, m, n) for (ll i = m; i < n; i++)
#define loope(i, m, n) for (ll i = m; i <= n; i++)
#define epool(i, m, n) for (ll i = m; i >= n; i--)
#define mod 1000000007
#define mod2 998244353
#define vi vector<li>
#define fi first
#define se second
#define pb push_back
#define MP make_pair
#define empf emplace_front
#define empb emplace_back
#define ret(x) return cout << x, 0;
#define all(v) v.begin(),v.end()
 
#define naman                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
 
ll mpow(ll base, ll exp){
    base %= mod;
    ll result = 1;
    while (exp > 0){
        if (exp & 1)
            result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
}
 
const ll INF=1e18;
const double PI=4*atan(1);
 
int mad(int n){
    int ma=0;
    while(n>0){
        ma=max(ma,n%10);
        n=n/10;
    }
    return ma;
}
 
void solve(){
    int n;
    cin >> n;
    int ans=0;
    while(n!=0){
        ans++;
        n=n-mad(n);
    }
 
    cout << ans << endl;
 
}
 
int32_t main(){
    naman
    ll i = 0,j = 0;
     /*
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
*/
    //cout << fixed << setprecision(10);
 
    ll t;
    t=1;
    //cin >> t;
    ll cno=0;
    while (t--){
        solve();
 
    }
 
}