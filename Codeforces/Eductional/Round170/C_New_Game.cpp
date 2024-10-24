/*
We sort the array and use 2-pointer technique
When is the segment valid?
    1- The distincit numbers that in it are don't exeeded 'k'
    2- The difference between each element and the previous element is equal 1 
Print the max valid segment
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const ll N = 2e5+9, oo = 0x3f3f3f3f, mod = 1e9+7;
ll A[N];
ll n, k;
signed main(){
    fast();
    ll t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(ll i = 0; i < n; i++){
            cin >> A[i];
        }
        sort(A, A+n);
        ll l = 0, r = 1, ans = 1, distCnt = 1;
        for(r = 1; r < n; r++){
            ans = max(ans, r-l); // Calculate the number of the elements in current segment (r-l) and if is bigger than 'ans' store it in 'ans'
            if(A[r] - A[r-1] > 1){ // If the difference between the current and previous element bigger than 1
                l = r;
                distCnt = 1;
                continue;
            }
            if(A[r] != A[r-1]){distCnt++;}
            while(distCnt > k){ // If the current segment have distincit number bigger than 'k'
                l++;  
                if(A[l] != A[l-1]){distCnt--;} // After l move to the next element if the next element is not equal to the previous element reduce 'distCnt' by 1
            }
        }
        cout <<  max(ans, r-l) << endl; // Print the max between the number of the elements in current segment (r-l) and 'ans'
    }
}