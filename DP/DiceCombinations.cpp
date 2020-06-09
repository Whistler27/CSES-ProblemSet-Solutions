#include <bits/stdc++.h>
typedef long long int lli;
typedef unsigned long long int ulli;
typedef long double ldb;
 
#define endl '\n'
#define loop(i, m, n) for (lli i = m; i < n; i++)
#define loope(i, m, n) for (lli i = m; i <= n; i++)
#define epool(i, m, n) for (lli i = m; i >= n; i--)
#define maxe *max_element
#define mine *min_element
#define mod 1000000007
#define mod2 998244353
#define vt vector<lli>
#define fi first
#define se second
#define pb push_back
#define umap unordered_map
#define mmap multimap
#define MP make_pair
#define empf emplace_front
#define empb emplace_back
#define ret(x) return cout << x << endl, 0;
#define all(v) v.begin(),v.end()
 
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
 
lli gcd(lli a, lli b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
lli lcm(lli a, lli b){
    return (a * b) / gcd(a, b);
}
 
lli modi( lli n, lli m=mod ){ 
    n%=m;
    n+=m;
    n%=m;
    return n;
}
 
lli mpow(lli base, lli exp){
    base %= mod;
    lli result = 1;
    while (exp > 0){
        if (exp & 1)
            result = ((lli)result * base) % mod;
        base = ((lli)base * base) % mod;
        exp >>= 1;
    }
    return result;
}
 
const lli MIN=-1*1e18;
const lli INF=1e18+999999999999999999;
const lli N=2e5+5;
const ldb pi=4*atan(1);
 
int32_t main(){
    fast_io
    lli i = 0,j = 0;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //cout << fixed << setprecision(22);
   
    lli n;
    cin >> n;
   
    lli dp[n+1]={0};
    dp[0]=1;
    for(int i=0;i<=n; i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                dp[i]+=dp[i-j];
                dp[i]%=mod;
            }
        }
        dp[i]%=mod;
    }
 
    cout << dp[n] << endl;
 
 
}