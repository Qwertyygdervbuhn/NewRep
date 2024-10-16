#include "Rect.h"
#include <iostream>
using namespace std;

Rect::Rect() {
    h = 0;
    w = 0;
}

Rect::Rect(int height, int width) {
    h = height;
    w = width;
}

void Rect::print() {
    cout << "Height: " << h << ", Width: " << w << endl;
}

int Rect::getArea() {
    return h * w;
}

int Rect::getPerimeter() {
    return 2 * (h + w);
}
