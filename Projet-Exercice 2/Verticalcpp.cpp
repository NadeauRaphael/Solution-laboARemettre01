/* But: ?crivez un programme qui prend comme entr?e un nombre positifs de cinq chiffres.
 Le programme v?rifie qu'il y a bien 5 chiffres dans le nombre.
 Puis il affiche le nombre verticalement, le premier chiffre sur la premi?re ligne,
 le deuxi?me chiffre sur la deuxi?me ligne, ainsi de suite*/
// Auteur : Raphael Nadeau
// Date : 01-09-2021

#include <iostream>


void main()
{
	//d?claration des variables
	int nombre;
	int chiffre1;
	int chiffre2;
	int chiffre3;
	int chiffre4;
	int chiffre5;

	// Demander un nombre entier a 5 chiffre a l'utilisateur
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
    //test 1: 5 le programme repond ce nombre ne contient pas 5 chiffres
	//test 2: -5 le programme repond ce nombre ne contient pas 5 chiffres
	//test 3: 12345 le programme repond en mettant les nombres en odres et dans un liste.
	//Test 4: -12345 le programme repond ce nombre ne contient pas 5 chiffres. donc erreur
}

// Plan de test
// nombre					ecran
// 5						ce nombre ne contient pas 5 chiffres
//-5						ce nombre ne contient pas 5 chiffres
// 12345                    1 2 3 4 5 en liste vertical
//-12345					resultat: ce nombre ne contient pas 5 chiffres devrait afficher:-1-2-3-4-5 en liste vertical
// 0						ce nombre ne contient pas 5 chiffres