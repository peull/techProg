/// <summary>
/// Ce programme est une calculatrice. Permet l'addition, soustraction, division et multiplication de deux nombres.
///</summmary>

//#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// @brief	Fonction principal. C'est cette fonction qui sera appel� par la fonction de point d'entr�e
// @return	int : Retourne 0 lorsque le programme doit se terminer
int Calculatrice();

// @brief	Affiche une s�rie d'op�rations possible � l'�cran et demande � l'utilisateur
//			d'entr�e l'op�ration voulue.
// @param	int& nombre1: R�f�rence au premier nombre entr�e par l'utilisateur
// @param	int& nombre2: R�f�rence au deuxi�me nombre entr�e par l'utilisateur
// @return	int: Retourne l'op�ration choisi par l'utilisateur
int DemandeOperation(int& nombre1, int& nombre2);

// @brief	Fait l'addition des deux nombre en entr�e et l'affiche
// @param	const int& nombre1: Constante et r�f�rence du premier nombre entr�e par l'utilisateur
// @param	const int& nombre2: Constante et r�f�rence du deuxi�me nombre entr�e par l'utilisateur
void Addition(const int& nombre1, const int& nombre2);

// @brief	Fait la soustraction des deux nombre en entr�e et l'affiche
// @param	const int& nombre1: Constante et r�f�rence du premier nombre entr�e par l'utilisateur
// @param	const int& nombre2: Constante et r�f�rence du deuxi�me nombre entr�e par l'utilisateur
void Soustraction(const int& nombre1, const int& nombre2);

// @brief	Fait la division des deux nombre en entr�e et l'affiche
// @param	const int& nombre1: Constante et r�f�rence du premier nombre entr�e par l'utilisateur
// @param	const int& nombre2: Constante et r�f�rence du deuxi�me nombre entr�e par l'utilisateur
void Division(const int& nombre1, const int& nombre2);

// @brief	Fait la multiplication des deux nombre en entr�e et l'affiche
// @param	const int& nombre1: Constante et r�f�rence du premier nombre entr�e par l'utilisateur
// @param	const int& nombre2: Constante et r�f�rence du deuxi�me nombre entr�e par l'utilisateur
void Multiplication(const int& nombre1, const int& nombre2);

int main()
{
	return Calculatrice();
}

int Calculatrice()
{
	while (true)
	{
		int nombre1 = 0;
		int nombre2 = 0;

		switch (DemandeOperation(nombre1, nombre2))
		{
		case -1:
			return 0;
			break;
		case 1:
			Addition(nombre1, nombre2);
			break;
		case 2:
			Soustraction(nombre1, nombre2);
			break;
		case 3:
			Multiplication(nombre1, nombre2);
			break;
		case 4:
			Division(nombre1, nombre2);
			break;
		default:
			cout << "Wrong input. Please retry" << endl;
			break;
		}
	}
}

int DemandeOperation(int& nombre1, int& nombre2)
{
	cout << "Please choose an option:" << endl <<
	"   " << " 1 : Addition" << endl <<
	"   " << " 2 : Soustraction" << endl <<
	"   " << " 3 : Multiplication" << endl <<
	"   " << " 4 : Division" << endl <<
	"   " << "-1 : Quitter" << endl << endl;

	int operation = 0;
	cin >> operation;

	if (operation == -1)
	{
		return -1;
	}
	else
	{
		cout << "Enter the first number: ";
		cin >> nombre1;

		cout << "Enter the second number: ";
		cin >> nombre2;

		return operation;
	}
} 

void Addition(const int& nombre1, const int& nombre2)
{
	cout << "The addition is: " << nombre1 + nombre2 << endl << endl;
}

void Soustraction(const int& nombre1, const int& nombre2)
{
	cout << "The substraction is: " << nombre1 - nombre2 << endl << endl;
}

void Division(const int& nombre1, const int& nombre2)
{
	cout << "The division is: " << static_cast<float>(nombre1) / static_cast<float>(nombre2) << endl << endl;
}

void Multiplication(const int& nombre1, const int& nombre2)
{
	cout << "The multiplication is: " << nombre1 * nombre2 << endl << endl;
}
