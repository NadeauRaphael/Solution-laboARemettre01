// But : Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un 
//voyage dans une automobile louée.L’algorithme tient compte du kilométrage parcouru et de la durée 
// du voyage qui sont soumises par le requéran
// Auteur : Raphael Nadeau
// Date : 2021-09-03

#include <iostream>

void main()
{
   // pour afficher correctement les accent
   setlocale(LC_ALL, "");

   // Déclaration des variables
   double Cout;
   double essence;
   double jour;
   double km;



   // Demander le nombre de kilometre parcourue
   std::cout << "Entrer le nombre de km parcourue: ";
   std::cin >> km;

   // Demander la durée de la location en jour
   std::cout << "Entrer la durée de la location ( en jours ): ";
   std::cin >> jour;

   essence = km / 7.6;


   if (km > 250*jour)
   {
      Cout = 45 * jour + (essence * 1.35) + (km-250) * jour * 0.05;
   }
   else
   {
      Cout = 45 * jour + (essence * 1.35);
   }

   std::cout << "le montant a payer est de : " << Cout << "$" << std::endl;


   system("pause");


}

// Plan de test
// km  | jour  |   écran         
//50   |   1   |   53.8816$        
//250  |   1   |   89.4079$
//300  |   1   |   100.789$
//500  |   2   |   178.816$
//1250 |   4   |   602.039$
  