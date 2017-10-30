// blackjack.cpp: Konsol uygulaması için giriş noktasını tanımlar.
//
#include "stdafx.h"
#include <time.h>
#include <iostream>
using namespace std;
static int i = -1;
int dealerScore;
int playerScore;
int k1;
int k2;
int k3;
int k4;
int k5;
int k6;
int k7;
int h1;
int h2;
int h3;
int h4;
char hitle;
char hitle2;
char hitle3;
char hitle4;
bool gameEnd = false;
void isBust() // 21 den fzl olunc 
{
	if (playerScore > 21)
	{
		cout << endl;
		cout << endl;
		cout << "	.....BUST OLDUNUZ KASA KAZANDI....." << endl;
		cout << endl;
		cout << endl;
		gameEnd = true;
	}


}
void checkWin(int dealerScore, int playerScore)
{
	if (dealerScore == playerScore)
	{
		cout << "	-----------------------------------------" << endl;
		cout << "	|	BERABERE......... " << endl;
		cout << "	-----------------------------------------" << endl;

		gameEnd = true;
	}
	if (dealerScore < playerScore || dealerScore>21)
	{
		cout << "	-----------------------------------------" << endl;
		cout << "	|	TEBRİKLER KAZANDINIZ.... " << endl;
		cout << "	-----------------------------------------" << endl;
		gameEnd = true;

	}
	else
	{
		if (dealerScore == playerScore)
		{

		}
		else
			cout << "	-----------------------------------------" << endl;
		cout << "	|	KASA KAZANDI.... " << endl;
		cout << "	-----------------------------------------" << endl;
		gameEnd = true;
	}


}

int deal_card() //krt dgıtm noktsı
{
	if (i == 100) i = 0;
	int rands[100];
	srand((unsigned)time(0));

	for (int index = 0; index<100; index++)
	{
		rands[index] = (rand() % 11) + 1;
	}

	i++;

	int n = rands[i];
	return n;

}

void dealerDraw()
{

	if (dealerScore < 16)
	{
		k5 = deal_card();
		cout << "	 Kasa Kart aliyor = " << k5 << endl;
		cout << "\t Kasanin Eli      1.Kart = " << k1 << "	2. Kart = " << k2 << "	3. Kart = " << k5 << endl;
		dealerScore = dealerScore + k5;

		if (dealerScore < 16)
		{
			k6 = deal_card();
			cout << "	 Kasa Kart aliyor = " << k6 << endl;
			cout << "\t Kasanin Eli      1.Kart = " << k1 << "	2. Kart = " << k2 << "	3. Kart = " << k5 << "	4. Kart = " << k6 << endl;
			dealerScore = dealerScore + k6;

			if (dealerScore < 16)
			{
				k7 = deal_card();
				cout << "	 Kasa Kart aliyor = " << k7 << endl;
				cout << "\t Kasanin Eli      1.Kart = " << k1 << "	2. Kart = " << k2 << "	3. Kart = " << k5 << "	4. Kart = " << k6 << "	5. Kart = " << k7 << endl;
				dealerScore = dealerScore + k7;

				if (dealerScore < 21)
				{
					cout << "	-----------------------------------------" << endl;
					cout << "	|	KaSa  Score = " << dealerScore << endl;
					cout << "	-----------------------------------------" << endl;
					checkWin(dealerScore, playerScore);
				}

			}
			else
			{
				cout << "	-----------------------------------------" << endl;
				cout << "	|	KaSa  Score = " << dealerScore << endl;
				cout << "	-----------------------------------------" << endl;
				checkWin(dealerScore, playerScore);
			}
		}
		else
		{
			cout << "	-----------------------------------------" << endl;
			cout << "	|	KaSa  Score = " << dealerScore << endl;
			cout << "	-----------------------------------------" << endl;
			checkWin(dealerScore, playerScore);
		}
	}
	else
	{
		cout << "\t Kasanin Eli      1.Kart = " << k1 << "	2. Kart = " << k2 << endl;
		cout << "	-----------------------------------------" << endl;
		cout << "	|	KaSa  Score = " << dealerScore << endl;
		cout << "	-----------------------------------------" << endl;
		checkWin(dealerScore, playerScore);
	}
}

