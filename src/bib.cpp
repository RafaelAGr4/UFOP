#include "bib.hpp"
#include <stdexcept>

long long calcularFatorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Fatorial nao definido para negativos.");
    }
    if (n == 0 || n == 1) return 1;
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

long long calcularFibonacci(int n) {
    // TODO: implementar
    return -1;
}