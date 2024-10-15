/*
If n is even and the promotion price of 2 yogurts is less than the regular price of 2 yogurts
    So the best choise to buy all n yogurts you need by this pronotion --> b * (n / 2)
But if n is odd and still the promotion price of 2 yogurts is less than the regular price of 2 yogurts
    So the best choise to buy (n - 1) yogurts by promotion and buy the last 1 by the regular price --> (b * (n - 1) / 2) + a
If the prmotion price of 2 yogurts is greater than the regular price of 2 yogurts 
    in this case we don't care about n is even or odd because the answer will be the same
    So the best choise to buy all n yogurts by the regular price --> a * n
*/
#include<bits/stdc++.h>
using namespace std;
int t, n, a, b;
int main(){
    cin >> t;
    while(t--){
        /* INPUT */
        cin >> n >> a >> b;
        /* PROCESS and OUTPUT */
        if(n % 2 == 0 && b < a + a){ // If n is even AND the promotion price of 2 yogurts is less than the regular price of 2 yogurts
            cout << b * (n / 2) << endl; // buy all n yogurts by prmotion
        }
        else if(n % 2 == 1 && b < a + a){ // If n is odd AND the promotion price of 2 yogurts is less than the regular price of 2 yogurts
            cout << (b * (n - 1) / 2) + a << endl; // buy (n - 1) yogurts by promotion and buy the last 1 by the regular price
        }
        else{ // the prmotion price of 2 yogurts is greater than the regular price of 2 yogurts
            cout << a * n << endl; // buy all n yogurts by the regular price
        }
    }
}