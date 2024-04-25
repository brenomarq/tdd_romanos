#include "romanos.hpp"
#include <unordered_map>
#include <string>

using namespace std;

int romanos_para_decimal(const std::string num_romano)
{
  unordered_map<char, int> algarismos = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000},
  };

  int valor = algarismos[num_romano[0]];

  return valor;
}
