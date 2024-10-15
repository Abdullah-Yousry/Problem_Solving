/*
All possible solution to make the 2 rectangles to a square is 4 possible solution
1- a1 == a2 && b1 + b2 == a1
2- a1 == b2 && a2 + b1 == a1
3- b1 == a2 && a1 + b2 == b1
4- b1 == b2 && a2 + a1 == b1
othewise
    this will be impossible
*/
#include<bits/stdc++.h>
using namespace std;
int t, a1, b1, a2, b2;
int main(){
    cin >> t;
    while(t--){
        /* INPUT */
        cin >> a1 >> b1 >> a2 >> b2;
        /* PROCESS & OUTPUT */
        bool possible1 = (a1 == a2 && b1 + b2 == a1);
        bool possible2 = (a1 == b2 && a2 + b1 == a1);
        bool possible3 = (b1 == a2 && a1 + b2 == b1);
        bool possible4 = (b1 == b2 && a2 + a1 == b1);
        if(possible1 == true){
            cout << "YES\n";
        }
        else if(possible2 == true){
            cout << "YES\n";
        }
        else if(possible3  == true){
            cout << "YES\n";
        }
        else if(possible4 == true){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

}