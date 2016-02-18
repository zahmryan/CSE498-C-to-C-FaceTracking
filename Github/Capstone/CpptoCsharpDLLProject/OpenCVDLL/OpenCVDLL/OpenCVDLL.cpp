// OpenCVDLL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

using namespace cv;
using namespace std;

#define DLLEXPORT extern "C" __declspec(dllexport)
class FaceTracker
{
public:
	FaceTracker(): _kalmanFilter(4, 2, 0)
	{
		_frontalCascade.load("haarcascade_frontalface_alt2.xml");
		_profileCascade.load("haarcascade_profileface.xml");
	}

	void Initialize(const cv::Mat& firstFrame, cv::Rect objectBoundary)
	{

	}

	vector<Rect> TrackNextFrame(const cv::Mat& frame, cv::Rect& objectBoundary)
	{
		Mat frameGray;
		vector<Rect> faces;
		vector<Rect> profileFaces;

		_frontalCascade.detectMultiScale(frameGray, faces);
		_profileCascade.detectMultiScale(frameGray, profileFaces);

		faces.insert(faces.end(), profileFaces.begin(), profileFaces.end());

		return faces;
	}

private:
	void CenterTrackWindowAboutPosition(int x, int y)
	{

	}
	double CalculateDistance(const cv::Rect& rect1, const cv::Rect& rect2)
	{

	}
	void UpdateKalmanFilterAndTrackWindow(int observationCenterX, int observationCenterY)
	{

	}

	cv::Rect _trackWindow;

	cv::CascadeClassifier _frontalCascade;
	cv::CascadeClassifier _profileCascade;
	cv::KalmanFilter _kalmanFilter;
};



