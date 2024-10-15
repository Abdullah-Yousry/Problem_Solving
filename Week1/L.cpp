/*
We want to sort elements in decreasing order to get the minimum sum fo shoots nbut we can't use built-in sort function because we want the indeces after decreasing sorting
So before doing sorting we save the intial index for every element 1-based ==> {1,2,3,...}
Then we use selection sort algorithm and each time when we will be swap elements, we will swap inexces, too 
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 9; // (1 * (10^3)) + 9 
int A[N], indeces[N];
int n;
int main(){
    /* INPUT */
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    /* PROCESS & OUTPUT   */
    for(int i = 0; i < n; i++){ // Store the inexes of element in array
        indeces[i] = i + 1;
    }
    int shoots = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){ // The inner loop
            if(A[j] > A[i]){ // There's an element bigger than the element before it  
                swap(A[j], A[i]); // Swap elements 
                swap(indeces[j], indeces[i]); // Swap their indeces
            }
        }
        shoots += A[i] * i + 1; // After finishing the inner lopp the index i will be the bigger than the elements after it so Calculate
    }
    cout << shoots << endl;
    for(int i = 0; i < n; i++){
        cout << indeces[i] << " ";
    }
}