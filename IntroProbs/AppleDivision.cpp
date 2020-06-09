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
#define vi vector<ll>
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
 
void solve(){
    int n;
    cin >> n;
    ll ans=INF;
    ll p[n];
    loop(i,0,n) cin >> p[i];
 
    loop(i,0,1<<n){
        ll mask=i;
        ll l=0,r=0;
        for(int j=0;j<n; j++){
            if((mask&(1<<j))) l+=p[j];
            else r+=p[j];
        }
 
        ans=min(ans,abs(l-r));
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
