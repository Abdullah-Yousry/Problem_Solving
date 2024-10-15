/*
How to get n? each both elements look to each other the difference between them = 1/2 n
    So n = abs(a - b) + abs(a - b) NOTE we use abs() function because we need the difference between them in positive
When do we peint -1? if a bigger than n OR b bigger than n OR c bigger than n because those will not be in the cycle 
NOTE consider c in the first half and d in the second half, so d = c + 1/2, c = d - 1/2 
If c is in the first half, so we add 1/2 n to c because we need to find d 
But if c is in the second half we subtract c from 1/2 n becase in this case we consider c --> d and you need to find c 
*/
#include<bits/stdc++.h>
using namespace std;
int t, a, b, c;
int main(){
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        int n = abs(a - b) + abs(a - b); // To get n
        if(a > n || b > n || c > n){ // If the given numbers won't to be in the cycle of n people
            cout << -1 << endl;
        }
        else if(c <= n / 2){ // If c was in the first half, so we have to find d
            cout << c + n / 2 << endl; // D equation
        }
        else{ // If c was in the second half, so we have to find c
            cout << c - n / 2 << endl; // C equation
        }
    }
}