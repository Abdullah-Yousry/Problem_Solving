/*
If q - p >= 2 then yhis room has 2 or more free places
otherwise No
*/
#include<bits/stdc++.h>
using namespace std;
int n, p, q;
int main(){
    cin >> n;
    int avalibleRoom = 0;
    while(n--){
        cin >> p >> q;
        if(q - p >= 2){
            avalibleRoom++;
        }
    }
    cout << avalibleRoom;
}