#include <stdio.h>
#include "Display.h"

using namespace AEther;

int main(int argc, char** argv)
{
	int width = 600;
	int height = 800;

	Display* display = new Display(width, height);
	display->Run();

	return 0;
}

