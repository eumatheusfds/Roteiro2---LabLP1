#include <iostream>

#include "Funcionario.h"
#include "Consultor.h"

int main()
{
    Funcionario *f1 = new Funcionario("20133", "Fala", 1000);
    Consultor *f2 = new Consultor("20122", "Bebe", f1->getSalario());

    std::cout << f1->getSalario() << "\n";
    std::cout << f2->getSalario() << "\n";

    delete f1;
    delete f2;

}
