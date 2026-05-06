#include <cassert>
#include <iostream>
#include <stdexcept>
#include "../src/bib.hpp"

void testarFatorial() {
    // Casos base
    assert(calcularFatorial(0) == 1);
    assert(calcularFatorial(1) == 1);

    // Casos normais
    assert(calcularFatorial(5) == 120);
    assert(calcularFatorial(6) == 720);
    assert(calcularFatorial(10) == 3628800);

    // Caso de erro: negativo deve lançar exceção
    bool excecaoLancada = false;
    try {
        calcularFatorial(-1);
    } catch (const std::invalid_argument&) {
        excecaoLancada = true;
    }
    assert(excecaoLancada);

    std::cout << "[OK] Todos os testes de calcularFatorial passaram." << std::endl;
}

void testarFibonacci() {
    // Casos base
    assert(calcularFibonacci(0) == 0);
    assert(calcularFibonacci(1) == 1);
    assert(calcularFibonacci(2) == 1);

    // Casos normais
    assert(calcularFibonacci(5) == 5);
    assert(calcularFibonacci(7) == 13);
    assert(calcularFibonacci(10) == 55);

    bool excecaoLancada = false;
    try {
        calcularFibonacci(-1);
    } catch (const std::invalid_argument&) {
        excecaoLancada = true;
    }
    assert(excecaoLancada);

    std::cout << "[OK] Todos os testes de calcularFibonacci passaram." << std::endl;
}

int main() {
    std::cout << "=== Teste Regressivo ===" << std::endl;
    testarFatorial();
    testarFibonacci();
    std::cout << "Todos os testes passaram!" << std::endl;
    return 0;
}
