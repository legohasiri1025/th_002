#pragma once
#include "admin.h"
#include <Siv3D.hpp>
#include <HamFramework.hpp>


class title : public SceneManager<String> ::Scene {
public:
	void init() override;
	void update()override;
	void draw()const override;
};

class gamestart : public SceneManager<String> ::Scene {
public:
	void init() override;
	void update()override;
	void draw()const override;
};

class result : public SceneManager<String> ::Scene {
public:
	void init() override;
	void update()override;
	void draw()const override;
};

class config : public SceneManager<String> ::Scene {
public:
	void init() override;
	void update()override;
	void draw()const override;
};