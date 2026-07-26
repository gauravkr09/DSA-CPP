// find the sum of digits of a number

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    int sum = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    cout << "Sum of digits: "<< sum;
    return 0;
}
