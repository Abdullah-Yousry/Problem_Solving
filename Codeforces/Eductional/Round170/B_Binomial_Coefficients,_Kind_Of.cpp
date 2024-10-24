/* 
If we trace the given code, we noticed something
1|
1|1
1|2|1
1|2|4|1
1|2|4|8|1
1|2|4|8|16|1
And you should notice another something, 'n' is bigger than or equal 2 and 'k' is always smaller than n.
That means they just ask for 'n' and 'k' that don't equal 1 or empty.
NOTE: 'n' and 'k' is 0-based
So there's a pattern for 'n' and 'k' that given:
    if k = 1 then answer = 2
    if k = 2 then answer = 4
    if k = 3 then answer = 8
    if k = 4 then answer = 16
So the answer will be 2^k
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const ll N = 2e5+9, mod = 1e9+7;
ll n[N], k[N];
ll fpow(ll b, ll p){ // Fast Power O(log p)
    if(p == 0){return 1;}
    ll half = fpow(b, p>>1) % mod;
    return (p&1? ((half * half) % mod * b) % mod : (half * half) % mod);
}
signed main(){
    fast();
    ll t; cin >> t;
    for(ll i = 0; i < t; i++){
        cin >> n[i];
    }
    for(ll i = 0; i < t; i++){
        cin >> k[i];
    }
    for(ll i = 0; i < t; i++){
        cout << fpow(2, k[i]) << endl;
    }
}   
