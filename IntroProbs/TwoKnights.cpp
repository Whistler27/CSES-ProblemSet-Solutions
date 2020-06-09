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
 
	lli ans[100001];
	loope(i,2,100000){
		ans[i]=(i*i)*(i*i-1)/2-4*(i-1)*(i-2);
	}
 
	lli t;
    t=1;
    //cin >> t;
    lli cno=0;
    while (t--){
      	int n;
      	cin >> n;
 
      	loope(i,1,n) cout << ans[i] << endl;
 
    }
 
}
