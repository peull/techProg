// Laboratoire2Algorithme.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include<string>
#include<iostream>
using std;


int main()
{
	float nombreUtilisateur = 0;
	float nombreDepart = 0;
	string operateur = "";
	string out = "";

	std::cout << "Welcome to the calculator" << std::endl;
	std::cout << "Starting number is 0" << std::endl;

	do
	{
		do
		{
			std::cout << "Choose an operator:  +, -, * or /";
			std::cin >> operateur;

			if (operateur == '+' || operateur == '-' || operateur == '*' || operateur == '/')
			{
				std::cout << "Enter a number: " << std::endl;
				std::cin >> nombreUtilisateur;

				if (operateur == '+')
				{
					std::cout << "Your new number is: " << nombreDepart + nombreUtilisateur << std::endl;
					nombreDepart += nombreUtilisateur;
				}
				if (operateur == '-')
				{
					std::cout << "Your new number is: " << nombreDepart - nombreUtilisateur << std::endl;
					nombreDepart -= nombreUtilisateur;
				}
				if (operateur == '*')
				{
					std::cout << "Your new number is: " << nombreDepart * nombreUtilisateur << std::endl;
					nombreDepart *= nombreUtilisateur;
				}
				if (operateur == '/')
				{
					std::cout << "Your new number is: " << nombreDepart / a << std::endl;
					nombreDepart /= nombreUtilisateur;
				}
			}
			else
			{
				std::cout << "Invalid input. Try again !" << std::endl;
			}

		} while (operateur != '+' && operateur != '-' && operateur != '*' && operateur != '/');

		do
		{
			std::cout << "Would you like to continue? yes/no" << std::endl;
			std::cin >> out;

			if (out != "yes" && out != "no")
			{
				std::cout << "Reponse invalide.....!!! " << std::endl;
			}

		} while (out != "yes" && out != "no");


	} while (out != "no");

	return 0;
}

