#pragma once

#include <opencv2/core/core.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/video/tracking.hpp>

class FaceTracker
{
public:
   FaceTracker();
   void Initialize( const cv::Mat& firstFrame, cv::Rect objectBoundary );
   bool TrackNextFrame( const cv::Mat& frame, cv::Rect& objectBoundary );

private:
   void CenterTrackWindowAboutPosition( int x, int y );
   double CalculateDistance( const cv::Rect& rect1, const cv::Rect& rect2 );
   void UpdateKalmanFilterAndTrackWindow( int observationCenterX, int observationCenterY );

   cv::Rect _trackWindow;

   cv::CascadeClassifier _frontalCascade;
   cv::CascadeClassifier _profileCascade;
   cv::KalmanFilter _kalmanFilter;
};