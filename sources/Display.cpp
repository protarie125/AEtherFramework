#include <opencv2/opencv.hpp>
#include "ADisplay.h"
#include "Display.h"

using namespace cv;

namespace AEther
{
	// 생성자
	Display::Display(int width, int height)
	{
		SetWidth(width);
		SetHeight(height);
		display = new Mat(Height(), Width(), CV_8UC1);
	}

	void Display::Start()
	{
		SetFps(60.0);	
	}

	void Display::Update()
	{
		*display = Scalar(100);
	}	
}

