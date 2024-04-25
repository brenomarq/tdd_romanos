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

  int resultado = 0;
  int valorPrevio = 0;

  for(int i = num_romano.size() - 1; i >= 0; --i) {
    int valor = algarismos[num_romano[i]];

    if (valor < valorPrevio) {
      resultado -= valor;
    } else {
      resultado += valor;
    }

    valorPrevio = valor;
  }

  if (resultado == 0) {
    return -1;
  }

  return resultado;
}
