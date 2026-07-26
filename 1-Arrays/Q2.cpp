// 2️⃣ Reverse an Array
// Example:
// Input: 1 2 3 4
// Output: 4 3 2 1

#include <iostream>
#include <vector> 
using namespace std;

int main(){
    int n ;
    cout<<"Enter number of elements ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter element: ";
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }

    int start = 0, end = n-1;
    
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}