#include <stdio.h>
#include <iostream>

/* --- Class Header --- */

class Vector2D {
private:
    double x;
    double y;

public:
    Vector2D(double x, double y);

    double getX() const;
    double getY() const;

    Vector2D operator+(const Vector2D &other) const;
    Vector2D operator-(const Vector2D &other) const;

    bool operator==(const Vector2D &other) const;
};

/* --- Class Method Definitions --- */

Vector2D::Vector2D(double x, double y) {
    this->x = x; this->y = y;
}

double Vector2D::getX() const {
    return this->x;
}

double Vector2D::getY() const {
    return this->y;
}

Vector2D Vector2D::operator+(const Vector2D &other) const {
    return Vector2D(x + other.x, y + other.y);
}

Vector2D Vector2D::operator-(const Vector2D &other) const {
    return Vector2D(x - other.x, y - other.y);
}