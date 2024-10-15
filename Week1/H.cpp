/*
1- Let's put the elements that have the smallest difference next to each other. How? by sorting
2- Create a flag to know if it valid to obtain one element or not and give it initial value true
2- Itrate on elemntes from 1 to n - 1 and if the difference between next to each other > 1 then impossible
to obtain the array consisting of only one element so make the flag = false 
otherwise the last element will stay and other can be deleted then the flag will ramain = true
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 60;
int A[N];
int t, n;
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        sort(A, A + n);
        bool valid = 1; // flag // We suppose in the start it can to obtain one element 
        for(int i = 0; i < n - 1; i++){
            if(abs(A[i] - A[i + 1]) > 1){
                valid = 0; // It's Impossible it can to obtain one element
                break;
            }
        }
        if(valid){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }   
}