/*
We will keep buying shovels until one of those conditions happened
1- PaidMoney(the money that we payed to buy shovels) is be divided by 10. Why?
    because we already bought the minimum number of shovels without any change 
2- The remainder of paidMoney after removing all 10s from paidMoney is equal r. Why?
    In this case, suppose r = 2 and the paidMoney = 32 then we have all the right to use one coin of r burles and stop buying processing
    instead of keep buying other shovels to paidMoney reaches the number divided by 10 
*/
#include<bits/stdc++.h>
using namespace std;
int k, r;
int main(){
    cin >> k >> r;
    int shoveles = 1; // Initial shovels is 1 becase we have to own at least 1 shovel
    long long paidMoney = k; // Initial paidMoney is k becase we have to buy at least 1
    while(true){ 
        if(paidMoney % 10 == 0 || paidMoney % 10 == r){ // If PaidMoney is be divided by 10 OR The remainder of paidMoney after removing all 10s from it is equal r
            break; // Exit (Stop buying)
        }
        shoveles++; // Increase the shovels that we bought by 1
        paidMoney += k; // Update paidMoney by adding the cost of another shovel
    }
    cout << shoveles;
}