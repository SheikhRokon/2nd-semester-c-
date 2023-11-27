#include <iostream>

namespace Geometry {

    class Rectangle {
    private:
        double length;
        double width;

    public:
        Rectangle(double l, double w) : length(l), width(w) {}

        friend double calculateArea(const Rectangle &rect);
    };

    double calculateArea(const Rectangle &rect) {
        return rect.length * rect.width;
    }

} 

using namespace std;

int main() {
    Geometry::Rectangle myRectangle(5.0, 3.0);

    double area = Geometry::calculateArea(myRectangle);

    cout << "Rectangle Area: " << area << endl;

    return 0;
}
