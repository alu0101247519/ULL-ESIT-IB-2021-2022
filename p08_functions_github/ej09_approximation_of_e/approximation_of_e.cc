/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file approximation_of_e.cc
  * @author Guillermo Hernández Mesa alu0101247519@ull.edu.es
  * @date Nov 18 2022
  * @brief Write a program that, for every given natural number n, prints the approximation 
  * of e that we get by adding the n first terms of the series above.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P11916_en
  */

#include <iostream>

double factorial(double);

int main() {
  std::cout.setf(std::ios::fixed);
  std::cout.precision(10);
  double numero;

  while (std::cin >> numero) {
    double e = 0.0;

    for (double i = 0; i < numero; ++i) {
      double numero_factorial = factorial(i);
      double numero_completo = 1/numero_factorial;
      e += numero_completo;
    }
    std::cout << "With " << int(numero) << " term(s) we get " << e << "." << std::endl;  
  }
  return 0;
}

double factorial(double aux) {
  if (aux == 0) {
    return 1;
  }
  return aux * factorial(aux - 1);
}
