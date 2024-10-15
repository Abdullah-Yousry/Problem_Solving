#include<bits/stdc++.h>
using namespace std;
string a, b; 
int main(){
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl; // Print the size of a and The size of b
    cout << a + b << endl; // Print Concatenate a and b
    swap(a[0], b[0]); // Swap the first character from a and the first character from b
    cout << a << " " << b; // Print a and b after swapping 
}