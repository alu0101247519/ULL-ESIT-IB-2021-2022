/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file first_position.cc
  * @author Guillermo Hernández Mesa alu0101247519@ull.edu.es
  * @date Nov 18 2022
  * @brief Write a program that reads a sequence of natural numbers and prints the position of the first even number.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P89078
  */

#include <iostream>

void resultado(int);

int main() {
  int contador = 1, numero;

  while (std::cin >> numero && numero % 2 == 1) {
    ++contador;
  }

  resultado(contador);
  return 0;
}

void resultado(int contador) {
  std::cout << contador << std::endl;
}