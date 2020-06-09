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
 
	lli t;
    t=1;
    //cin >> t;
    lli cno=0;
    while (t--){
      	lli n;
      	cin >> n;
 
      	if(n%4==1 || n%4==2) cout << "NO" << endl;
      	else{
      		cout << "YES" << endl;
      		vector<lli> a,b;
      		if(n%4==0){
      			loope(i,1,n/2){
      				if(i%2!=0) a.pb(i);
      				else b.pb(i);
      			}
      			loope(i,n/2+1,n){
      				if(i%2!=0) b.pb(i);
      				else a.pb(i);
      			}
 
      			cout << a.size() << endl;
      			loop(i,0,a.size()) cout << a[i] << " ";
      			cout << endl;
      			cout << b.size() << endl;
      			loop(i,0,b.size()) cout << b[i] << " ";
      			cout << endl;
      		}
      		else{
      			lli sum=(n*(n+1))/4;
      			lli p=-1;
      			epool(i,n,1){
      				if(sum-i>=0){
      					a.pb(i);
      					sum-=i;
      				}
      				else{
      					p=i;
      					break;
      				}
      			}
 
      			if(sum>0) a.pb(sum);
 
      			loope(i,1,p){
      				if(i!=sum) b.pb(i);
      			}
 
      			cout << a.size() << endl;
      			loop(i,0,a.size()) cout << a[i] << " ";
      			cout << endl;
      			cout << b.size() << endl;
      			loop(i,0,b.size()) cout << b[i] << " ";
      			cout << endl;
 
      		}
      	}
 
    }
 
}