#include <iostream>
using namespace std;

int factorial (int n) {
    // if (n > 1) return n * (n - 1); //dont know how they do it.
    // else return 1;

    int fac = n;
    while (n > 1) {
        fac *= (n - 1); 
        n--;
    }
    return fac;
}

int main() {

    cout<<"Factorial"<<endl;
    int n;
    cout<<"Please enter the value: ";
    cin>>n;

    clock_t start = clock();

    cout<<n<<"! equal to "<<factorial(n)<<endl;

    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout<<"Operation time: "<< elapsed <<"second"<<endl;

}