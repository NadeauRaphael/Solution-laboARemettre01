// But : faire un programme qui permet de lire un entier A et affiche, si ses un multiple de 2, 3 ,2 et 3 ou aucun 
// Auteur : Raphael Nadeau
// Date : 2021-09-03

#include <iostream>

void main()
{
   // pour afficher correctement les accent
   setlocale(LC_ALL, "");

   // Déclaration des variables
   int nb1;
  

   // Demander le premier nombre.
   std::cout << "Entre un premier nombre entier ";
   std::cin >> nb1;

   // si ses un multiple de 2 et de 3
   if (nb1 % 2 == 0 && nb1 % 3 == 0)
   {
   std::cout << nb1 << " : est à la fois multiple de 2 et de 3" << std::endl;
   }

   // si ses un multiple de 2
   else if (nb1 % 2 == 0)
   {
      std::cout << nb1 << " : est seulement un multiple de 2." << std::endl;
   }

   // si ses un multiple de 3
   else if (nb1 % 3 == 0)
   {
      std::cout << nb1 << " : est seulement un multiple de 3." << std::endl;
   }
   
   // si ses pas un mutiple de 2 ou de 3
   else
   {
      std::cout << nb1 << " : n'est ni multiple de 2, ni de 3" << std::endl;

   }
   system("pause");


}

// Plan de test
// nb1  |  ecran                    
//  4   |  est seulement un multiple de 2
//  3   |  est seulement un multiple de 3
// 12   |  est à la fois multiple de 2 et de 3
//  7   |  n'est ni multiple de 2, ni de 3
// -4   |  est seulement un multiple de 2
// -3   |  est seulement un multiple de 3
//-12   |  est à la fois multiple de 2 et de 3
// -7   |  n'est ni multiple de 2, ni de 3