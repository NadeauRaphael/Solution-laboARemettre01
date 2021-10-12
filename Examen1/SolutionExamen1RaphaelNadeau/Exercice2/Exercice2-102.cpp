//But : Corrigez les erreurs de compilation en respectant l’idée de votre ami et testez le programme en ayant préalablement 
//fait un plan de test, que vous mettez en commentaire à la fin du code source.
// Auteur : votre meilleur ami 
// Modifié par : Raphael Nadeau
// Date : 27 septembre 2021

#include <iostream>
using namespace std; // Pour éviter d'écrire std:: devant les instructions cout, cin et endl

void main()          // Fonction principale du programme
{
   // Pour afficher correctement les accents.
   setlocale(LC_ALL, "");


   // Déclaration des variables
   int nb;
   int unite;
   int dizaine;
   int centaine;
   int millier;
   int dixMillier;
   int somme;
   char choix;

   //Message de bienvenue
   cout << "Bienvenue dans mon programme informatique.";

  // demander si l'utilisateur veut commencer oui ou non
  cout << "Veux-tu commencer ? (o/n) :";
  cin >> choix;

  // tant que le choix est pas valide ou redemande
  while (choix!='o' && choix != 'O' && choix != 'n' && choix != 'N')
  {
     cout << "Erreur le choix n'est un choix reconnue. veuillier ressayer:";
     cin >> choix;
  }

   //tant que l'utilisateur dit oui on recommence 
  while (choix != 'n' && choix != 'N')
  {

     // demander si l'utilisateur 5 chiffres
     cout << "Veullier entrer un nombre composant 5 chiffres : ";
     cin >> nb;


     // Tant que le nombre est pas en 10000 et 99999 et -10000 et -99999 on redemande
     while ((nb < 10000 || nb > 99999) && (nb >-10000 || nb < -99999))
     {
        cout << "Erreur : le nombre doit être composé de 5 chiffres.\n";
        cout << "Veuillez entrer un nombre à 5 chiffres :";
        cin >> nb;
     }

     // calcul
     unite = nb / 1 % 10;
     dizaine = nb / 10 % 10;
     centaine = nb / 100 % 10;
     millier = nb / 1000 % 10;
     dixMillier = nb / 10000 % 10;


     //calcul de la somme des chiffres composant le nombre total
     somme = unite + dizaine + centaine + millier;

     // Afficher le résultat
     cout << "La somme des chiffres du nombre " << nb << " est " << somme << endl;

     //redemander a l'utilisateur s'il veut recommencer
     cout << "Veux-tu Recommencer ? (o/n) :";
     cin >> choix;

     // tant que le choix est pas valide ou redemande
     while (choix != 'o' && choix != 'O' && choix != 'n' && choix != 'N')
     {
        cout << "Erreur le choix n'est un choix reconnue. veuillier ressayer:";
        cin >> choix;
     }

  }

   // si il choisie non on affiche un message d'au revoir.
  cout << "Merci d’avoir utilisé mon programme !" << endl;


   // Pour avoir le temps de lire le résultat, on demande au système d'exploitation de faire une pause
   system("pause");



}
// plan de test
//  
//        Choix         |       Nombre                |        écran
//       o              |            5                |        Erreur : le nombre doit être composé de 5 chiffres.
//       n              |                             |        Merci d’avoir utilisé mon programme !
//       o              |            123456           |        Erreur : le nombre doit être composé de 5 chiffres.
//       o              |            12345            |        La somme des chiffres du nombre est 14
//       o              |           -12345            |        La somme des chiffres du nombre est -14
//       u              |                             |        Erreur le choix n'est un choix reconnue. veuillier ressayer

