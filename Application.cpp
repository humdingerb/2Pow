#include "Application.h"
#include "MainWindow.h"

B2PowApplication::B2PowApplication()
		  :BApplication(APPSIGNATURE)
{
	BRect windowRect(100,100,100+512,100+512);
	window = new MainWindow(windowRect, "2Pow Game");
	window->Show();
}


B2PowApplication::~B2PowApplication()
{
}

int
main(int argc, char* argv[])
{
	B2PowApplication app;
	app.Run();
	
	return 0;
}
