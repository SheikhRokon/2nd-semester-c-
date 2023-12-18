#include <iostream>

class Shape {
public:
    virtual float Area() const {
        return 0; 
    }

    virtual ~Shape() {} 
};

class Rectangle : public Shape {
private:
    float width;
    float height;

public:
    Rectangle(float w, float h) : width(w), height(h) {}

    float Area() const override {
        return width * height;
    }
};

class Triangle : public Shape {
private:
    float base;
    float height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    float Area() const override {
        return 0.5 * base * height;
    }
};

int main() {
    Rectangle rectangle(4.0, 5.0);
    Triangle triangle(3.0, 6.0);

    std::cout << "Rectangle Area: " << rectangle.Area() << std::endl;
    std::cout << "Triangle Area: " << triangle.Area() << std::endl;

    return 0;
}
