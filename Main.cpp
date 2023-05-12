#include "src/include/Vector.hpp"
// #include "Vector.cpp"
#include <iostream>
#include <ostream>

int main(){
    Vector V = Vector(66, 2);
    Vector Q = Vector(9, 52);
    V *= Q;
    std::cout << V << std::endl;

    return 1;
};
