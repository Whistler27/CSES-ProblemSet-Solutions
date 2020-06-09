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
int n;
char a[1005][1005];
ll dp[1005][1005];
void solve(){
    cin >> n;
    
    loop(i,0,n){
        loop(j,0,n) cin >> a[i][j];
    }
 
    if(a[0][0]=='*' || a[n-1][n-1]=='*'){
        cout << 0 << endl;
        return;
    }
 
    loope(i,0,n){
        dp[i][0]=0;
        dp[0][i]=0;
    }
    dp[1][1]=1;
    loope(i,1,n){
        loope(j,1,n){
            if(i==1 && j==1) continue;
            if(a[i-1][j-1]=='*') dp[i][j]=0;
            else{
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
                dp[i][j]%=mod;
            }
            //cout << dp[i][j] << endl;
        }
    }
 
    cout << dp[n][n] << endl;
 
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