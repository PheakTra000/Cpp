#include <iostream>
using namespace std;

#define SIZE 6

void modify(int arr[], int indexModi, int newValue) {
    arr[indexModi] = newValue;
}

int main() {
    int arr[SIZE];
    int indexModi;
    int newValue;
    
    for (int i = 0; i < SIZE; i++) {
        cin>>arr[i];
    }
    cin>>indexModi;
    cin>>newValue;

    modify(arr, indexModi, newValue);
    
    for (int i = 0; i < SIZE; i++) {
        cout<<arr[i]<<" ";
    }
}