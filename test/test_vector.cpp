#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "include/catch.hpp"
#include "../src/include/Vector.hpp"
#include <ostream>

TEST_CASE("Test vector", "[classic]")
{ 
   Vector V = Vector(3, 4);
   Vector Q = Vector(1, 2); 
   Vector Z = V;
   REQUIRE((Z.x, Z.y) == (3, 4));
};

TEST_CASE("Test negative vector", "[classic]")
{ 
   Vector Q = Vector(-1, -1); 
   Vector V = Vector(8, 1);
   Vector Z = V * Q; 
   REQUIRE((Z.x, Z.y) == (-8, -1));
};

TEST_CASE("Test suptraction vector", "[classic]")
{ 
   Vector V = Vector(7, 9);
   Vector Q = Vector(1, 2);  
   Vector Z = V - Q; 
   REQUIRE((Z.x, Z.y) == (6, 7));
};

TEST_CASE("Test return vector", "[classic]")
{
   Vector V = Vector(-3, 6); 
   Vector Z = V ; 
   REQUIRE((Z.x, Z.y) == (V.x, V.y));
};

TEST_CASE("Test addition vector", "[classic]")
{
   Vector V = Vector(3, 4);
   Vector Q = Vector(1, 2);   
   Vector Z = V + Q; 
   REQUIRE((Z.x, Z.y) == (4, 6));
};

TEST_CASE("Test multiply vector", "[classic]")
{ 
   Vector V = Vector(3, 4);
   Vector Q = Vector(1, 2);  
   Vector Z = V * Q; 
   REQUIRE((Z.x, Z.y) == (3, 8));
};

TEST_CASE("Test multiply reverse vector", "[classic]")
{ 
   Vector V = Vector(3, 4);
   Vector Q = Vector(1, 2);  
   Vector Z = V * Q; 
   REQUIRE((Z.y, Z.x) == (8, 3));
};

TEST_CASE("Test -= vector", "[classic]")
{ 
   Vector V = Vector(3, 4);
   Vector Q = Vector(1, 2);
   V -= Q;
   REQUIRE((V.x, V.y) == (2, 2));    
};

TEST_CASE("Test += vector", "[classic]")
{ 
   Vector V = Vector(6, 4);
   Vector Q = Vector(1, 21);
   V += Q;
   REQUIRE((V.x, V.y) == (7, 25));    
};

TEST_CASE("Test *= vector", "[classic]")
{ 
   Vector V = Vector(66, 2);
   Vector Q = Vector(9, 52);
   V *= Q;
   REQUIRE((V.x, V.y) == (594, 104));    
};