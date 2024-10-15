/*
If n is equal 1, so n has only divisor (1), so 1 not greater than 1, then print "NO" 
If n is odd and greater than 1, so n is odd divisor for itself then print "YES" 
If n is even, so we will divide it by 2 until one of conditions happen
    1- If n becomes equal 1 then all divisor of n are odd, so print "NO" and exit
    2- If n becomes doesn't divisible by 2 and n not equal 1 then there's an odd divisor, so print "YES" and exit
NOTE: in conditon 2 we don't have to type this (n not equal 1) because if n equal 1 the condition 1 will work and exit
*/
#include<bits/stdc++.h>
using namespace std;
int t;
long long n;
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 1){ // If n equal 1
            cout << "NO\n";
        }
        else if(n % 2 == 1){ // If n is odd AND greater than 1
            cout << "YES\n";
        }
        else{ // If n is even
            while(true){ // This while will work until one of conditions below happen
                n /= 2; // divide n by 2
                if(n == 1){ // If n becomes 1 
                    cout << "NO\n";
                    break; // Exit 
                }
                if(n % 2 == 1){ // If n becomes doesn't divisible by 2 
                    cout << "YES\n"; 
                    break; // Exit
                }
            }
        }
    }
}