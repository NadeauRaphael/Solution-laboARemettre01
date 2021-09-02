// But: Écrivez un programme qui prend comme entrée un nombre de cinq chiffres. 
// Le programme vérifie qu'il y a bien 5 chiffres dans le nombre.
// Puis il affiche le nombre verticalement, le premier chiffre sur la première ligne,
// le deuxième chiffre sur la deuxième ligne, ainsi de suite
// Auteur : Raphael Nadeau
// Date : 01-09-2021

#include <iostream>


void main()
{
	int nombre;
	int chiffre1;
	int chiffre2;
	int chiffre3;
	int chiffre4;
	int chiffre5;

	// demander un mobre a l'utilisateur
	std::cout << "entrer un nombre a 5 chiffres:";
	// l'utilisateur entre son nombre
	std::cin >> nombre;
	//le programme fait l'analyse du nombre pour identifier si le nombre a 5 chiffres ou 
	//non. De plus, il affiche si le nombre a 5 chiffre en effectuant des division et des modulo et affiche les nombres en ordres.
	if  (nombre > 9999 && nombre < 100000 )
	{
		chiffre1 = nombre % 10;
		chiffre2 = nombre / 10 % 10;
		chiffre3 = nombre / 100 % 10;
		chiffre4 = nombre / 1000 % 10;
		chiffre5 = nombre / 10000 % 10;
		std::cout << chiffre5 << std::endl << chiffre4 << std::endl << chiffre3 << std::endl << chiffre2 << std::endl << chiffre1 << std::endl;
	}
	else
	{
		std::cout << "Ce nombre ne contient pas 5 chiffres";
	}

}