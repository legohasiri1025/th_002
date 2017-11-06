#pragma once

extern enum STATE;

class title{
private:
	int state_num;
public:
	title();
	void menu(STATE state_);
	int select(int &statenum,int itemnumber,int defaultitem);
	~title();
};

