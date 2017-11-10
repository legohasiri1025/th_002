#pragma once
#include "title.h"
#include <Siv3D.hpp>
#include <HamFramework.hpp>

//extern enum class  SCENESTATE ;
SceneManager<String> scene;

class admin {
private:
	
	title title_;

public:
	admin();
	void updata();
};