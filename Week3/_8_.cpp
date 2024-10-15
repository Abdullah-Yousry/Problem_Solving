/*
let's put index(start) on the first element of the string and put index(end) on the last element of the string
Then we do while loop until start > end
    and inside this while loop we compare if the element of the index(start) not equal the element of the index(end) 
    then here we need change one of these letter so we will increment the difference between this string to be palindrome(diff) by 1 
    and increamnt index(start) by 1 and decrement index(end) by 1 for the next two letters
Print "YES" if the difference to be palindrome(diff) = 1 OR the string was palindrome means (diff = 0) and its size was odd, so we can change the letter in the middle and the string still palindrome
otherwise print "NO"    
*/
#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    cin >> s;
    int start = 0, end = s.size() - 1; // index ont the first element and index ont the last element
    int diff = 0; // The difference
    while(start <= end){ // As long as start is less than or equal end enter 
        if(s[start] != s[end]){ // if the element of the index(start) not equal the element of the index(end) 
            diff++; // then increment the difference between(diff) this string to be palindrome by 1  
        }
        start++; // Increament start for next letter after statrt
        end--;  // Decreament end for next letter  befoe end
    }
    if(diff == 1 || (diff == 0 && s.size() % 2 == 1)){ // if the difference to be palindrome one letter OR the string is palindrome and its size is odd
        cout << "YES";
    }
    else{
        cout << "NO\n";
    }
}