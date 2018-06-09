#include <opencv2/opencv.hpp>
#include "ADisplay.h"

using namespace cv;

void ADisplay::Run()
{
	Start();

	while(1)
	{
		Update();

		namedWindow("Display");
		imshow("Display", *display);

		int key = waitKey((int)(1000.0/fps));
		if (key == 27) break;
	}

	destroyAllWindows();
	delete display;
}

