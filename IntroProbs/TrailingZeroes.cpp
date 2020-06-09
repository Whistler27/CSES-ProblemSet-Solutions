#include <bits/stdc++.h>
typedef long long int lli;
//typedef unsigned long long int ulli;
typedef long double ldb;
 
#define endl '\n'
#define loop(i, m, n) for (lli i = m; i < n; i++)
#define loope(i, m, n) for (lli i = m; i <= n; i++)
#define epool(i, m, n) for (lli i = m; i >= n; i--)
#define mod 1000000007
#define mod2 998244353
#define vt vector<lli>
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
 
const lli INF=1e18;
const double PI=4*atan(1);
 
int32_t main(){
    naman
    lli i = 0,j = 0;
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
*/
	//cout << fixed << setprecision(10);
 
	lli t;
    t=1;
    //cin >> t;
    lli cno=0;
    while (t--){
      	lli n;
      	cin >> n;
 
      	lli po2=0,po5=0;
 
      	lli a=n;
      	while(a>0){
      		po2+=a/2;
      		a=a/2;
      	}
 
      	a=n;
      	while(a>0){
      		po5+=a/5;
      		a=a/5;
      	}
 
      	cout << min(po2,po5) << endl;
 
    }
 
}