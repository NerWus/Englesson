#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <String.h>
#include <fstream>
#include <conio.h>
#include <time.h>

#include "game.h"

using namespace std;


int main()
{
	
	RenderWindow okno(VideoMode(1234, 804), "Englesson");
	Music music;
	music.openFromFile("music/musicbg.ogg");
	music.setVolume(20);
	music.play();
	music.setLoop(true);
	
	SoundBuffer buffer,buff;
	buffer.loadFromFile("music/badpres.ogg");
	buff.loadFromFile("music/goodpress.ogg");

	Sound sound,sounds;
	sound.setBuffer(buffer);
	sounds.setBuffer(buff);
	sound.setVolume(30);
	sounds.setVolume(30);
	int action = 0;
	int tura = 0;
	float dx, dy;
	bool isClickedItem = false;
	bool sprnick = false;
	bool exityes = false;
	bool chosegame = false;
	bool musiccfg = true;
	bool soundcfg = true;
	bool fullscrcfg = false;
	bool dobra = false;
	bool zla = false;
	bool zla2 = false;
	bool wybormenu = true;
	bool exitmenu = false;
	bool grafindanimals = false;
	bool optionmenu = false;
	bool wynikiiii = false;
	bool slowka = false;
	bool sprit1 = false;
	bool sprit2 = false;
	bool sprit3 = false;
	bool sprit4 = false;
	bool sprit5 = false;
	bool sprit6 = false;
	bool sprit7 = false;
	bool najakcp = false;
	bool zapis = false;
	bool odczyt = true;
	String punkty = "0";
	std::string wyniki;

	// Fonty i texty
	Font comic, comicop;
	comic.loadFromFile("comicpro.TTF");
	comicop.loadFromFile("comic.ttf");
	Text arusure("ARE YOU SURE?", comic);
	arusure.setPosition(380, 350);
	arusure.setCharacterSize(60);
	Text txtgam1("Find animals", comic);
	txtgam1.setPosition(135, 570);
	txtgam1.setCharacterSize(35);
	Text txtop("OPTIONS", comic);
	txtop.setPosition(483, 125);
	txtop.setCharacterSize(60);
	Text ms("Music", comicop);
	ms.setPosition(335, 240);
	ms.setCharacterSize(35);
	Text sond("Sounds", comicop);
	sond.setPosition(335, 340);
	sond.setCharacterSize(35);
	Text flsc("Full Screen", comicop);
	flsc.setPosition(335, 440);
	flsc.setCharacterSize(35);
	Text musicon("On", comic);
	musicon.setPosition(780, 240);
	musicon.setCharacterSize(35);
	Text soundon("On", comic);
	soundon.setPosition(780, 340);
	soundon.setCharacterSize(35);
	Text fullsrcon("On", comic);
	fullsrcon.setPosition(780, 440);
	fullsrcon.setCharacterSize(35);
	Text musicoff("Off", comic);
	musicoff.setPosition(780, 240);
	musicoff.setCharacterSize(35);
	Text soundoff("Off", comic);
	soundoff.setPosition(780, 340);
	soundoff.setCharacterSize(35);
	Text fullsrcoff("Off", comic);
	fullsrcoff.setPosition(780, 440);
	fullsrcoff.setCharacterSize(35);

	Texture koniecgry,tak,nie;
	koniecgry.loadFromFile("img/gameend.png");
	tak.loadFromFile("img/20.png");
	nie.loadFromFile("img/19.png");
	Sprite koniecgrry,otak,onie;
	koniecgrry.setTexture(koniecgry);
	otak.setTexture(tak);
	onie.setTexture(nie);
	otak.setPosition(400,630);
	onie.setPosition(650,630);
	Texture nickkk;
	nickkk.loadFromFile("img/nick.png");
	Sprite nickk;
	nickk.setTexture(nickkk);
	Texture bgslow;
	bgslow.loadFromFile("img/slowka.png");
	Sprite slow;
	slow.setTexture(bgslow);
	Texture bgwynik;
	bgwynik.loadFromFile("img/slownik.png");
	Sprite bgwynikk;
	bgwynikk.setTexture(bgwynik);

	Texture bg, bg1, logo, it1, it2, it3, it4, it5, it1h, it2h, it3h, it4h, it5h;
	bg.loadFromFile("img/t³o.png");
	bg1.loadFromFile("img/elementy4/gra2.png");
	logo.loadFromFile("img/1.png");
	it1.loadFromFile("img/2.png");
	it2.loadFromFile("img/3.png");
	it3.loadFromFile("img/4.png");
	it4.loadFromFile("img/5.png");
	it5.loadFromFile("img/6.png");
	it1h.loadFromFile("img/elementy4/5.png");
	it2h.loadFromFile("img/elementy4/4.png");
	it3h.loadFromFile("img/elementy4/3.png");
	it4h.loadFromFile("img/elementy4/2.png");
	it5h.loadFromFile("img/elementy4/1.png");
	Sprite backg, bga1, log, item1, item2, item3, item4, item5, item1h, item2h, item3h, item4h, item5h;
	backg.setTexture(bg);
	bga1.setTexture(bg1);
	log.setTexture(logo);
	item1.setTexture(it1);
	item2.setTexture(it2);
	item3.setTexture(it3);
	item4.setTexture(it4);
	item5.setTexture(it5);
	item1h.setTexture(it1h);
	item2h.setTexture(it2h);
	item3h.setTexture(it3h);
	item4h.setTexture(it4h);
	item5h.setTexture(it5h);

	log.setPosition(420, 40);
	item1.setPosition(475, 290);
	item2.setPosition(505, 400);
	item3.setPosition(505, 490);
	item4.setPosition(505, 580);
	item5.setPosition(505, 670);

	item1h.setPosition(455, 270);
	item2h.setPosition(485, 380);
	item3h.setPosition(485, 470);
	item4h.setPosition(485, 560);
	item5h.setPosition(485, 650);

	// textury wybor gry
	Texture wybgr, imgfind;
	wybgr.loadFromFile("img/wybor.png");
	imgfind.loadFromFile("img/elementy3/2.png");
	Sprite wybgry, imgfindd;
	wybgry.setTexture(wybgr);
	imgfindd.setTexture(imgfind);
	imgfindd.setPosition(48, 285);

	// textury option
	Texture bgop, up, ex, lf, rig, lf1, lf2, rig1, rig2;
	bgop.loadFromFile("img/opcje.png");
	up.loadFromFile("img/16.png");
	ex.loadFromFile("img/17.png");
	lf.loadFromFile("img/7.png");
	rig.loadFromFile("img/8.png");
	lf1.loadFromFile("img/7.png");
	rig1.loadFromFile("img/8.png");
	lf2.loadFromFile("img/7.png");
	rig2.loadFromFile("img/8.png");
	Sprite bgoop, upp, exx, lff, rigg, lff1, lff2, rigg1, rigg2;
	bgoop.setTexture(bgop);
	upp.setTexture(up);
	exx.setTexture(ex);
	lff.setTexture(lf);
	rigg.setTexture(rig);
	lff1.setTexture(lf1);
	rigg1.setTexture(rig1);
	lff2.setTexture(lf2);
	rigg2.setTexture(rig2);
	upp.setPosition(405, 680);
	exx.setPosition(745, 680);
	lff.setPosition(675, 230);
	rigg.setPosition(875, 230);
	lff1.setPosition(675, 330);
	rigg1.setPosition(875, 330);
	lff2.setPosition(675, 430);
	rigg2.setPosition(875, 430);

	// texture exit	
	Texture onbgex, yes, no, yesss, nooo;
	onbgex.loadFromFile("img/wyjscie.png");
	yes.loadFromFile("img/20.png");
	no.loadFromFile("img/19.png");
	yesss.loadFromFile("img/elementy4/11.png");
	nooo.loadFromFile("img/elementy4/10.png");
	Sprite onbgtx, yess, noo, yessss, noooo;
	onbgtx.setTexture(onbgex);
	yess.setTexture(yes);
	noo.setTexture(no);
	noooo.setTexture(nooo);
	yessss.setTexture(yesss);
	noo.setPosition(775, 430);
	yess.setPosition(275, 430);
	noooo.setPosition(760, 410);
	yessss.setPosition(260, 410);
	
	// textury gra
	Gra p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14;
	Gra tabspw[15] = { p1, p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14 };
	Sprite god, fal1, fal2;
	String pyt1;

	pyt1 = tabspw[0].ZadajPytanie();
	god = tabspw[0].Dobra();
	fal1 = tabspw[0].Wyswietlzle();
	fal2 = tabspw[0].Wyswietlzle();

	srand(time(NULL));
	unsigned int losuj = rand() % 3;

	Texture exi, back, bad, badd, good,godjob;
	exi.loadFromFile("img/12.png");
	back.loadFromFile("img/11.png");
	godjob.loadFromFile("img/job.png");
	Sprite exii, backk, baddd, badddd, goodd,godjobb;
	exii.setTexture(exi);
	godjobb.setTexture(godjob);
	backk.setTexture(back);
	godjobb.setPosition(960, 600);
	exii.setPosition(1075, 30);
	backk.setPosition(1145, 30);
	bad.loadFromFile("img/14.png");
	badd.loadFromFile("img/14.png");
	good.loadFromFile("img/15.png");
	baddd.setTexture(bad);
	badddd.setTexture(badd);
	goodd.setTexture(good);
	int liczpk;
	string string="";
	size_t maxTextLength = 15;
	Text nick("Podaj swój nick", comic);
	nick.setPosition(300, 370);
	nick.setCharacterSize(70);

	int tabpk[16] = {0,10,20,30,40,50,60,70,80,90,100,110,120,130,140,150 };

	Texture akcp,aakcp;
	akcp.loadFromFile("img/elementy4/7.png");
	aakcp.loadFromFile("img/16.png");
	Sprite akcpt,aakcpt;
	akcpt.setTexture(akcp);
	aakcpt.setTexture(aakcp);
	akcpt.setPosition(990,440);
	aakcpt.setPosition(990, 440);

	while (okno.isOpen())
	{
		Vector2i pos = Mouse::getPosition(okno);
		Event event;
		while (okno.pollEvent(event))
		{
			if (yess.getGlobalBounds().contains(pos.x, pos.y)) {
				sprit6 = true;
			}
			else {
				sprit6 = false;
			}

			if (noo.getGlobalBounds().contains(pos.x, pos.y)) {
				sprit7 = true;
			}
			else {
				sprit7 = false;
			}
			if (event.type == Event::Closed) {
				okno.close();
			}
			if (event.type == Event::TextEntered) {
				if (event.text.unicode == '\u0008' && string.size() > 0)
				{
					string.erase(string.size() - 1, 1);
					nick.setString(string);
				}

				else if (event.text.unicode < 128 && string.size() < maxTextLength)
				{
					string += static_cast<char>(event.text.unicode);
					nick.setString(string);
				}
			}
			if (event.type == Event::MouseButtonPressed) {
				if (event.key.code == Mouse::Left)
					if (wybormenu == true) {
						if (item1.getGlobalBounds().contains(pos.x, pos.y)) {
							chosegame = true;
						}
						else if (item2.getGlobalBounds().contains(pos.x, pos.y)) {
							action = 2;
							wynikiiii = true;
							chosegame = false;
							wybormenu = false;
							exitmenu = true;
							exityes = true;
							grafindanimals = false;
							cout << "test act 2 " << endl;
						}
						else if (item3.getGlobalBounds().contains(pos.x, pos.y)) {
							action = 3;
							optionmenu = true;

							wybormenu = false;
							chosegame = false;
							grafindanimals = false;
							cout << "test act 3 " << endl;
						}
						else if (item4.getGlobalBounds().contains(pos.x, pos.y)) {
							action = 4;
							slowka = true;
							cout << "test act 4 " << endl;
						}
						else if (item5.getGlobalBounds().contains(pos.x, pos.y)) {
							exitmenu = true;
							exityes = true;
						}
					}
				if (slowka == true) {
					if (backk.getGlobalBounds().contains(pos.x, pos.y)) {
						action = 0;
					}
				}
				if (wynikiiii == true) {
					if (backk.getGlobalBounds().contains(pos.x, pos.y)) {
						action = 0;
					}
				}
				if (chosegame == true) {
					action = 0;
					if (imgfindd.getGlobalBounds().contains(pos.x, pos.y) || txtgam1.getGlobalBounds().contains(pos.x, pos.y)) {
						action = 1;
						grafindanimals = true;
					}
					wybormenu = false;
					exitmenu = true;
					sprnick = true;
					if (sprnick == true) {
						if (akcpt.getGlobalBounds().contains(pos.x, pos.y)) {
							sprnick = false;
							wybormenu = false;
							grafindanimals = false;
							exitmenu = true;
							exityes = false;
							najakcp = false;
						}
					}
				}
				if (exitmenu == true) {
					wybormenu = false;
					if (yess.getGlobalBounds().contains(pos.x, pos.y)) {
						if (exityes == true) {
							okno.close();
						}
					}
					else if (noo.getGlobalBounds().contains(pos.x, pos.y)) {
						exityes = false;
						wybormenu = true;
					}
				}
				if (optionmenu == true) {
					grafindanimals = false;
					wybormenu = false;
					if (lff.getGlobalBounds().contains(pos.x, pos.y)) {
						if (musiccfg == false) {
							musiccfg = true;
						}
						else {
							musiccfg = false;
						}
					}
					else if (rigg.getGlobalBounds().contains(pos.x, pos.y)) {
						if (musiccfg == false) {
							musiccfg = true;
						}
						else {
							musiccfg = false;
						}
					}
					else if (upp.getGlobalBounds().contains(pos.x, pos.y) || exx.getGlobalBounds().contains(pos.x, pos.y)) {
						wybormenu = true;
						action = 0;
					}
				}
				if (otak.getGlobalBounds().contains(pos.x, pos.y)) {
					tura = 0;
					pyt1 = tabspw[0].ZadajPytanie();
					god = tabspw[0].Dobra();
					fal1 = tabspw[0].Wyswietlzle();
					fal2 = tabspw[0].Wyswietlzle();
					punkty = tabspw[1].Punktacja();
					grafindanimals = true;
					zapis = true;
				}
				if (onie.getGlobalBounds().contains(pos.x, pos.y)) {
					action = 0;
					zapis = true;
					wybormenu = true;
					grafindanimals = false;
					tura = 0;
				}
				if (grafindanimals == true) {
					music.setVolume(8);
					exitmenu = true;
					wybormenu = false;
					chosegame = false;
					optionmenu = false;
					if (god.getGlobalBounds().contains(pos.x, pos.y)) {
						cout << "dobra odp" << endl;
						sounds.play();
						dobra = true;
						okno.draw(goodd);
						okno.display();
						tura++;
						for (int i = 1; i < 15; i++) {
							if (tura == i) {
								losuj = (rand() % 4) + 0;
								zla = false;
								zla2 = false;
								dobra = false;
								pyt1 = tabspw[i].ZadajPytanie();
								god = tabspw[i].Dobra();
								fal1 = tabspw[i].Wyswietlzle();
								fal2 = tabspw[i].Wyswietlzle();
								punkty = tabspw[1].Punktacja();
								liczpk = tabpk[i];
							}
							else {
								cout << "blad" << endl;
							}
						}
						cout << tura << endl;
					}
					else if (fal1.getGlobalBounds().contains(pos.x, pos.y)) {
						sound.play();
						zla = true;
						cout << "zla odp" << endl;
					}
					else if (fal2.getGlobalBounds().contains(pos.x, pos.y)) {
						sound.play();
						zla2 = true;
						cout << "zla2 odp" << endl;
					}
					else if (exii.getGlobalBounds().contains(pos.x, pos.y)) {
						wybormenu = true;
						action = 0;
						chosegame = false;
						grafindanimals = false;
						tura = 0;

					}
				}
			}

			if (akcpt.getGlobalBounds().contains(pos.x, pos.y)) {
				najakcp = true;
			}
			else {
				najakcp = false;
			}

			if (item1.getGlobalBounds().contains(pos.x, pos.y)) {
				sprit1 = true;
			}
			else {
				sprit1 = false;
			}
			if (item2.getGlobalBounds().contains(pos.x, pos.y)) {
				sprit2 = true;
				odczyt = true;
			}
			else {
				sprit2 = false;
			}
			if (item3.getGlobalBounds().contains(pos.x, pos.y)) {
				sprit3 = true;
			}
			else {
				sprit3 = false;
			}
			if (item4.getGlobalBounds().contains(pos.x, pos.y)) {
				sprit4 = true;
			}
			else {
				sprit4 = false;
			}
			if (item5.getGlobalBounds().contains(pos.x, pos.y)) {
				sprit5 = true;
			}
			else {
				sprit5 = false;
			}
		}
		
		if (odczyt == true) {
			std::fstream pliik("wyniki.txt", std::ios::in); //zak³adamy, ¿e plik istnieje
			Text odczytwynikow;
			getline(pliik, wyniki);

			odczyt = false;
		}

		Text odczytwynikow(wyniki, comic);
		odczytwynikow.setPosition(100, 190);
		odczytwynikow.setCharacterSize(30);
		Text slwynik("SCORE", comic);
		slwynik.setPosition(500, 60);
		slwynik.setCharacterSize(60);
		Text nicccck("Nick", comic);
		nicccck.setPosition(100, 135);
		nicccck.setCharacterSize(40);
		Text ilopk("Points", comic);
		ilopk.setPosition(250, 135);
		ilopk.setCharacterSize(40);

		if (losuj == 0) {
			fal1.setPosition(105, 161);
			//fal1.setPosition(460, 161);
			//fal1.setPosition(821, 161);

			//fal2.setPosition(105, 161);
			fal2.setPosition(460, 161);
			//fal2.setPosition(821, 161);

			//god.setPosition(105, 161);
			//god.setPosition(460, 161);
			god.setPosition(821, 161);
			baddd.setPosition(125, 158);
			badddd.setPosition(480, 158);
			goodd.setPosition(841, 158);
		}
		else if (losuj == 1) {
			//fal1.setPosition(105, 161);
			fal1.setPosition(460, 161);
			//fal1.setPosition(821, 161);

			//fal2.setPosition(105, 161);
			//fal2.setPosition(460, 161);
			fal2.setPosition(821, 161);

			god.setPosition(105, 161);
			//god.setPosition(460, 161);
			//god.setPosition(821, 161);
			goodd.setPosition(125, 158);
			baddd.setPosition(480, 158);
			badddd.setPosition(841, 158);
		}
		else if (losuj == 2) {
			//fal1.setPosition(105, 161);
			//fal1.setPosition(460, 161);
			fal1.setPosition(821, 161);

			fal2.setPosition(105, 161);
			//fal2.setPosition(460, 161);
			//fal2.setPosition(821, 161);

			//god.setPosition(105, 161);
			god.setPosition(460, 161);
			//god.setPosition(821, 161);
			badddd.setPosition(125, 158);
			goodd.setPosition(480, 158);
			baddd.setPosition(841, 158);
		}
		else {
			//fal1.setPosition(105, 161);
			fal1.setPosition(460, 161);
			//fal1.setPosition(821, 161);

			//fal2.setPosition(105, 161);
			//fal2.setPosition(460, 161);
			fal2.setPosition(821, 161);

			god.setPosition(105, 161);
			//god.setPosition(460, 161);
			//god.setPosition(821, 161);
			goodd.setPosition(125, 158);
			baddd.setPosition(480, 158);
			badddd.setPosition(841, 158);
		}

		Text pytanie(pyt1, comic);
		pytanie.setPosition(480, 560);
		pytanie.setCharacterSize(35);
		Text Punky("Pkt:", comic);
		Punky.setPosition(900, 565);
		Punky.setCharacterSize(35);
		Text IlPk(punkty, comic);
		IlPk.setPosition(1000, 565);
		IlPk.setCharacterSize(35);
		Text Twojwynik(punkty, comic);
		Twojwynik.setPosition(640, 370);
		Twojwynik.setCharacterSize(120);

		// obs³uga akcji
		if (action == 0) {
			okno.draw(backg);
			backg.setColor(Color(255, 255, 255));
			okno.draw(log);

			// menu items
			if (sprit1 == true) {
				okno.draw(item1h);
			}
			else {
				okno.draw(item1); // #item1 Play	      = action =1
			}
			if (sprit2 == true) {
				okno.draw(item2h);
			}
			else {
				okno.draw(item2); // #item1 Play	      = action =1
			}
			if (sprit3 == true) {
				okno.draw(item3h);
			}
			else {
				okno.draw(item3); // #item1 Play	      = action =1
			}
			if (sprit4 == true) {
				okno.draw(item4h);
			}
			else {
				okno.draw(item4); // #item1 Play	      = action =1
			}
			if (sprit5 == true) {
				okno.draw(item5h);
			}
			else {
				okno.draw(item5); // #item1 Play	      = action =1
			}

			if (chosegame == true) {
				okno.draw(wybgry);
				okno.draw(imgfindd);
				okno.draw(txtgam1);
				grafindanimals = false;
				wybormenu = false;
				if (sprnick == true) {
					grafindanimals = false;
					wybormenu = false;
					okno.draw(nickk);
					okno.draw(nick);
					if (najakcp == true) {
						grafindanimals = false;
						wybormenu = false;
						okno.draw(akcpt);
					}
					else {
						grafindanimals = false;
						wybormenu = false;
						okno.draw(aakcpt);
					}
				}
			}
			if (exityes == true) {
				okno.draw(onbgtx);
				okno.draw(arusure);
				if (sprit6 == true) {
					okno.draw(yessss);
				}
				else {
					okno.draw(yess);
				}
				if (sprit7 == true) {
					okno.draw(noooo);
				}
				else {
					okno.draw(noo);
				}
			}
			okno.display();
		}
		else if (action == 1) {
			okno.clear();
			okno.draw(bga1);
			okno.draw(exii);
			okno.draw(backk);
			okno.draw(pytanie);
			okno.draw(Punky);
			okno.draw(IlPk);
			okno.draw(god);
			okno.draw(fal1);
			okno.draw(fal2);
			//sprawdzenie poprawnosci poprawiæ bo nie dzia³a 

			if (dobra == true) {
				okno.draw(goodd);
			}
			if (zla == true) {
				okno.draw(baddd);
			}
			if (zla2 == true) {
				okno.draw(badddd);
			}
			if (exityes == true) {
				okno.draw(onbgtx);
				okno.draw(arusure);
				okno.draw(noo);
				okno.draw(yess);
			}
			if (tura == 6) {
				okno.draw(godjobb);
			}
			if (tura == 15) {
				okno.draw(koniecgrry);
				okno.draw(Twojwynik);
				okno.draw(otak);
				okno.draw(onie);
				grafindanimals = false;
			}
			okno.display();
		}
		else if (action == 2) {
			okno.draw(bgwynikk);
			okno.draw(ilopk);
			okno.draw(nicccck);
			okno.draw(slwynik);
			okno.draw(backk);
			okno.draw(odczytwynikow);
			okno.display();
		}
		else if (action == 3) {
			okno.clear();
			okno.draw(backg);
			backg.setColor(Color(105, 105, 105));
			okno.draw(bgoop);
			okno.draw(txtop);
			okno.draw(exx);
			okno.draw(upp);
			okno.draw(lff);
			okno.draw(rigg);
			okno.draw(lff1);
			okno.draw(rigg1);
			okno.draw(lff2);
			okno.draw(rigg2);
			okno.draw(ms);
			okno.draw(sond);
			okno.draw(flsc);
			if (musiccfg == true) {
				if (music.getStatus() == 2) {
				}
				else {
					music.play();
				}
				okno.draw(musicon);
			}
			else {
				music.stop();
				okno.draw(musicoff);
			}
			if (soundcfg == true) {
				okno.draw(soundon);
			}
			else {
				okno.draw(soundoff);
			}
			if (fullscrcfg == true) {
				okno.draw(fullsrcon);
			}
			else {
				okno.draw(fullsrcoff);
			}
			okno.display();
		}
		else if (action == 4) {
			okno.clear();
			okno.draw(slow);	
			okno.draw(backk);
			okno.display();
		}
		if (zapis == true) {
			std::fstream plik;
			plik.open("wyniki.txt", ios::app);
			if (plik.good() == true)
			{
				std::cout << "Uzyskano dostep do pliku!" << std::endl;
				plik << string <<"             " << liczpk << endl;
				cout << liczpk;
				plik.close();
				zapis = false;
			}
			else std::cout << "Dostep do pliku zostal zabroniony!" << std::endl;
		}
	}
	return 0;
}
