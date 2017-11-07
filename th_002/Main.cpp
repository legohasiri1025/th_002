# include <Siv3D.hpp>
#include "admin.h"

void Main()
{
	admin admin;
	while (System::Update())
	{
		admin.updata();
	}
}
