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
#define ret(x) return cout << x, 0;
#define all(v) v.begin(),v.end()
 
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const lli INF=1e18;
const double PI=4*atan(1);
 
int32_t main(){
    fast_io
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
        int n;
        cin >> n;
 
        lli arr[n];
        loop(i,0,n) cin >> arr[i];
 
        lli cur=arr[0];
        lli ans=0;
        loop(i,1,n){
        	ans+=max((lli)0,cur-arr[i]);
        	cur=max(cur,arr[i]);
        }
 
        cout << ans << endl;
 
    }
 
}