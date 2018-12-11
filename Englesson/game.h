#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <string>
#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace sf;
using namespace std;

class Gra {
public:
	int liczba = 0;
	int kontrola = 0;
	int tura = 0;
	int pklicz = 0;
	unsigned int liczbaa = rand() % 15;
	Texture bad, badd, good;
	Sprite baddd, badddd, goodd;
	Texture qa1, qa2, qa3, qa4, qa5, qa6, qa7, qa8, qa9, qa10, qa11, qa12, qa13, qa14, qa15;
	Sprite qd1, qd2, qd3, qd4, qd5, qd6, qd7, qd8, qd9, qd10, qd11, qd12, qd13, qd14, qd15;
	String q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13, q14, q15;
	String ZadajPytanie();
	std::string Punktacja();
	Sprite Dobra();
	Sprite Wyswietlzle();
};

