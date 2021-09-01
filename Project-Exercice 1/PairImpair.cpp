// but: Écrire un programme qui lit un entier et qui détermine 
// et affiche s’il s’agit d’un entier pair d’un entier impair.
// Auteur: Raphael Nadeau
// Date: 01-09-2021



#include <iostream>

void main()

{
	int nb;
	int reste;

	std::cout << "ecrire un nombre entier : ";


	std::cin >> nb;

	reste = nb % 2;

	if (reste == 0)
	{
		std::cout << nb << " est un nombre pair" << std::endl;
	}
	else
	{
		std::cout << nb << "  est un nombre impair" << std::endl ;
	}

}