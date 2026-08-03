#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter size if array: ";
    cin >> n;

    int arr[n];
    int hash[100]={0};

    cout<<"Enter array elements: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        hash[arr[i]]++;
    }

    int q;
    cout<<"Enter no if queries: ";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter Number: ";
        cin>>number;
        cout<<number<<" appers "<<hash[number]<<" Times "<<endl;
    }
    return 0;


}