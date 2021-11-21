/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file approximation_of_e.cc
  * @author Guillermo Hernández Mesa alu0101247519@ull.edu.es
  * @date Nov 18 2022
  * @brief Given a sequence made up of only ‘(’ and ‘)’, tell if the parentheses close correctly.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P31111
  */

#include <iostream>

void resultado(int);

int main() {
  char parentesis;
  int contador = 0;

  while(contador >= 0 && std::cin >> parentesis) {
    if (parentesis == '('){
      ++contador;
    } else {
      --contador;
    }
  }
  resultado(contador);
  return 0;
}

void resultado(int contador) {
  if (contador == 0) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  } 
}