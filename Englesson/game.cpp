#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <conio.h>
#include <string>
#include <Windows.h>
#include <iostream>
#include <stdio.h>
#include "game.h"

using namespace sf;
using namespace std;


String Gra::ZadajPytanie() {
	String	q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13, q14, q15;
	q1 = "Can you show \nme cow ?";
	q2 = "Show me Seal";
	q3 = "Where is Fox ?";
	q4 = "Can you show \nme snake ?";
	q5 = "Where is \nkangaroo ?";
	q6 = "Can you show \nme rabbit ?";
	q7 = "Show me monkey";
	q8 = "Where is boar ?";
	q9 = "Can you show \nme wolf ?";
	q10 = "Show me chicken";
	q11 = "Where is bull ?";
	q12 = "Can you show \nme shark ?";
	q13 = "Show me camel";
	q14 = "Where is eagle ?";
	q15 = "Can you show \nme turtle ?";
	String tab[15] = { q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15 };
	srand(time(0));

	liczba = (rand() % 15);
	String a = tab[liczba];
	return a;
}


Sprite Gra::Wyswietlzle() {
	qa1.loadFromFile("img/elementy4/15.png");
	qa2.loadFromFile("img/elementy4/16.png");
	qa3.loadFromFile("img/elementy4/17.png");
	qa4.loadFromFile("img/elementy4/18.png");
	qa5.loadFromFile("img/elementy4/19.png");
	qa6.loadFromFile("img/elementy4/20.png");
	qa7.loadFromFile("img/elementy4/21.png");
	qa8.loadFromFile("img/elementy4/22.png");
	qa9.loadFromFile("img/elementy4/23.png");
	qa10.loadFromFile("img/elementy4/24.png");
	qa11.loadFromFile("img/elementy4/25.png");
	qa12.loadFromFile("img/elementy4/26.png");
	qa13.loadFromFile("img/elementy4/27.png");
	qa14.loadFromFile("img/elementy4/28.png");
	qa15.loadFromFile("img/elementy4/29.png");
	qd1.setTexture(qa1);
	qd2.setTexture(qa2);
	qd3.setTexture(qa3);
	qd4.setTexture(qa4);
	qd5.setTexture(qa5);
	qd6.setTexture(qa6);
	qd7.setTexture(qa7);
	qd8.setTexture(qa8);
	qd9.setTexture(qa9);
	qd10.setTexture(qa10);
	qd11.setTexture(qa11);
	qd12.setTexture(qa12);
	qd13.setTexture(qa13);
	qd14.setTexture(qa14);
	qd15.setTexture(qa15);

	Sprite tabsp[15] = { qd1, qd2, qd3, qd4, qd5, qd6, qd7, qd8, qd9, qd10, qd11, qd12, qd13, qd14, qd15 };

	int liczbaa = rand() % 15;

	if (liczba == liczbaa) {
		liczbaa = rand() % 14;
	}
	cout << liczbaa << endl;
	Sprite cc = tabsp[liczbaa];
	return cc;
}

Sprite Gra::Dobra() {
	qa1.loadFromFile("img/elementy4/15.png");
	qa2.loadFromFile("img/elementy4/16.png");
	qa3.loadFromFile("img/elementy4/17.png");
	qa4.loadFromFile("img/elementy4/18.png");
	qa5.loadFromFile("img/elementy4/19.png");
	qa6.loadFromFile("img/elementy4/20.png");
	qa7.loadFromFile("img/elementy4/21.png");
	qa8.loadFromFile("img/elementy4/22.png");
	qa9.loadFromFile("img/elementy4/23.png");
	qa10.loadFromFile("img/elementy4/24.png");
	qa11.loadFromFile("img/elementy4/25.png");
	qa12.loadFromFile("img/elementy4/26.png");
	qa13.loadFromFile("img/elementy4/27.png");
	qa14.loadFromFile("img/elementy4/28.png");
	qa15.loadFromFile("img/elementy4/29.png");
	qd1.setTexture(qa1);
	qd2.setTexture(qa2);
	qd3.setTexture(qa3);
	qd4.setTexture(qa4);
	qd5.setTexture(qa5);
	qd6.setTexture(qa6);
	qd7.setTexture(qa7);
	qd8.setTexture(qa8);
	qd9.setTexture(qa9);
	qd10.setTexture(qa10);
	qd11.setTexture(qa11);
	qd12.setTexture(qa12);
	qd13.setTexture(qa13);
	qd14.setTexture(qa14);
	qd15.setTexture(qa15);

	Sprite tabsp[15] = { qd1, qd2, qd3, qd4, qd5, qd6, qd7, qd8, qd9, qd10, qd11, qd12, qd13, qd14, qd15 };
	cout << "Liczba w dobrej: " << liczba << endl;
	for (int i = 0; i < 15; i++) {
		if (liczba == i) {
			Sprite cc = tabsp[i];
			return cc;
		}
	}
}

std::string Gra::Punktacja() {
	std::string	pk1, pk2, pk3, pk4, pk5, pk6, pk7, pk8, pk9, pk10, pk11, pk12, pk13, pk14, pk15, pk16, pk17, pk18, pk19, pk20, pk21, pk22, pk23, pk24, pk25, pk26, pk27, pk28, pk29, pk30;
	pk1 =  "0";
	pk2 =  "10";
	pk3 =  "20";
	pk4 =  "30";
	pk5 =  "40";
	pk6 =  "50";
	pk7 =  "60";
	pk8 =  "70";
	pk9 =  "80";
	pk10 = "90";
	pk11 = "100";
	pk12 = "110";
	pk13 = "120";
	pk14 = "130";
	pk15 = "140";
	pk16 = "150";
	pk17 = "160";
	pk18 = "170";
	pk19 = "180";
	pk20 = "190";
	pk21 = "200";
	pk22 = "210";
	pk23 = "220";
	pk24 = "230";
	pk25 = "240";
	pk26 = "250";
	pk27 = "260";
	pk28 = "270";
	pk29 = "280";
	pk30 = "290";
	std::string tabpk[31] = { pk1, pk2, pk3, pk4, pk5, pk6, pk7, pk8, pk9, pk10, pk11, pk12, pk13, pk14, pk15, pk16, pk17, pk18, pk19, pk20, pk21, pk22, pk23, pk24, pk25, pk26, pk27, pk28, pk29, pk30 };
	pklicz++;
	cout << "Liczba PK tablicy: " << pklicz << endl;
	std::string pk = tabpk[pklicz];
	return pk;
}