/*
Let's try all possible sloution (Brute force) and get the maximum between them
1 ==> a + b + c      
2 ==> a * b * c        
3 ==> a + (b * c)    
4 ==> (a + b) * c       
5 ==> (a * b) + c         
6 ==> a * (b + c) 
NOTE    Always if we make addition before doing multiplication the result will be greater 
So we have just 4 possible sloution (1, 2, 4, 6)
*/
#include<bits/stdc++.h>
using namespace std;
int a, b, c;
int main(){
    cin >> a >> b >> c;
    int possible1 = a + b + c;
    int possible2 = a * b * c;
    int possible3 = (a + b) * c;
    int possible4 = a * (b + c);
    cout << max({possible1, possible2, possible3, possible4}); // Get the maximum between possible1 and possible2 and possible3 and possible4
}