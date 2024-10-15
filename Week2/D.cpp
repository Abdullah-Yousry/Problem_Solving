/*
We will get the number of k's in n. How? n / k
and if it was odd then Sasha wins because he always starts first
and if it was even then Sasha didn't win 
*/
#include<bits/stdc++.h>
using namespace std;
long long n, k;
int main(){
    cin >> n >> k;
    long long count_k_in_n = n / k;
    if(count_k_in_n % 2 == 0){ // if count_k_in_n was even 
        cout << "NO";
    }
    else{ // if count_k_in_n was odd 
        cout << "YES";
    }
}