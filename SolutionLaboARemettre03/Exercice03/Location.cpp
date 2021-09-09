// But : �crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un 
//voyage dans une automobile lou�e.L�algorithme tient compte du kilom�trage parcouru et de la dur�e 
// du voyage qui sont soumises par le requ�ran
// Auteur : Raphael Nadeau
// Date : 2021-09-03

#include <iostream>

void main()
{
   // pour afficher correctement les accents
   setlocale(LC_ALL, "");

   // D�claration des variables
   double Cout;
   double essence;
   double coutessence;
   int jour;
   int km;
   int kmgratuit;
   double location;
   double coutkmplus;



   // Demander le nombre de kilometre parcourue
   std::cout << "Entrer le nombre de km parcourue: ";
   std::cin >> km;

   // Demander la dur�e de la location en jour
   std::cout << "Entrer la dur�e de la location ( en jours ): ";
   std::cin >> jour;

   // calcul
   location = jour * 45;
   essence = km / 100.0 *7.6;
   kmgratuit = jour * 250;
   coutkmplus= (km-kmgratuit)*0.05;
   coutessence = essence * 1.35;

   if (km<0 || jour<0)
   {
      std::cout << "Erreur un ou plusieurs chiffres entr�s sont n�gatif" << std::endl;
   }

   //si le nombre de kilometre est en dessous de 250km
  else if (km > kmgratuit)
   {
      Cout = location + coutessence + coutkmplus;
    
      std::cout << "le montant a payer est de : " << Cout << "$" << std::endl;
   }
   else
   {
      Cout = location + coutessence;
      std::cout << "le montant a payer est de : " << Cout << "$" << std::endl;
   }

   


   system("pause");


}

// Plan de test
// km  | jour  |   �cran         
//50   |   1   |   50.13$        
//250  |   1   |   65.52$
//300  |   1   |   78.28$
//500  |   2   |   141.3$
//1250 |   4   |   315,52$
//-500 |  -1   |   Erreur un ou plusieurs chiffres entr�s sont n�gatif
  