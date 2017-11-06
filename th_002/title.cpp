#include "title.h"
#include <Siv3D.hpp>

typedef enum STATE{
	titlemenu,
	gamestart,
	result,
	config,
	quit,
	all
}STATE;

title::title(){
	state_num = titlemenu;
}

int title::select(int &statenum, int itemnumber, int defaultitem) {
	/* init */
	struct element{
		Point point;
		Texture tex;
	};
	element selectmenu[4] = {
		{ { 200,220 },Texture(L"pic/title/element/gamestart.dds") },
		{ { 200,220 },Texture(L"pic/title/element/result.dds") },
		{ { 200,220 },Texture(L"pic/title/element/config.dds") },
		{ { 200,220 },Texture(L"pic/title/element/") }
	};
}

void title::menu(STATE state_ = titlemenu) {
	int *selectnum;
	select(*selectnum, all,state_num);

	switch (state_) {
	case titlemenu:
		state_num = titlemenu;
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
