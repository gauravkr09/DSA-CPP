#include <iostream>
using namespace std;

bool ispalindrome(string s, int i,int j){
    if(i >= j)
    return true;

    if(s[i] != s[j])
    return false;

    return ispalindrome(s, i+1, j-1);
}

int main(){
    string s;
    cin>> s>>;

    if (ispalindrome (s, 0, s.length() -1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;

}