/*But:Écrivez un programme qui demande un nombre de lignes compris entre 3 et 25 inclusivement et un nombre de
motifs compris entre 5 et 50 inclusivement.Le programme doit vérifier que ces nombres sont corrects.
Le programme affiche un rectangle en alternant les motifs de la façon suivante :
1. Le premier et le deuxième motif est le symbole plus petit que(< )
   2. Le troisième est un tiret(-)
   3. Le quatrième et le cinquième motif est le symbole plus grand que(> )
   */
//Auteur: Raphael Nadeau
//Date: 2021-10-07


#include <iostream>

using namespace std;  // Pour éviter d'écrire std:: devant les instructions cout, cin et endl

void main()
{

   // Pour afficher correctement les accents.
   setlocale(LC_ALL, "");

   //Déclarations des Constantes
   
   // Déclaration des variables
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
      cout << "Veuillier réessayer :  ";
      cin >> NombreDeLigne;
      
   }

   //Demander le nombre de motif souhaiter a l'utilisateur
   cout << "Veuillez entrer le nombre de motifs par ligne entre 5 et 50 inclusivement: ";
   cin >> NombreDeMotif;

   // tant que le nombre de motif n'est pas comprit entre 5 et 50 inclusivement on redemamde

   while (NombreDeMotif < 5 || NombreDeMotif> 50)
   {
      cout << "Le nombre de motif entrer n'est pas entre 5 et 50 inclusivement" << endl;
      cout << "Veuillier réessayer :  ";
      cin >> NombreDeMotif;

   }
     
   // tant que le nombre de ligne ne depasse pas le nombre entrer on reccomence
   for (int compteurdeligne = 1; compteurdeligne <=NombreDeLigne ; compteurdeligne++)
   {
      // tant que le compteur de motif ne depasse pas le nombre entrer on reccomence.
      for (int CompteurDeMotif = 1; CompteurDeMotif <= NombreDeMotif; CompteurDeMotif++)
      {
         MotifParLigne = CompteurDeMotif % 5;

       
         // le chiffrre va entrer et selon son numéro va afficher un motif différents
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
// NombreDeLigne        |       NombreDeMotif         |        écran
//       3              |            5                |        <<->>
//      25              |           50                |        50 motif par ligne et 25 ligne
//       1              |            5                |        Le nombre de ligne entrer n'est pas entre 3 et 25 inclusivement
//       5              |            1                |        Le nombre de motif entrer n'est pas entre 5 et 50 inclusivement
//       -5             |           -15               |        Le nombre de ligne entrer n'est pas entre 3 et 25 inclusivemen

