/*
Store the decoded digits in an string array --> digits[10].
then for every 10 digits in the coded string find a match in the decoded digits Array and print the its index.
*/
#include <bits/stdc++.h>
using namespace std;
string digits[10];
string coded;
int main(){
    cin >> coded;
    for(int i = 0; i < 10; i++){ // Store the decoded digits in an string array
        cin >> digits[i];
    }
    for(int st = 0; st < coded.size(); st += 10){ // For every 10 digits in the coded string
        string part = coded.substr(st, 10); // get the 10 digits
        for(int j = 0; j < 10; j++){ // Search on the match of those 10 digits
            if(part == digits[j]){ // If find the match
                cout << j; // Print its index
                break; // Exit for the next 10 digit
            }
        }
    }
}