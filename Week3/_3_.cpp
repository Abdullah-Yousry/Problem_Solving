/*
We will sort the string, so all '+' will be before the digits brcause the asci code's '+' = 43 and the digits start from 48
So we know the count of '+' = s.size() / 2
So we will itrate on the string from s.size() / 2 until the digit that berore the last digit and print the digit and '+'.
NOTE: we started from s.size() / 2 because in this index will appear the first digit 
And then print the last character without '+'
*/
#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    cin >> s;
    sort(s.begin(), s.end()); // Sort the string s
    for(int i = s.size()/2; i < s.size() - 1; i++){ // itrate on the digits until the digit that berore the last digit
        cout << s[i] << '+';
    }
    cout << s.back(); // Print the last character
}