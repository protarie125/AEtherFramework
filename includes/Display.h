#ifndef DISPLAY_H
#define DISPLAY_H
/* 구상 클래스 Display */
#include <opencv2/opencv.hpp>
#include "ADisplay.h"

using namespace cv;

namespace AEther
{
	class Display : public ADisplay
	{
	public:
		// 생성자
		Display(int width, int height);

	public:
		virtual void Start();

		virtual void Update();
	};
}
#endif

