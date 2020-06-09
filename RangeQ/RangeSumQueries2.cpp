#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
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
#define ret(x) return cout << x,0;
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
 
void update(ll ind, ll val, ll* bit,ll n){
    for(;ind<=n;ind+=((ind)&(-ind))){
        bit[ind]+=(val);
    }
}
 
ll query(ll ind,ll* bit){
    ll sum=0;
    for(;ind>=1; (ind-=(ind)&(-ind))){
        sum+=bit[ind];
    }
    return sum;
}
 
 
void solve(){
    ll n,q;
    cin >> n >> q;
    ll bit[n+1];
    loop(i,0,n+1) bit[i]=0;
    ll arr[n+1];
    loop(i,0,n){
        cin >> arr[i+1];
        update(i+1,arr[i+1],bit,n);
    }
 
    while(q--){
        ll p,a,b;
        cin >> p >> a >> b;
 
        if(p==1){
            update(a,b-arr[a],bit,n);
            arr[a]=b;
        }
        else{
            cout << query(b,bit)-query(a-1,bit) << endl;
        }
    }
 
}
 
int32_t main(){
    naman
    ll i = 0,j = 0;
 
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
 
    //cout << fixed << setprecision(10);
 
    int t;
    t=1;
    //cin >> t;
    while (t--){
        solve();
 
    }
 
}