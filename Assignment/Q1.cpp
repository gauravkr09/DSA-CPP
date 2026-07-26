// write the algorithm to find Maximum value and Maximum element’s position (index)

#include <iostream>
#include <vector>
using namespace std;

int main(){

    cout <<"Enter Array Size: ";
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxElement = arr[0];
    int maxIndex = 0;

    for(int i = 1; i<n; i++){
        if(arr[i]> maxElement){
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    cout << "Maximum Element is: " << maxElement << endl;
    cout << "Maximum Element Index: " << maxIndex << endl;

    return 0;


}