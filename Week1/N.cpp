/*
At first consider the day aren't continuos. So, iterate over hours and get the maximum continous sequance of 1 HOW?
if the element equals 1
    then increase currentLenth by 1
otherwise
    put the sequance that you reach it into maximumLenth if maximumLenth < currentLenth
    reset currentLenth to 0
But remember the day are continuos we need to itrate one more Why?
    if the input was => n = 5 and {1, 1, 0, 1, 1} the first loop make the maximumLenth = 2 and this not true it should be 4
So we itrate one more by the same approach
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9; // (2 * (10^5)) + 9
int A[N];
int t, n;
int main(){
    /* INPUT */
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    /* PROCESS & OUTPUT */
    int maximumLenth = 0, currentLenth = 0;
    for(int i = 0; i < n; i++){ // The first iterative
        if(A[i] == 1){
            currentLenth++;
        }
        else{ // A[i] == 0
            if(maximumLenth < currentLenth){
                maximumLenth = currentLenth;
            }
            currentLenth = 0; // Reset
        }
    }
    for(int i = 0; i < n; i++){ // The second iterative
        if(A[i] == 1){
            currentLenth++;
        }
        else{ // A[i] == 0
            if(maximumLenth < currentLenth){
                maximumLenth = currentLenth;
            }
            currentLenth = 0; // Reset
        }
    }
    cout << maximumLenth;
}