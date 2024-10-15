/*
In the problem, we need to divide n into 2021 or 2020 or both.
Example 
    8081 = 2020 + 2020 + 2020 + 2021 = (2020 * 3) + (2021 * 1) 
So let's try all possible solutions from 0 to 500 on each side. Why 500?
    if n was consist of one of the 2020 or 2021 ==> (2020 * 500) + (2021 * 0) = 1010000 and n <= 1000000
    So if we reach 500 on each side then this will be impossible
    And if we find a solution before 500 then make valid flag = 1
*/
#include<bits/stdc++.h>
using namespace std;
int t, n;
int main(){
    cin >> t;
    while(t--){
        /* Input */
        cin >> n;
        bool valid = 0;
        for(int countOf2020 = 0; countOf2020 <= 500; countOf2020++){ // Iterate over possible counts of 2020s
            for(int countOf2021 = 0; countOf2021 <= 500; countOf2021++){ // Iterate over possible counts of 2021s
                if(n == countOf2021 * 2021 + countOf2020 * 2020){
                    valid = 1; // There's a solution
                    break; // Exit from inner loop
                }
            }
            if(valid){
                break; // Exit from outer loop
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