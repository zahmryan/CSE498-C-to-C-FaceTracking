#include "stdafx.h"
#include "OpenCVDLL.cpp"

using namespace cv;
using namespace std;

#define DLLEXPORT extern "C" __declspec(dllexport)
DLLEXPORT void runFaceTracker(string inputFile)
{
	FaceTracker faceTracker;
	Mat frame;
	VideoCapture cap;
	vector<vector<Rect>> detectedFacesInVideo;
	vector<Rect> detectedFacesInFrame;

	cout << "FACETRACKKERRRRRRRRRR" << endl;

	//cap.open(inputFile);
	/*if (!cap.isOpened())
	{
		cout << "Failed to open file: " + inputFile << endl << endl;
		//return -1;
	}*/

	cout << "HEREEEE" << endl;
	Rect faceLocation;
	/*for (;;)
	{
		cap >> frame;
		cout << "frame captured" << endl;
		if (frame.empty())
		{
			//return detectedFacesInVideo;
			break;
		}
		else
		{
			detectedFacesInFrame = faceTracker.TrackNextFrame(frame, faceLocation);
			detectedFacesInVideo.push_back(detectedFacesInFrame);
		}
	}*/
	//return detectedFacesInVideo;
}