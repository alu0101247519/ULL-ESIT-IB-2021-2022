/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic_numbers_2.cc
  * @author Guillermo Hernández Mesa alu0101247519@ull.edu.es
  * @date Nov 18 2022
  * @brief Write a program that reads pairs of numbers n and m with n ≥ m, and for each pair prints Hn − Hm.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58153
  */

#include <iostream>

void resultado(double);

int main() {
  int numero1, numero2;

  while (std::cin >> numero1 >> numero2) { 
    double harmonic = 0;

  for (int i = numero2 + 1; i <= numero1; ++i) {
    harmonic += 1/double(i);
  }

  resultado(harmonic);
  }
  return 0;
}

void resultado(double harmonic) {
  std::cout.setf(std::ios::fixed);
  std::cout.precision(10);
  std::cout << harmonic << std::endl;
}