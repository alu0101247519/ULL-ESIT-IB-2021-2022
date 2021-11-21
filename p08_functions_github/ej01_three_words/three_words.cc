/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file three_words.cc
  * @author Guillermo Hernández Mesa alu0101247519@ull.edu.es
  * @date Nov 18 2022
  * @brief Write a program that reads three words a, b and c, and prints a line with c, b and a in this order.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P62421
  */
 
#include <iostream>
#include <string>

void resultado(std::string, std::string, std::string);

int main() {
	std::string palabra1, palabra2, palabra3;
	std::cin >> palabra1 >> palabra2 >> palabra3;
  resultado(palabra1, palabra2, palabra3);
	return 0;
}

void resultado (std::string palabra1, std::string palabra2, std::string palabra3 ) {
  std::cout << palabra3 << ' ' << palabra2 << ' ' << palabra1 << std::endl;
}
