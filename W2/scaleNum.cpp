#include <iostream>
using namespace std;

void scalNumber(int *num1, int *num2, int scaleNum) {
    *num1 *= scaleNum;
    *num2 *= scaleNum;
}

int main() {
    int num1, num2;
    cout<< "Please enter two number: ";
    cin>>num1;
    cin>>num2;                                                          

    int scaleNum;
    cout<< "Please enter a scale number: ";
    cin>>scaleNum;

    scalNumber(&num1, &num2, scaleNum);
    cout<<"Scale values: "<<num1<<" "<<num2;

}