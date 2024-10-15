/*
We will declare ans variable and itrate in string s and if found '1' so increment ans by a1
and if found '2' so increment ans by a2
and if found '3' so increment ans by a3
and if found '3' so increment ans by a4
*/
#include<bits/stdc++.h>
using namespace std;
string s;
int a1, a2, a3, a4; 
int main(){
    cin >> a1 >> a2 >> a3 >> a4;
    cin >> s;
    int ans = 0; // Initialization
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            ans += a1;
        }
        else if(s[i] == '2'){
            ans += a2;
        }
        else if(s[i] == '3'){
            ans += a3;
        }
        else{ // s[i] == '4'
            ans += a4;
        }
    }
    cout << ans;
}