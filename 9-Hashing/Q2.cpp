#include <iostream>
using namespace std;

int main(){
    string s;
    cout <<"Enter string: ";
    cin>> s;

    int hash[26]= {0};

    for(char ch: s){
        hash[ch - 'a']++;
    }

    int q;
    cout <<"Enter no of queries: ";
    cin>>q;
    while(q--){
        char ch;
        cout <<"Enter charater: ";
        cin>>ch;

        cout <<ch<< " appears " <<hash[ch - 'a']<<" times "<< endl;
    }
    return 0;

}