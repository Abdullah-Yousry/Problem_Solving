/*
We calculat the required time to finishing all songs and between the songs Churu will tell 2 jokes
So if the required time > d then print -1
Otherwise
    Calculate the remaining time to finish this festival and calculate how many 5's in it 
    And increase it to the number of jokes that Churu told it
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e2 + 9; // (1 * (10^2)) + 9 
int A[N];
int t, n, d;
int main(){
    /* INPUT */
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    /* PROCESS & OUTPUT */
    int requiredTime = 0;
    for(int i = 0; i < n; i++){ // Get the time of each song
        requiredTime += A[i];
    }
    requiredTime += 10 * (n - 1); // add the rest time between each song
    if(requiredTime > d){
        cout << -1 << endl;
    }
    else{
        int jokes = 2 * (n - 1); // jokes that told betweeen the song 
        int remainingTime = d - requiredTime; 
        jokes += remainingTime / 5; // add count of 5's in the remaining time 
        cout << jokes << endl;
    }
}