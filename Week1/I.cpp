/*
We want to reach from n to 1 in minimum moves, So
if n is divided by 2 do it because this is the most move that will reduce n 
if n isn't divided by 2 but divided by 3 do it because this is the second most move that will reduce n   
if n isn't divided by 2 or 3 but divided by 5 do it
Otherwise there isn't solution and make flag valid = 1
*/
#include<bits/stdc++.h>
using namespace std;
int q;
long long n;
int main(){
    cin >> q;
    while(q--){
        /* INPUT */
        cin >> n;
        /* PROCESS & OUTPUT */
        long long moves = 0;
        bool valid = true;
        while(n > 1){ // Inner while
            if(n % 2 == 0){ // if n is divided by 2 
                n = n / 2;
            }
            else if(n % 3 == 0){ // if n is divided by 3
                n = (2 * n) / 3;
            }
            else if(n % 5 == 0){ // if n is divided by 5 
                n = (4 * n ) / 5;
            }
            else{ // if n isn't divided by 2 or 3 or 5
                valid = false; // there isn't solution
                break; // Exit from inner while
            }
            moves++; // if n was divided by 2 or 3 or 5 we will increment the moves 
        }
        if(valid){
            cout << moves << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
} 