/*
The answer will be 0 or 1 or 2
If It's already the sum of the array divisable by 3 we won't make any move so answer = 0
if we increase sum by 1 and becomes divisable by 3 the answer = 1 because in this case it's valid to increase any element by 1 
or the array has only one element the answer = 1 becase if we deleted the sum becomes = 0 
otherwise 
    we iterate on the all elements and see if we deleteed one of them and the sum becomes divisable by 3 so answer = 1
    else the answer = 2 
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9; // 1 * (10^5) + 9
int t, n, A[N];
int main(){
    cin >> t;
    while(t--){
        long long sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            sum += A[i]; // Get the sum of all elements in the array
        }
        if(sum % 3 == 0){ // It's already the sum of the array divisable by 3
            cout << 0 << endl;
        }
        else if((sum + 1) % 3 == 0 || n == 1){ // If we increased any element by 1 and sum becomes divisable by 3 OR The array has only one element
            cout << 1 << endl;
        }
        else{
            int ans = 2;
            for(int i = 0; i < n; i++){
                long long  result = sum - A[i]; // pretend to delete element (i) from the sum
                if(result % 3 == 0){ // if the result is divided by 3
                    ans = 1;
                    break;
                }
            }
            cout << ans << endl; // If it dosen't enter in (if condition that in for) ans will be 2 
        }
    }   
}