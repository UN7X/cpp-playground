#include <catch2/catch_test_macros.hpp>

int add(int a, int b) { return a + b; }

TEST_CASE("addition") {
  REQUIRE(add(2, 2) == 4);
}


// ooooo things happened here ooooo