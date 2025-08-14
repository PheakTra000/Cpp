#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    int arr[SIZE];

    cout<<"Please enter "<<SIZE<<" "<<"numbers"<<endl;
    for (int i = 0; i <SIZE; i++) {
        cin>>arr[i];
    }

    cout<<"Your array is: ";
    for (int i = 0; i < SIZE; i++) {
        cout<<arr[i]<<" ";
    }


}
