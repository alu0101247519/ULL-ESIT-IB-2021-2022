/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file words_between_two_words.cc
  * @author Guillermo Hernández Mesa alu0101247519@ull.edu.es
  * @date Nov 22 2022
  * @brief Implement an efficient function
     int largest_prime_factor(int n);
     that returns the largest prime factor of n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P15695_en
  */

#include <iostream>
#include <cmath>

int largest_prime_factor(int);

int main() {
  int numero;
  while (std::cin >> numero){
    std::cout << largest_prime_factor(numero) << std::endl;
  }
  return 0;
}

int largest_prime_factor(int numero) {
  int max_prime_factor = 0;
  while (numero % 2 == 0) {
    max_prime_factor = 2;
    numero /= 2;
   }
  for (int i = 3; i <= sqrt(numero); i += 2) {
    while (numero % i == 0) {
      max_prime_factor = i;
      numero = numero / i;
    }
   }

  if (numero > 2) {
    max_prime_factor = numero;
  }
  return max_prime_factor;
}

