#include <iostream>
using namespace std;

class Box {
    public:
        double length, width, height;

    Box() {
        length = width = height = 1;
    }

    Box(int len, int wid, int hei) {
        length = len;
        width = wid;
        height = hei;
    }  
    Box(double len, double wid, double hei) {
        length = len;
        width = wid;
        height = hei;
    }
    
    int volume(int a, int b, int c) {
        length = a;
        width = b;
        height = c;
        return a*b*c;
    }   

    double volume(double a, double b, double c) {
        length = a;
        width = b;
        height = c;
        return a*b*c;
    } 

    int volume(int a) {
        length = width = height = a;
        return length * width * height;
    }
};


int main() {
    Box b1(1,1,1);
    Box b2(123, 1234, 1234);
    Box b3(12.34,23.234,1232.44);

    cout<<b1.length<<" "<<b1.width<<" "<<b1.height<<endl;
    cout<<b1.volume()<<endl;
    cout<<b2.length<<" "<<b2.width<<" "<<b2.height<<endl;
    cout<<b2.volume(b2.length, b2.width, b2.height)<<endl;
    cout<<b3.length<<" "<<b3.width<<" "<<b3.height<<endl;
    cout<<b3.volume(b3.length, b3.width, b3.height)<<endl;
}   