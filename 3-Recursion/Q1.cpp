// print linearly from 1 to N

// #include <iostream>
// using namespace std;

// void print(int i, int N){
//     if(i>N)
//     return;
//     cout<<i<<" ";
//     print(i+1,N);

// }
// int main(){
//     int N = 5;
//     print(1,N);
//     return 0;
// }   

// print from N to 1
#include <iostream>
using namespace std;

void print(int N){
    if (N==0)
    return ;
    cout<<N<<" ";
    print(N-1);

}
int main(){
    int N = 5;
    print(N);
    return 0;
}