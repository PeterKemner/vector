#include <iostream>

class Vector{
public:
    int x;
    int y;

    Vector();
    Vector(int x, int y);

    Vector operator-() const;
    Vector operator-(const Vector& rhs) const;
    Vector operator+() const;
    Vector operator+(const Vector& rhs) const;
    Vector operator*(const Vector& rhs) const;
    friend Vector operator*(int i, const Vector v);

    Vector& operator-=(const Vector& rhs);
    Vector& operator+=(const Vector& rhs);
    Vector& operator*=(const Vector& rhs);

    friend std::ostream& operator<<(std::ostream& out, Vector& rhs);

};