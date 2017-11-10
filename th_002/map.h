#pragma once
#include <Siv3D.hpp>
#include "mapchip.h"
class map{
private:
	static const int32 MAP_H = 64;
	static const int32 MAP_W = 128;
	int32 mapdata[MAP_H][MAP_W];
public:
	map();
	void move();
	bool moveflag();
	~map();
};

