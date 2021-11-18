#include <iostream>

int main() {

    int numero;
    while (std::cin >> numero) {
	std::cout << "divisors of " << numero << ':';

	int raiz_cuadrada = 1;
	while (raiz_cuadrada * raiz_cuadrada < numero) {
        ++raiz_cuadrada;
    } 

	for (int i = 1; i <= raiz_cuadrada; ++i)
	    if (numero%i == 0) {
            std::cout << ' ' << i;
        } 

	for (int i = raiz_cuadrada - 1; i >= 1; --i) {
        if (numero%i == 0 and numero / i != raiz_cuadrada) {
            std::cout << ' ' << numero / i;
        }
    }
	    
	std::cout << std::endl;
    }
}