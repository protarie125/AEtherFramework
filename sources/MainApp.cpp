#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv)
{
	int width = 600;
	int height = 800;

	Mat image(height, width, CV_8UC3);	
	image=Scalar(255, 255, 0);

	namedWindow("Display Image", WINDOW_AUTOSIZE);
	imshow("Display Image", image);

	waitKey(0);

	return 0;
}

