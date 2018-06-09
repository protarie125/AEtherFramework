#ifndef A_DISPLAY_H
#define A_DISPLAY_H
/* 추상클래스 ADisplay 정의 */ 
#include <cstdbool>
#include <opencv2/opencv.hpp>

using namespace cv;

class ADisplay
{
private:
	int width;
	int height;

	double fps;

public:
	void Run();		

	virtual void Start() = 0;

	virtual void Update() = 0;

public: 
	// Get
	int Width() { return width; }
	int Height() { return height; }
	
	double Fps() { return fps; }

	// Set
	void SetWidth(int _width) { width = _width; }
	void SetHeight(int _height) { height = _height; }
	
	void SetFps(double _fps) { fps = _fps; }

	Mat* display;	
};
#endif

