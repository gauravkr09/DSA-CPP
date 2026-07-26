#include <iostream>
using namespace std;

void changeA(int* ptr){
    *ptr = 20;
}

int main(){
    // int a = 10;
    // int* ptr = &a;
    // cout<<ptr<< endl;

    // int a = 5;
    // int* p = &a;
    // int** q = &p; 

    // cout<<p<< endl;
    // cout<<*p<< endl;
    // cout<<**q<< endl;
    // cout<<*q<< endl;

    int a = 10;
    changeA (&a);

    cout<<a<<endl;
    return 0;
}