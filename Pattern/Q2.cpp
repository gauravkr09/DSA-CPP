#include <iostream>
using namespace std;

void pattern(){
    for(int i = 0; i<5; i++){
        cout<<"*****"<<endl;
    }   
}
void pattern2(){
    for(int i = 1; i<5; i++){
        for(int j = 1; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }   
}

void pattern3(){
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }

}

int main(){
    pattern();
    cout<<endl;
    pattern2();
    cout<<endl;
    pattern3();
    return 0;
}
