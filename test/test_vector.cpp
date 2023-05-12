#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "include/catch.hpp"
#include "../src/include/Vector.hpp"
#include <ostream>

Vector V = Vector(3, 4);
Vector Q = Vector(1, 2);

TEST_CASE("Test vector", "[classic]")
{ 
   Vector Z = V;
   REQUIRE((Z.x, Z.y) == (3, 4));
};

TEST_CASE("Test negative vector", "[classic]")
{ 
   Vector Z = V * -1; 
   REQUIRE((Z.x, Z.y) == (-3, -4));
};

TEST_CASE("Test suptraction vector", "[classic]")
{ 
   Vector Z = V - Q; 
   REQUIRE((Z.x, Z.y) == (2, 2));
};

TEST_CASE("Test return vector", "[classic]")
{ 
   Vector Z = V ; 
   REQUIRE((Z.x, Z.y) == (V.x, V.y));
};

TEST_CASE("Test addition vector", "[classic]")
{ 
   Vector Z = V + Q; 
   REQUIRE((Z.x, Z.y) == (4, 6));
};

TEST_CASE("Test multiply vector", "[classic]")
{ 
   Vector Z = V * Q; 
   REQUIRE((Z.x, Z.y) == (3, 8));
};

TEST_CASE("Test multiply reverse vector", "[classic]")
{ 
   Vector Z = V * Q; 
   REQUIRE((Z.y, Z.x) == (8, 3));
};

TEST_CASE("Test -= vector", "[classic]")
{ 

};

TEST_CASE("Test += vector", "[classic]")
{ 

};

TEST_CASE("Test *= vector", "[classic]")
{ 

};

TEST_CASE("Test <<", "[classic]")
{ 
    Vector V = Vector(3, 4);
    std::string G = std::cout << V << std::endl;
    REQUIRE(G == "(" + std::to_string(V.x) + "," + std::to_string(V.y) + ")");
};