void hit()// rttırm
{
	cout << "-------------------------------" << endl;
	cout << "- arttirmak icin  'a' " << endl;
	cout << "- kalmak    icin  'k' ya basiniz ";
	cin >> hitle;
	cout << "-------------------------------" << endl;
	if (hitle == 'a')
	{
		h1 = deal_card();
		cout << endl;
		cout << "	 Yeni Kart = " << h1 << endl;
		playerScore = playerScore + h1;
		cout << "\t Senin   Elin     1.Kart = " << k3 << "     2. Kart = " << k4 << "	3. Kart =" << h1 << "\t ToplamScore = " << playerScore << endl;
		isBust();
		cout << endl;
		if (gameEnd == true)
		{
			gameEnd == true;
		}
		else
		{
			cout << "-------------------------------" << endl;
			cout << "- arttirmak icin  'a' " << endl;
			cout << "- kalmak    icin  'k' ya basiniz ";
			cin >> hitle2;
			cout << "-------------------------------" << endl;

			if (hitle2 == 'a')
			{
				h2 = deal_card();
				cout << endl;
				cout << "	 Yeni Kart = " << h2 << endl;
				playerScore = playerScore + h2;
				cout << "\t Senin   Elin     1.Kart = " << k3 << "     2. Kart = " << k4 << "	3. Kart =" << h1 << "	4. Kart=" << h2 << "\t ToplamScore = " << playerScore << endl;
				isBust();
				if (gameEnd == true)
				{
					gameEnd == true;
				}
				else
				{
					cout << endl;
					cout << "-------------------------------" << endl;
					cout << "- arttirmak icin  'a' " << endl;
					cout << "- kalmak    icin  'k' ya basiniz ";
					cin >> hitle3;
					cout << "-------------------------------" << endl;

					if (hitle3 == 'a')
					{
						h3 = deal_card();
						cout << endl;
						cout << "	 Yeni Kart = " << h3 << endl;
						playerScore = playerScore + h3;
						isBust();

						cout << endl;

						cout << "\t arttirmak icin  'a' " << endl;
						cout << "\t kalmak    icin  'k' ya basiniz ";
						cin >> hitle4;



						if (hitle4 == 'a')
						{
							h4 = deal_card();
							cout << " 	Yeni Kart = " << h4 << endl;
							playerScore = playerScore + h4;
							isBust();

						}
						else
							if (hitle4 == 'k')
							{
								cout << endl;
								cout << "	-----------------------------------------" << endl;
								cout << "	|	Sabit kaliyorsunuz  puaniniz = " << playerScore << "|" << endl;
								cout << "	-----------------------------------------" << endl;
								cout << "	|	---SIRA KASADA---	| " << endl;
								cout << "	-----------------------------------------" << endl;
								dealerDraw();
							}

					}
					else
						if (hitle3 == 'k')
						{
							cout << endl;
							cout << "	-----------------------------------------" << endl;
							cout << "	|	Sabit kaliyorsunuz  puaniniz = " << playerScore << "|" << endl;
							cout << "	-----------------------------------------" << endl;
							cout << "	|	---SIRA KASADA---	|" << endl;
							cout << "	-----------------------------------------" << endl;
							dealerDraw();
						}



				}
			}
			else
				if (hitle2 == 'k')
				{
					cout << endl;
					cout << "	-----------------------------------------" << endl;
					cout << "	|	Sabit kaliyorsunuz  puaniniz = " << playerScore << "|" << endl;
					cout << "	-----------------------------------------" << endl;
					cout << "	|	---SIRA KASADA---	| " << endl;
					cout << "	-----------------------------------------" << endl;
					dealerDraw();
				}


		}
	}
	if (hitle == 'k')
	{
		cout << endl;
		cout << "	-----------------------------------------" << endl;
		cout << "	|	Sabit kaliyorsunuz  puaniniz = " << playerScore << "|" << endl;
		cout << "	-----------------------------------------" << endl;
		cout << "	|	---SIRA KASADA---	| " << endl;
		cout << "	-----------------------------------------" << endl;
		dealerDraw();
	}

}


void giris()
{
	int giris;
	cout << "\t ****************************************" << endl;
	cout << "\t \t 21 OYUNUN HOSGELDINIZ ...." << endl;
	cout << "\t ****************************************" << endl;

	cout << "\t Baslamk icin 1 e basiniz ";
	cin >> giris;

	if (giris == 1)
	{
		k1 = deal_card();
		k2 = deal_card();
		cout << "\t Kasanin Eli      1.Kart = " << k1 << "	2. Kart = ?" << endl;
		dealerScore = k1 + k2;

		k3 = deal_card();
		k4 = deal_card();
		playerScore = k3 + k4;

		cout << "\t Senin   Elin     1.Kart = " << k3 << "	2. Kart = " << k4 << "\t ToplamScore = " << playerScore << endl;
		cout << endl;
		isBust();
		hit();

	}
}
int main()
{
	while (gameEnd != true)
	{
		giris();
	}


	system("pause");
	return 0;
}

