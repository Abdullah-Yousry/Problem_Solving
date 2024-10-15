/*
We will itrate on the two strings and convert the digits from char to int. How? s[i] - '0' --> Example '4' - '0' = 4; 
    and then the possible 1 is if we have 1 and we want to reach 7 is to move from 1 to 7 by this way (1, 2,...,7)--> abs(1 - 7) = 6
    the possible 2 is to move from 1 to 7 by this way (1, 0, 9, 8, 7) -> 10 - abs(1 - 7)
    and then increment answer by the minimum between them (possible1, possible 2)
*/
#include<bits/stdc++.h>
using namespace std;
int n;
string a, b;
int main(){
    cin >> n >> a >> b;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int digit1 = a[i] - '0', digit2 = b[i] - '0'; // convert the digit from char to int
        int possible1 = abs(digit1 - digit2); // Possible 1
        int possible2 = 10 - abs(digit1 - digit2); // Possible 2
        ans += min(possible1, possible2); // Increment answer by the minimum between them (possible1, possible 2)
    }
    cout << ans;
}