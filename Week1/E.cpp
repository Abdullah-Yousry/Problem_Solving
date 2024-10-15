/*
We will itrate on the problems and see each time if the sum of three integers (a, b, c) >= 2 
then will increase implementedProblems by 1
*/
#include<iostream>
using namespace std;
int n, a, b, c, implementedProblems;
int main(){
    cin >> n;
    while(n--){
        /* INPUT */
        cin >> a >> b >> c;
        /* PROCESS */
        if(a + b + c >= 2){ // if 2 of them sure about the solution
            implementedProblems++; // Increase the count of implementedProblems by 1
        } 
    }
    /* OUTPUT */
    cout << implementedProblems;
}