#include <iostream>

#include "TrabalhadorPorHora.hpp"
#include "TrabalhadorAssalariado.hpp"
#include "Trabalhador.hpp"

int main()
{
	TrabalhadorAssalariado t1("Joao", 900);
    TrabalhadorPorHora t2("Rodrigo", 7);

    std::cout << t1.calcularPagamentoSemanal() << "\n";
    std::cout << t2.calcularPagamentoSemanal(39) << "\n";
    std::cout << t2.calcularPagamentoSemanal(50) << "\n";
}
