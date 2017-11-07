#pragma once

typedef enum STATE {
	titlemenu,
	gamestart,
	result,
	config,
	quit,
	all
}STATE;

struct element {
	Point point;
	Texture tex;
};


class title{
private:
	int state_num;
	struct element {
		Point point;
		Texture tex;
	};
	struct element selectmenu[4];
public:
	
	title();
	void menu(STATE state_);
	void select(int &statenum,int itemnumber,int defaultitem=0);
	~title();
};

