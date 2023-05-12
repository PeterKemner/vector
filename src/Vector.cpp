#include "include/Vector.hpp"
#include <iostream>
#include <string>

Vector::Vector(){
    x = 0;
    y = 0;
};

Vector::Vector(int x, int y){
    this->x = x;
    this->y = y;
};

Vector Vector::operator-() const {
    return Vector(-x, -y);
};

Vector Vector::operator-(const Vector& rhs) const {
    return Vector(x-rhs.x, y-rhs.y);
};

Vector Vector::operator+() const {
    return Vector(+x, +y);
};

Vector Vector::operator+(const Vector& rhs) const {
    return Vector(x+rhs.x, y+rhs.y);
};

Vector Vector::operator*(const Vector& rhs) const{
    return Vector(x*rhs.x, y*rhs.y);
};

Vector operator* (int i, const Vector v) {
    int newX = v.x * i;
    int newY = v.y * i;
    return Vector(newX, newY);
}

// Vector Vector::operator*(const Vector& rhs) const{
//     return Vector(y*rhs.y, x*rhs.x);
// };

Vector& Vector::operator-=(const Vector& rhs){
    x -= rhs.x;
    y -= rhs.y;
    return *this;
};

Vector& Vector::operator+=(const Vector& rhs){
    x += rhs.x;
    y += rhs.y;
    return *this;
};

Vector& Vector::operator*=(const Vector& rhs){
    x *= rhs.x;
    y *= rhs.y;
    return *this;
};

std::ostream& operator<<(std::ostream& out, Vector& rhs){
    std::string output = "(" + std::to_string(rhs.x) + "," + std::to_string(rhs.y) + ")";
    out << output;
    return out; 
};
