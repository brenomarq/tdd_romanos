#include "romanos.hpp"
#include <unordered_map>
#include <string>

using namespace std;

int romanos_para_decimal(const string num_romano)
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

  int resultado = 0;
  int valorPrevio = 0;

  for(int i = 0; i < num_romano.size(); ++i) {

  }

  return 0;
}
