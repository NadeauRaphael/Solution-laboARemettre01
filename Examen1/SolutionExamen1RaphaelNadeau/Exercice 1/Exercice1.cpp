/*But:�crivez un programme qui demande un nombre de lignes compris entre 3 et 25 inclusivement et un nombre de
motifs compris entre 5 et 50 inclusivement.Le programme doit v�rifier que ces nombres sont corrects.
Le programme affiche un rectangle en alternant les motifs de la fa�on suivante :
1. Le premier et le deuxi�me motif est le symbole plus petit que(< )
   2. Le troisi�me est un tiret(-)
   3. Le quatri�me et le cinqui�me motif est le symbole plus grand que(> )
   */
//Auteur: Raphael Nadeau
//Date: 2021-10-07


#include <iostream>

using namespace std;  // Pour �viter d'�crire std:: devant les instructions cout, cin et endl

void main()
{

   // Pour afficher correctement les accents.
   setlocale(LC_ALL, "");

   //D�clarations des Constantes
   
   // D�claration des variables
   int NombreDeLigne;
   int NombreDeMotif;
   int MotifParLigne;


   //Demander le nombre de ligne souhaiter a l'utilisateur
   cout << "Veuillez entrer le nombre de lignes entre 3 et 25 inclusivement: ";
   cin >> NombreDeLigne;


   // tant que le nombre de ligne n'est pas comprit entre 3 et 25 inclusivement on redemamde

   while (NombreDeLigne<3 ||  NombreDeLigne> 25)
   {
      cout << "Le nombre de ligne entrer n'est pas entre 3 et 25 inclusivement" << endl;
      cout << "Veuillier r�essayer :  ";
      cin >> NombreDeLigne;
      
   }

   //Demander le nombre de motif souhaiter a l'utilisateur
   cout << "Veuillez entrer le nombre de motifs par ligne entre 5 et 50 inclusivement: ";
   cin >> NombreDeMotif;

   // tant que le nombre de motif n'est pas comprit entre 5 et 50 inclusivement on redemamde

   while (NombreDeMotif < 5 || NombreDeMotif> 50)
   {
      cout << "Le nombre de motif entrer n'est pas entre 5 et 50 inclusivement" << endl;
      cout << "Veuillier r�essayer :  ";
      cin >> NombreDeMotif;

   }
     
   // tant que le nombre de ligne ne depasse pas le nombre entrer on reccomence
   for (int compteurdeligne = 1; compteurdeligne <=NombreDeLigne ; compteurdeligne++)
   {
      // tant que le compteur de motif ne depasse pas le nombre entrer on reccomence.
      for (int CompteurDeMotif = 1; CompteurDeMotif <= NombreDeMotif; CompteurDeMotif++)
      {
         MotifParLigne = CompteurDeMotif % 5;

       
         // le chiffrre va entrer et selon son num�ro va afficher un motif diff�rents
            switch (MotifParLigne)
            {
            case 1 :
               cout << "<";
               break;
            case 2:
               cout << "<";
               break;
            case 3:
               cout << "-";
               break;
            case 4:
               cout << ">";
               break;
            case 0:
               cout << ">";
               break;
          
            }
       

      }

      cout << endl;
   }
  


   system("pause");
}
// plan de test
//  
// NombreDeLigne        |       NombreDeMotif         |        �cran
//       3              |            5                |        <<->>
//      25              |           50                |        50 motif par ligne et 25 ligne
//       1              |            5                |        Le nombre de ligne entrer n'est pas entre 3 et 25 inclusivement
//       5              |            1                |        Le nombre de motif entrer n'est pas entre 5 et 50 inclusivement
//       -5             |           -15               |        Le nombre de ligne entrer n'est pas entre 3 et 25 inclusivemen

