#include "title.h"
#include <Siv3D.hpp>

title::title(){
	state_num = titlemenu;
	//TextureAsset::Register(L"back", L"pic/title/back1.dds");
	title::selectmenu[4] = {
		{ { 30,180 },Texture(L"pic/title/element/gamestart.dds") },
		{ { 30,240 },Texture(L"pic/title/element/result.dds") },
		{ { 30,300 },Texture(L"pic/title/element/config.dds") },
		{ { 30,360 },Texture(L"pic/title/element/quit.dds") }
	};
}



void title::select(int &statenum, int itemnumber, int defaultitem) {
	/* init */

	int stnumber = defaultitem;


	if (Input::KeyUp.pressed) {
		stnumber = (stnumber - 1) % itemnumber;
	}
	if (Input::KeyDown.pressed) {
		stnumber = (stnumber + 1) % itemnumber;
	}

	stnumber = statenum;

	if (Input::KeyUp.pressed || Input::KeyDown.pressed) {
		for (int i = 0; i < all - 1; ++i) {
			if (i == statenum) {
				title::selectmenu[i].title::element::point.x += 32;
			}
			if (i == statenum) {
				title::selectmenu[i].title::element::point.x = 30;
			}
		}
	}

	for (int i = 0; i < all - 1; ++i) {
		title::selectmenu[i].tex.draw(title::selectmenu[i].title::element::point);
	}
}

void title::menu(STATE state_=titlemenu) {
	int a = 1;
	int *selectnum=&a;
	Texture back (L"pic/title/back1.dds");

	switch (state_) {
	case titlemenu:
		state_num = titlemenu;
		back.draw(0,0);
		select(*selectnum, all, state_num);
		if (Input::KeyZ.pressed) {
			switch (*selectnum) {
			case gamestart:
				menu(gamestart);
				break;
			case result:
				menu(result);
				break;
			case config:
				menu(config);
				break;
			case quit:
				menu(quit);
				break;
			}
		}
		break;

	case gamestart:
		state_num = gamestart;
		//gamestart
		break;

	case result:
		state_num = result;;
		//result
		break;

	case config:
		state_num = config;
		//config
		break;

	default:
		System::Exit();
		break;

	}
}

title::~title(){
}
