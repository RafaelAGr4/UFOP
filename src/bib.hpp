#ifndef BIB_HPP
#define BIB_HPP

/**
 * @brief Calcula o fatorial de n (n >= 0).
 * @param n Número inteiro não-negativo.
 * @return n! (fatorial de n).
 */
long long calcularFatorial(int n);

/**
 * @brief Retorna o n-ésimo termo da sequência de Fibonacci (base 0).
 *        fibonacci(0) = 0, fibonacci(1) = 1, fibonacci(2) = 1, ...
 * @param n Posição na sequência (n >= 0).
 * @return O n-ésimo número de Fibonacci.
 */
long long calcularFibonacci(int n);

#endif // BIB_HPP
