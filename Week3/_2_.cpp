/*
If the size of a word dosn't exeeded 10, So print it as is
Otherwise print the first character and the last character and between them print the size - 2 
NOTE: How do you get the last character --> s[s.zize() - 1] OR s.back(), Suppose we have string s;
*/
#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
    cin >> n;
    while(n--){
        cin >> s;
        if(s.size() <= 10){ // The word isn't long because its size doesn't exceeded 10
            cout << s << endl;
        }
        else{ // The word is long because its size exceeded 10
            cout << s[0] << s.size() - 2 << s.back()<< endl;            
        }
    }
}