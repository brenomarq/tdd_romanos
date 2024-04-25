// Copyright 2024 Breno
#define CATCH_CONFIG_MAIN
#include "./catch.hpp"
#include "./romanos.hpp"


TEST_CASE("Numeros romanos - algarismos únicos", "[romanos]") {
    REQUIRE(romanos_para_decimal("I") == 1);
    REQUIRE(romanos_para_decimal("V") == 5);
}

TEST_CASE("Numeros romanos - algarismos compostos", "[romanos]") {
    REQUIRE(romanos_para_decimal("IV") == 4);
    REQUIRE(romanos_para_decimal("XL") == 40);
    REQUIRE(romanos_para_decimal("VII") == 7);
    REQUIRE(romanos_para_decimal("XC") == 90);
}


TEST_CASE("Numeros romanos - algarismos inválidos", "[romanos]") {
    REQUIRE(romanos_para_decimal("G") == -1);
    REQUIRE(romanos_para_decimal("i") == -1);
}
