/**
 * @file fib.h
 * @brief Define functions to calculate fibonacci.
 * @author Krerkkiat Chusap
 */
#include <iostream>

/**
 * @brief Calculate Fibonacci recursively
 * @param n The n-th position of the Fibonacci number to get.
 * @return The value of the Fibonacci number at position n-th.
 */
int fib_recursive(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

/**
 * @brief Calculate Fibonacci iteratively
 * @param n The n-th position of the Fibonacci number to get.
 * @return The value of the Fibonacci number at position n-th.
 * @note Documentation for all functions to include this one done with Deoxygen.
 * @see https://agapow.net/programming/tools/doxygen-cheatsheet/ 
*/
int fib_iterative(int n) {
    int a, b, temp;
    a = 1;
    b = 1;

    if (n == 1 || n == 2) {
        return 1;
    } 

    for (int i = 3; i <= n; i++) {
        temp = b;
        b = a + b;
        a = temp;
    }

    return b;
}