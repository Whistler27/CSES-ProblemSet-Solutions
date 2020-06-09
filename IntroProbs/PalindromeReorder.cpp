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
    string s;
    cin >> s;
    int freq[26];
    loop(i,0,26) freq[i]=0;
    int n=s.size();
    int cnte=0;
    loop(i,0,n){
        freq[s[i]-'A']++;
    }
 
    int p=-1;
    loop(i,0,26){
        if(freq[i]%2!=0) cnte++,p=i;
    }
 
    if(cnte>=2) cout << "NO SOLUTION";
    else{
        if(p==-1){
            //cout << "naman" << endl;
            loop(i,0,26){
                if(freq[i]>0){
                    //cout << "naman" << endl;
                    loop(j,0,freq[i]/2){
                        char cur='A'+i;
                        //cout << j << endl;
                        cout << cur;
                    }
                }
            }
            epool(i,25,0){
                if(freq[i]>0){
                    loop(j,0,freq[i]/2){
                        char cur='A'+i;
                        cout << cur;
                    }
                }
            }
        }
 
        else{
            deque<char> dq;
            loop(i,0,freq[p]){
                char ch='A'+p;
                dq.pb(ch);
            }
 
            loop(i,0,26){
                if(i==p) continue;
                else{
                    if(freq[i]>0){
                    //cout << "naman" << endl;
                        loop(j,0,freq[i]/2){
                            char cur='A'+i;
                        //cout << j << endl;
                            dq.push_front(cur);
                            dq.pb(cur);
                        }
                    }
                }
            }
 
            for(auto i:dq) cout << i;
                cout << endl;
 
        }
 
    }
 
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