/*
The smallest required value to be in any stack is the number of its index 
So we itrate on sataks and for each stack
    add the extra from the previous stacks to it 
    If the stack still has smaller vlaue than its index then that's impossible and make valid = false and exit
    But if it has equal or more than the value of its index
        we will take the remaining extra and put them in extra (in case of equal the extra = 0)
*/
#include<iostream>
using namespace std;
const int N = 1e2 + 9; // (1 * (10^2)) + 9
long long A[N]; 
int t, n;
int main(){
    cin >> t;
    while(t--){
        /* INPUT */
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        /* PROCESS & OUTPUT */
        bool valid = true;
        long long extra = 0; 
        for(int i = 0; i < n; i++){
            A[i] += extra; // Add the extra from the previous stacks to it 
            if(A[i] < i){ // If the stack has smaller vlaue than its index
                valid = false; // That's impossible 
                break; // Exit
            }
            else{ // if it has equal or more than the value of its index
                extra = A[i] - i; // We take the extra from it
            }
        }
        if(valid){ // That's possible 
            cout << "YES\n";
        }
        else{ // That's impossible 
            cout << "NO\n";
        }
    }
}