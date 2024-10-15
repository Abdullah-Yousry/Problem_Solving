/*
In the side of the odd numbers we can get them by its possition. How?
We noticed that any odd numbers = its possition + (its possition - 1)
So if k was in the side of the odd numbers the equation will be this ==> k + k - 1
But if k was in the side of the even numbers
It will be the same thing but small things will be changed
    We act that even numbrer start from 1 like odd numbers. How? k = (k - the size of odd numbers)
    then the equation will be this ==> k(new) + k(new) without - 1
NOTE if n was odd numbers, then the size of odd numbers = n / 2 + 1, otherwise the size of odd numbers = n / 2
*/
#include<bits/stdc++.h>
using namespace std;
long long n, k;
int main(){
    cin >> n >> k;
    long long sizeOdd = n / 2 + (n % 2 == 1); // (n % 2 == 1) ==> if n was odd number then return 1 (sizeOdd = n / 2 + 1) otherwise return 0 (sizeOdd = n / 2 + 0) 
    if(k <= sizeOdd){ // k is in the side of the odd numbers
        cout << k + k - 1;
    }
    else{ // k is in the side of the even numbers
        cout << (k - sizeOdd) + (k - sizeOdd);
    }
}