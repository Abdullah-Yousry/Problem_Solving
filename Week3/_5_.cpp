/*
First of all, we will print k distinct letters that start with 'a'
Then we will print n - k once 'a' and once 'b' 
    because we are sure that 'a' and 'b' are printed in distinct letters because of this (k >= 2) 
    and It is not allowed to print two similar letters one after the other 
NOTE: How print once 'a' and once 'b'? we all know in a loop (i) once will be odd and once will be even, so we can print 'a' if i was even and 'b' if i was odd
*/
#include<bits/stdc++.h>
using namespace std;
int n, k;
int main(){
    cin >> n >> k;
    int start = 'a';
   for(int i = 0; i < k; i++){ // Print k distinct letters starting from 'a'
        cout << char(start + i); // every itrate (start('a')) will be increment by i and we put char() because we need to print char, not its asci code  
    }
    for(int i = 0; i < n - k; i++){ // Print n - k letters not distinct
        if(i % 2 == 0){ // if i was even
            cout << 'a'; // print 'a'
        }
        else{ // if i was odd
            cout << 'b'; // print 'b'
        }
    }

}