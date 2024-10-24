/*
When do we use the 2nd action?
    If we have just the same sequence in the beginning, we had better copy this sequence to another. Why?
        because that takes the size of the sequence to write in one of them and 1 to copy to the other 
after that, use the 1st action
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
string s, t;
signed main(){
    fast();
    ll tc; cin >> tc;
    while(tc--){
        cin >> s >> t;
        ll seq = 0;
        for(ll i = 0; i < min(s.size(), t.size()); i++){
            if(s[i] == t[i]){seq++;} // Get the size of the same sequence between 't' ans 's' in the beginning
            else{break;} // At any point where s[i] does not equal t[i], break this loop.
        }
        // If 'seq' is bigger than 0 then we need to add 1 to it (for copy operation), but if it equal 0 we don't need to do anything
        cout << (seq? seq+1 : 0) + (s.size()-seq) + (t.size()-seq) << endl;
    }
}