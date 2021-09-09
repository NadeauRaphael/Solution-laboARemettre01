// But: Le programme indique si C est compris entre A et B ou C est compris entre B et A 
// dans une phrase claire et compréhensible indiquant les valeurs entrées par l'utilisateur.
// Auteur : Raphael Nadeau
// Date : 2021-09-03

#include <iostream>

void main()
{
   // pour afficher correctement les accent
   setlocale(LC_ALL, "");

   // Déclaration des variables
   int a;
   int b;
   int c;

   // Demander le premier nombre.
   std::cout << "Entre un premier nombre entier ";
   std::cin >> a ;
   
   // Demander un deuxieme nombre
   std::cout << "Entre un premier nombre entier ";
   std::cin >> b;

   // Demander un troisieme nombre
   std::cout << "Entre un premier nombre entier ";
   std::cin >> c;
    // si a est plus grand que b mais plus petit que c
   if (a > b && a < c )
   {
      std::cout << a << "est entre  " << b << " et  " << c << std::endl;
   }
   // si b est plus grand que b mais plus petit que c
   else if (b > a && b < c)
   { 
      std::cout << b << " : est entre  " << a << " et  " << c << std::endl;
   }
   // si c est plus grand que a mais plus petit que b
   else
   {
      std::cout << c << " : est entre  " << a << " et  " << b << std::endl;
   }

   system("pause");
   

}

//Plan de test
//
// a   |   b   |    c     |   écran                       ce qui arrive
// 1   |   2   |    3     |   2 est entre 1 et 3
// 2   |   1   |    3     |   2 est entre 1 et 3   
// 3   |   1   |    2     |   2 est entre 1 et 3   
//-1   |  -2   |   -3     |  -2 est entre -1 et -3        -3 est entre -1 et -2
//-2   |  -1   |   -3     |  -2 est entre -1 et -3        -3 est entre -1 et -2
//-3   |  -1   |   -2     |  -2 est entre -1 et -3        -3 est entre -1 et -2