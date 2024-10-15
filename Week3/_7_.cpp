/*
Because of limits that we have, we make frequancy array on lowercase letters 
After that we can itarate on this frequancy array from 'a' until 'z' and print the letter by the number of repetitions
*/
#include<bits/stdc++.h>
using namespace std;
int n, frqLetters[150]; // By default all elements in this array equal 0
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        frqLetters[c]++; // Increase the frequency of this letter by 1
    }
    for(int i = 'a'; i <= 'z'; i++){ // Itrate the all lowercase letters
        for(int j = 0; j < frqLetters[i]; j++){ // Itrate on the number of repetitions of this letter
            cout << (char)i; // we p put (char) becase we want print that letter not its asci code
        }
    }
}