#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string randChar(string mWord)
{
	string miWord;

	while (mWord.size() != 0)
	{
		int position = rand() % mWord.size();
		miWord += mWord[position];
		mWord.erase(position, 1);
	}

	return miWord;
}

int main()
{
	srand(time(0));
	bool game(true);

	do
	{
		system("cls");

		string mysteryWord;
		string tryWord;
		int randNumber(0);
		string mingledWord;
		char retry;

		cout << "JOUEUR 1 - Ecrivez le mot secret : ";
		cin >> mysteryWord;

		while (tryWord != mysteryWord)
		{
			mingledWord = randChar(mysteryWord);

			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << "JOUEUR 2 - Trouvez le mot secret ! Voici les lettres melangees : " << mingledWord << endl << "Votre choix : ";
			cin >> tryWord;

			if (tryWord != mysteryWord)
			{
				cout << endl << "Ce n'est pas le mot !" << endl << endl;
			}
		}

		cout << endl << "Bravo ! Voulez-vous refaire une partie ? Y en majuscule pour oui, autre chose pour non : ";
		cin >> retry;
		if (retry == 'Y')
		{
			game = true;
		}
		else
		{
			game = false;
		}
		
	} while (game);

	cout << endl;
	system("PAUSE");
}
