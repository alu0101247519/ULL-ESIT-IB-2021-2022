/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic_numbers_1.cc
  * @author Guillermo Hernández Mesa alu0101247519@ull.edu.es
  * @date Nov 18 2022
  * @brief Write a program that reads a number n and prints the n-th harmonic number, defined as Hn = 1/1 + 1/2 + ⋯ + 1/n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P59539
  */

#include <iostream>

void resultado(double);

int main() {
  int numero;
  std::cin >> numero;

  double harmonic = 0;

  for (int i = 1; i <= numero; ++i) {
    harmonic += 1/double(i);
  }

  resultado(harmonic);
  return 0;
}

void resultado(double harmonic) {
  std::cout.setf(std::ios::fixed);
  std::cout.precision(4);
  std::cout << harmonic << std::endl;
}