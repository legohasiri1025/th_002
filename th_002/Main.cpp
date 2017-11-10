# include <Siv3D.hpp>
#include "admin.h"

void Main()
{
	System::SetExitEvent(WindowEvent::CloseButton);
	admin admin;
	FontAsset::Register(L"font", 12, Typeface::Default);
#if _DEBUG
	FontAsset::Register(L"debug", 12, Typeface::Default);
#endif

	while (System::Update()){
		
		admin.updata();
		FontAsset(L"debug")(System::FrameCount()).drawAt({ 512,430 });
		FontAsset(L"font")(Profiler::FPS()).drawAt({ 512,445 });
	}
}
