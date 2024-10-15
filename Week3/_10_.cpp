/*
Consider the given array; each element asks you to print a letter that occurred k (the value of that element) times before 
So we make frequancy array and put all its element with 0 
And itrate on the given array and in each element we search on a letter that occurted k (the value of that element) times from 'a' to 'z' in frequancy array
    if we found it we will print it, increment the value of that letter by 1 and exit for next element
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
int A[N], frq[150];
int t, n;
void reset(){ 
    for(int i = 0; i < 150; i++){
        frq[i] = 0;
    }
}
int main(){
    cin >> t;
    while(t--){
        reset(); // Make all elements in frq array = 0 in each test case
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = 'a'; j <= 'z'; j++){ // Itrate on all lowercase letters
                if(A[i] == frq[j]){ // if we find a letter in frq array occurred A[i] times 
                    cout << char(j); // Print it
                    frq[j]++; // increment the occurrency of that letter by 1
                    break; // Exit for next
                }
            }
        }
        cout << endl;
    }
}