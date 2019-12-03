/// <summary> 
/// Ce programme calcul les pairs ou impairs se trouvant avant la valeur entree.
/// Author: Maxime Lavergne
/// Date: 09/2017
/// </summary>

#include <iostream>

using std::cin;
using std::endl;
using std::cout;

int main()
{
	cout << "+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+" << endl;
	cout << "Ce programme calcul les pairs ou impairs se trouvant avant la valeur entree." << endl;
	cout << "+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+" << endl << endl;

	int chiffre = 0;

	do
	{
		cout << "Entrer un nombre: ";
		cin >> chiffre;
		
		// Valeur sentinelle entree, quittons la boucle do-while
		if (chiffre == -1)
		{
			//break;
		}
		else
		{
			int resultat = 0;

			// Le chiffre est pair 
			if (chiffre % 2 == 0)
				for (int i = 0; i < chiffre; i += 2)
				{
					resultat += i;
				}
			// Le chiffre est impair
			else
			{
				for (int i = 1; i < chiffre; i += 2)
				{
					resultat += i;
				}
			}

			// Affichage du resultat
			cout << "Le resultat est: " << resultat << endl << endl;
		}
	} while (chiffre != -1);
}