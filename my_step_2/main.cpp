#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Polygon.h"

using namespace std;

int main () {
    Rectangle rect;
    Triangle trgl;
    rect.set_values (4,5);
    trgl.set_values (4,5);
    cout << rect.area() << '\n';
    cout << trgl.area() << '\n';
    return 0;
}
