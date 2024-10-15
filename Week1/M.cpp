/*
Let's make 2 arrays for Odd and Even elements 
So we will always delete k elemets from eatch array. What is k?
    k = the size of the that has smaller size than other
And we should pick the remaining elements from the array that has a bigger size - 1 . Why -1?
    because we will always start deleting from the array that has a bigger size first
So we need to sort the bigger array to choose the sum of smallet elements 
And in case of tie we will print 0
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 2e3 + 9; // (2 * (10^3)) + 9 
int A[N], Even[N], Odd[N];
int t, n;
int main(){
    /* INPUT */
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    /* Divide the array A to 2 arrays (Odd, Even) */
    int indexEven = 0, indexOdd = 0; // For specifying the position of even elements in their array and odd elements, too.
    for(int i = 0; i < n; i++){
        if(A[i] % 2 == 0){ // If the element is even
            Even[indexEven] = A[i]; // Enter it in the position of indexEven the Even array
            indexEven++; // Increment the index of Even array by 1 for the next element if there
        }
        else{ // If the element is odd
            Odd[indexOdd] = A[i]; // Enter it in the position of indexOdd the Odd array
            indexOdd++; // Increment the index of Odd array by 1 for the next element if there
        }
    }
    // Now indexEven become to the size of even numbers and indexOdd become to the size of odd numbers
    int sum = 0;  
    if(indexEven > indexOdd){ // if the size of Even array > the size of Odd array 
        int remaining = indexEven - indexOdd;
        sort(Even, Even + indexEven);
        for(int i = 0; i < remaining - 1; i++){ 
            sum += Even[i];
        }
    }
    else{ // if the size of Odd array >= the size of Even array 
        int remaining = indexOdd - indexEven;
        sort(Odd, Odd + indexOdd);
        for(int i = 0; i < remaining - 1; i++){ // if the size of Odd array == the size of Even array this loop won't work and the sum = 0
            sum += Odd[i];
        }
    }
    cout << sum;
}