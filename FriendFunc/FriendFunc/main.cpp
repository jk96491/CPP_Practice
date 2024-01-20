#include <iostream>

class Circle;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    friend bool compareArea(const Rectangle* r, const Circle* c);
private:
    double calculateArea() const {
        return length * width;
    }
};

class Circle {
private:
    double radius;

public:
    Circle(double r) 
    {
        radius = r;
    }

    friend bool compareArea(const Rectangle* r, const Circle* c);
private:
    double calculateArea() const {
        return 3.14 * radius * radius;
    }
};

bool compareArea(const Rectangle* r, const Circle* c)
{
    return r->calculateArea() > c->calculateArea();
}

int main() {
    Rectangle* rectangle = new Rectangle(5, 10);
    Circle* circle = new Circle(7);

    if (compareArea(rectangle, circle))
        std::cout << "���̰� ū ���� �簢���Դϴ�." << std::endl;
    else
        std::cout << "���̰� ū ���� ���Դϴ�." << std::endl;

    delete rectangle;
    delete circle;

    return 0;
}