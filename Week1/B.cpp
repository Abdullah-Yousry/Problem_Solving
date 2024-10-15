/*
We should pick 5 to reach to x in the minimun number of moves
So We want to know how many 5's are in x? x / 5
And if x isn't divisable by 5 then there is a remaining and always it will be the smallest than 5 then add 1 to (x / 5)
Example if x = 12 ==> 
    12 / 5 = 2 then we have two 5's in x ==> (5,10)
    and 12 isn't divisable by 5 then we add 1
    And the answer will be 3
*/
#include<iostream>
using namespace std;
int x;
int main(){
    cin >> x;
    if(x % 5 == 0){ // x is divisable by 5
        cout << x / 5;
    }
    else{ // x isn't divisable by 5
        cout << x / 5 + 1;
    }
}