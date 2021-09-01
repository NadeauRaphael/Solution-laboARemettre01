// But: �crivez un programme qui prend comme entr�e un nombre de cinq chiffres. 
// Le programme v�rifie qu'il y a bien 5 chiffres dans le nombre.
// Puis il affiche le nombre verticalement, le premier chiffre sur la premi�re ligne,
// le deuxi�me chiffre sur la deuxi�me ligne, ainsi de suite
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


	std::cout << "entrer un nombre a 5 chiffres:";
	std::cin >> nombre;
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