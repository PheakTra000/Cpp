#include <iostream>
using namespace std;

class Box {
    public:
        double length, width, height;
    
        //constructors
        Box() {
            length = width = height = 1;
        }

        Box(int a, int b , int c) {
            length = a; width = b; height = c;
        }

        Box(double a, double b, double c) {
            length = a; width = b; height = c;
        }

        //member functions
        //compute volume
        double volume() {
            return length * width * height;
        }

        //set length to a, width to b, height to c and compute volume
        int volume(int a, int b, int c) {
            length = a; width = b; height = c;
            return length * width * height;
        }

        //set length to a, width to b, height to c and compute volume
        double volume(double a, double b, double c) {
            length = a; width = b; height = c;
            return length * width * height;
        }

        //set length, width and height to a and compute volume
        int volume(int a) {
            length = width = height = a;
            return length * width * height;
        }
};

int main() {
    Box b1;
    cout << b1.length << ", " << b1.width << ", " << b1.height << endl; 
    cout << b1.volume() << endl;
    Box b2(2.0, 3.5, 4.8);
    cout << b2.length << ", " << b2.width << ", " << b2.height << endl; 
    cout << b2.volume(3) << endl;;
    Box b3(2, 4, 6);
    cout << b3.length << ", " << b3.width << ", " << b3.height << endl; 
    cout << b3.volume(3, 1, 1) << endl;

    return 0;
}