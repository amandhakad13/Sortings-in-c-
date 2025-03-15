#include<iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
    cout<<"Enter the elements in array : ";
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    for(int i = n-1; i > 0; i--) {
        int index = i;
        for(int j = i-1; j >= 0; j--) {
            if(arr[j] > arr[index]) {
                index = j;
            }
            swap(arr[i],arr[index]);
        }
    }

    cout<<"After sorting : ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}