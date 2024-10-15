/*
What is the smallest even number? 2.
Then let's give Pete 2 kilos
And if the remaining is even
Then Billy take the remaining
So shoud W be even and biggest than 2
*/
#include<iostream>
using namespace std;
int w;
int main(){
    cin >> w;
    if(w > 2 && w % 2 == 0){ // If w is bigger than 2 and w is even
        cout << "YES"; 
    }
    else{
        cout << "NO";
    }
}