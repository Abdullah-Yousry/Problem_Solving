/*
If n = 5 --> (-1) + 2 + (-3) + 4 + (-5) let's calculate it step by step
-1 = -1
(-1) + 2 = 1
(-1) + 2 + (-3) = -2 
(-1) + 2 + (-3) + 4 = 2
(-1) + 2 + (-3) + 4 + (-5) = -3
So we probably noticed somthing, If the last number was even the answer always be n / 2
And If the last number was odd, the answer would always be (n / 2) + 1 but negative
NOTE 5 / 2 = 2 not 2.5
*/
#include<bits/stdc++.h>
using namespace std;
long long n;
int main(){
    cin >> n;
    if(n % 2 == 0){ // if n was even 
        cout << n / 2;
    }
    else{ // if n was odd 
        cout << -(n / 2 + 1); //
    }
}