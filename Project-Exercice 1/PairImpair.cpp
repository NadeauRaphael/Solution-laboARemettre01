// but: Écrire un programme qui lit un entier et qui détermine 
// et affiche s’il s’agit d’un entier pair d’un entier impair.
// Auteur: Raphael Nadeau
// Date: 01-09-2021



#include <iostream>

void main()

{
	int nb;
	int reste;
	// demander a l'utilisateur d'ecrire un nombre a analyser
	std::cout << "ecrire un nombre entier : ";

	// l'utilisateur tape le nombre voulu
	std::cin >> nb;

	reste = nb % 2;
	// le programme fait l'analyse du nombre avec le calcul ci-dessus pour identifier 
	//si le nombre est impair ou pair selon si le modulo donne 0(pair) ou non(impair).
	if (reste == 0)
	{
		std::cout << nb << " est un nombre pair" << std::endl;
	}
	else
	{
		std::cout << nb << "  est un nombre impair" << std::endl ;
	}

}
// test 1- 4 le programme repound 4 est un nombre pair
// test 2- 5 le programme repond  5 est un nombre impair
// test 3- -4 le programme repond -4 est un nombre pair
// test 4- -5 le programme repond -5 est un nombre impair