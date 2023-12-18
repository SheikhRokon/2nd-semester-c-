#include <iostream>

class Shape {
public:
    virtual float Area() const = 0;
};

class Rectangle : public Shape {
public:
    // Constructor
    Rectangle(float w, float l) : width(w), height(l) {}

    float Area() const override {
        return width * height;
    }

private:
    float width;
    float height;
};

class Triangle : public Shape {
public:
    Triangle(float b, float h) : base(b), height(h) {}

    float Area() const override {
        return 0.5 * base * height;
    }

private:
    float base;
    float height;
};

int main() {
    Rectangle rectangle(4.0, 5.0);
    Triangle triangle(3.0, 6.0);

    std::cout << "Area of Rectangle: " << rectangle.Area() << std::endl;
    std::cout << "Area of Triangle: " << triangle.Area() << std::endl;

    return 0;
}
