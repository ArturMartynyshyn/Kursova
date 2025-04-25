#include "Top.h"

#include <iostream>

Top::Top() : x(0), y(0) {}

Top::Top(double x, double y) : x(x), y(y) {}

Top::Top(const Top& other) : x(other.x), y(other.y) {}

Top::Top(Top&& other) noexcept : x(other.x), y(other.y) {
    other.x = 0;
    other.y = 0;
}

Top& Top::operator=(const Top& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

Top& Top::operator=(Top&& other) noexcept {
    if (this != &other) {
        x = other.x;
        y = other.y;
        other.x = 0;
        other.y = 0;
    }
    return *this;
}

void Top::setX(double x) { this->x = x; }
void Top::setY(double y) { this->y = y; }
double Top::getX() const { return x; }
double Top::getY() const { return y; }

void Top::input() {
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
}

void Top::output() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

Top::~Top() {}

Top Top::operator+(const Top& other) const {
    return Top(x + other.x, y + other.y);
}

Top Top::operator-(const Top& other) const {
    return Top(x - other.x, y - other.y);
}

Top Top::operator*(double scalar) const {
    return Top(x * scalar, y * scalar);
}

Top Top::operator/(double scalar) const {
    if (scalar == 0) {
        std::cerr << "Division by zero!" << std::endl;
        return *this;
    }
    return Top(x / scalar, y / scalar);
}

std::ostream& operator<<(std::ostream& os, const Top& top) {
    os << "(" << top.x << ", " << top.y << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Top& top) {
    std::cout << "Enter x: ";
    is >> top.x;
    std::cout << "Enter y: ";
    is >> top.y;
    return is;
}
