/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file divisors_in_order.cc
  * @author Guillermo Hernández Mesa alu0101247519@ull.edu.es
  * @date Nov 18 2022
  * @brief Write a program to print in order all the divisors of a given number.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39308
  */
 
#include <iostream>

int main() {

    int numero;
    while (std::cin >> numero) {
	std::cout << "divisors of " << numero << ':';

	int raiz_cuadrada = 1;
	while (raiz_cuadrada * raiz_cuadrada < numero) {
        ++raiz_cuadrada;
    } 

	for (int i = 1; i <= raiz_cuadrada; ++i)
	    if (numero%i == 0) {
            std::cout << ' ' << i;
        } 

	for (int i = raiz_cuadrada - 1; i >= 1; --i) {
        if (numero%i == 0 and numero / i != raiz_cuadrada) {
            std::cout << ' ' << numero / i;
        }
    }
	    
	std::cout << std::endl;
    }
    return 0;
}