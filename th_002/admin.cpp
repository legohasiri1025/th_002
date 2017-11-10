#include "admin.h"
#include "title.h"
#include "map.h"
#include <Siv3D.hpp>
#include <HamFramework.hpp>

enum class SCENESTATE {
	titlemenu,
	gamestart,
	result,
	config,
	quit,
	all
};

admin::admin() {
	scene.add<title>(L"titlemenu");
	scene.add<gamestart>(L"titlemenu");
	scene.add<result>(L"titlemenu");
	scene.add<config>(L"titlemenu");
	/*scene.add<title>(L"titlemenu");
	scene.add<title>(L"titlemenu");
	scene.add<title>(L"titlemenu");*/
}

void admin::updata() {
	//title_.menu(titlemenu);
}