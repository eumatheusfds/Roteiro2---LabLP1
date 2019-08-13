#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Endereco e1 = Endereco(155, "Prof Olivia", "tambau", "Paraiba", "Joao Pessoa", "58860000");
    Endereco e2 = Endereco();

    e2.setNumero(120);
    e2.setRua("Rua da PH");
    e2.setBairro("Mandacaru");
    e2.setEstado("Paraiba");
    e2.setCidade("Joao Pessoa");
    e2.setCep("58465000");

    Pessoa p1 = Pessoa("THEUS", e1, "0800 777 7000");
    Pessoa p2 = Pessoa();

    p2.setNome("Josué");
    p2.setEndereco(e2);
    p2.setTelefone("4002 8922");

    cout << p1.toString() << endl;
    cout << p2.toString();

    return 0;
}
