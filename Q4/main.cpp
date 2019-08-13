#include <iostream>
#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"

int main()
{
	Circulo	*c1 = new Circulo("Jonicleson", 2);
	Circulo *c2 = new Circulo("Marilenemulher", 3);

	std::cout << c1->calcularArea() << "\n";
	std::cout << c2->calcularArea() << "\n";

	Quadrado *q1 = new Quadrado("Suzyanne", 15);
	Triangulo *t1 = new Triangulo("Rosigangela", 10, 5);

	std::cout << q1->calcularArea() << "\n";
	std::cout << t1->calcularArea() << "\n";
	
}
