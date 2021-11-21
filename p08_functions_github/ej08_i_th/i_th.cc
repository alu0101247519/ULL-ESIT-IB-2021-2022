/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file i_th.cc
  * @author Guillermo Hernández Mesa alu0101247519@ull.edu.es
  * @date Nov 18 2022
  * @brief Write a program that, given an integer number i and a sequence of natural numbers x1, …, xn, prints xi.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39225
  */

#include <iostream>

void resultado(int, int);

int main() {
  
  int posicion, numero;
  std::cin >> posicion;

  for (int i = 0; i < posicion; ++i) {
    std::cin >> numero; 
  }
  
  resultado (posicion, numero);
  return 0;
}

void resultado(int posicion, int numero) {
  std::cout << "At the position " << posicion << " there is a(n) " << numero << '.' << std::endl;
}