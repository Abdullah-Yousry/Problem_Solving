/*
We make an array like a frequency array but this will be tells us if an alpha apear or not, so we initialize all its elements by false means there aren't characters don't apear yet
And we itrate on all string and if we find an alphabet we make it true in the position of that character means that character apear
And then we itrate on this apear array from the position of 'a' until the position of 'z' to see who apeared, so we calculate the sum. Why?
    Because If a character doesn't appear then it will be 0(false), so doesn't affect and If a character appear one or more than one then it will be 1(true)
*/
#include<bits/stdc++.h>
using namespace std;
bool apear[150]; // As long as I initialize in the global zone, so by default all elements = false
int main(){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i])){ // if this a character
            char c = s[i];
            apear[c] = true; // this character is apeared, so make it true 
        }
    }   
    int sum = 0; 
    for(int c = 'a'; c <= 'z'; c++){ // we itrate on this apear array from the position of 'a' until the position of 'z'
        sum += apear[c]; // If this character appear then we add to sum 1 and if not then we add to sum 0
    }
    cout << sum;
}