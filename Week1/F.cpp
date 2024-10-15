/*
We will muliply a by 3 and muliply b by 2 until a become bigger than b
And we print how many time the loop works  
*/
#include <iostream>
using namespace std;
int a, b;
int main(){
    cin >> a >> b;
    int years = 0;
    while(a <= b){ // As long as a is smaller than or equal b enter this loop
        a *= 3;
        b *= 2;
        years++;
    }
    cout << years << endl;
}