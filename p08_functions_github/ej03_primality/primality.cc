/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file primality.cc
  * @author Guillermo Hernández Mesa alu0101247519@ull.edu.es
  * @date Nov 18 2022
  * @brief Write a program to print in order all the divisors of a given number.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39308
  */

#include <iostream>

int main() {
    
    int numeros_introducidos;
    std::cin >> numeros_introducidos;

    for(int i = 0; i < numeros_introducidos; ++i) {
	int numero;
        std::cin >> numero;

	bool primo = (numero != 1 && numero != 0);
	int aux = 2;

	
	while (primo && aux*aux <= numero) {
	    primo = numero%aux != 0;
	    ++aux;
        }
    
        if (primo){
            std::cout << numero << " is prime" << std::endl;
        } else {
            std::cout << numero << " is not prime" << std::endl;
        }
	    
    }
    return 0;
}