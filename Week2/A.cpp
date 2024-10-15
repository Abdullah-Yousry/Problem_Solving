/*
If a is divisble by b then moves = 0
But If a is smaller than b then all we will do is make a = b then moves = b - a
otherwise 
    We will get the remainder because it has caused the problem (it isn't allow a divisble by b)
    Then we need to make the remainder = b to disappear the problem, so the moves will be = b - remainder
*/
#include<bits/stdc++.h>
using namespace std;
int t, a, b, moves;
int main(){
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a % b == 0){ // If a is divisble by b 
            moves = 0;
        }
        else if(a < b){ // If a is smaller than b
            moves = b - a; // get count of moves to make a = b
        }
        else{ // If a is bigger than b
            int remainder = a % b; // get the remainder
            moves = b - remainder; // get count of moves to make remainder = b
        }
        cout << moves << endl;
    }
}