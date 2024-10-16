#include <iostream>
#include "Rect.h"
using namespace std;

int main() {
    Rect r1;  
    Rect r2(3, 6);

    r1.print();
    cout << "Area: " << r1.getArea() << endl;
    cout << "Perimeter: " << r1.getPerimeter() << endl;

    r2.print();
    cout << "Area: " << r2.getArea() << endl;
    cout << "Perimeter: " << r2.getPerimeter() << endl;
}
