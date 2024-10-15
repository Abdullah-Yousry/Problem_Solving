/*
The sequance of triangular numbers : (1, 3, 6, 10, 15, .....)
And there's an equation to find the number of any position in the pervious sequance ==> T(p) = (p * (p + 1)) / 2
Example if we need to know the number of position 4
    then p = 4 ==> T(4) = (4 * (4 + 1)) / 2 = 10
So in the question we will calculate the number of position 1 until one of two specific conditions happens
1- T(p) > n then n is not in the sequance so print "NO" and exit
2- T(p) == n then n is in the sequance so print "YES" and exit
*/
#include<iostream>
using namespace std;
int n;
int main(){
    cin >> n;
    int p = 1; 
    while(true){ 
        int T = (p * (p + 1)) / 2; // calculate the number of position p
        if(T > n){
            cout << "NO";
            break;
        }
        if(T == n){
            cout << "YES";
            break;
        }
        p++; // p = p + 1; 
    }
}