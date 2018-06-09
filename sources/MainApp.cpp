#include <stdio.h>
#include <opencv2/opencv.hpp>
#include "Display.h"

using namespace cv;

int main(int argc, char** argv)
{
	int width = 600;
	int height = 800;

	Display* display = new Display(width, height);
	display->Run();

	return 0;
}

