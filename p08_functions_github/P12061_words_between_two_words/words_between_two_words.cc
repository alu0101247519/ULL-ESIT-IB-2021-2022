/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file words_between_two_words.cc
  * @author Guillermo Hernández Mesa alu0101247519@ull.edu.es
  * @date Nov 22 2022
  * @briefWrite a program that, given a sequence of words, prints the number of words between the word 
  “beginning” and the word “end”. If the word “beginning”, the word “end” or both words are missing, or if they appear in inverse order, tell so.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P12061
  */


#include <iostream>
#include <string>

void resultado(bool, std::string, int);

int main() {
  bool comienzo = false;
  std::string palabra;
  int contador = 0;

  while(std::cin >> palabra && palabra != "end") {
    if (comienzo) {
      ++contador;
    }

    if (palabra == "beginning"){
      comienzo = true;
    } 
  }
  resultado(comienzo, palabra, contador);

  return 0;
} 

void resultado(bool comienzo, std::string palabra, int contador){ 
  if (comienzo && palabra == "end"){
    std::cout << contador << std::endl;
  } else {
    std::cout << "wrong sequence" << std::endl;
  }
}