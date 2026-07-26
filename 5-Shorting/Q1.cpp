#include <iostream>
using namespace std;

int main(){

    int arr[]={10,20,40,30,60,50};
    int n = 6;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int tem = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tem;
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<"";
    }

    return 0;
}