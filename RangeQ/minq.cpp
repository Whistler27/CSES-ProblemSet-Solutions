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
const ll INF=1e15;
const double PI=4*atan(1);
 
#define SpeedForce                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
 
ll mpow(ll base,ll exp);
void solve();
ll POW(ll base,ll exp);
ll gcd(ll a,ll b);
 
int32_t main(){
    SpeedForce
    ll i = 0,j = 0;
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
 
    int t;
    t=1;
    //cin >> t;
    while (t--){
        //cout << fixed << setprecision(10);
        solve();
    }
}
 
ll a[200009],seg[4*200009];
 
void build(ll ind,ll low,ll high){
 
    if(low==high){
        seg[ind]=a[low];
        return;
    }
    ll mid=(low+high)/2;
    build(2*ind+1,low,mid);
    build(2*ind+2,mid+1,high);
    seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
   // cout << seg[ind] << endl;
}
 
ll query(ll ind,ll l,ll r,ll low,ll high){
 
    if(low>r || high<l) return INT_MAX;
    if(low>=l && high<=r) return seg[ind];
 
    ll mid=(low+high)/2;
    int lef=query(2*ind+1,l,r,low,mid);
    int rig=query(2*ind+2,l,r,mid+1,high);
  //  cout << lef << " " << rig << endl;
    return min(lef,rig);
 
}
 
void solve(){
    ll n,q;
    cin >> n >> q;
    memset(seg,0,sizeof(seg));
    loop(i,0,n) cin >> a[i];
    build(0,0,n-1);
 
    while(q--){
        ll l,r;
        cin >> l >> r;
        l--,r--;
        cout << query(0,l,r,0,n-1) << endl;
    }
 
}
 
ll POW(ll base,ll exp){
    ll result = 1;
    while (exp > 0){
        if (exp & 1)
            result = ((ll)result * base);
        base = ((ll)base * base);
        exp >>= 1;
    }
    return result;
}
 
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
 
ll gcd(ll a, ll b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}