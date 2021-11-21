/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file looking_for_a.cc
  * @author Guillermo Hernández Mesa alu0101247519@ull.edu.es
  * @date Nov 18 2022
  * @brief Write a program that reads a sequence of characters ended in a dot and tells if the sequence has any lowercase ‘a’ or not.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P75149
  */

#include <iostream>

void resultado (char);

int main() {
  char frase;
  std::cin >> frase;

  while(frase != '.' && frase != 'a') {
    std::cin >> frase;
  }
  resultado(frase);
  return 0;
}

void resultado (char frase) {
  if (frase == 'a') {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
}