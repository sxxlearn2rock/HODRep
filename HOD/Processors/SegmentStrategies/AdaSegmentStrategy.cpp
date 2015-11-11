#include "./Processors/SegmentStrategies/AdaSegmentStrategy.h"
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using cv::Mat;

AdaSegmentStrategy* AdaSegmentStrategy::mSingleton = NULL;

void AdaSegmentStrategy::process( Mat& srcImg, Mat& segImg, Mat& desImg, vector<Coordinate>& coordinates, vector<RotatedRect>& rotatedRects )
{
	adaSegment(srcImg, segImg);
	morphFilter(segImg, desImg, mErosionType, mDilationType, mErosionSize, mDilationSize);
	positionResult(desImg, desImg, coordinates, rotatedRects);
}
void AdaSegmentStrategy::adaSegment( Mat src, Mat& dst )
{
	//Mat dst=Mat(src.rows,src.cols,CV_8UC1);
	double maxValue=255;
	//int adaptiveMethod=ADAPTIVE_THRESH_MEAN_C;   //均值
	int adaptiveMethod=cv::ADAPTIVE_THRESH_GAUSSIAN_C;//高斯
	//int thresholdType=THRESH_BINARY;
	int thresholdType=cv::THRESH_BINARY_INV;
	int blockSize=11;
	double C=10;
	cv::adaptiveThreshold(src,dst,maxValue,adaptiveMethod,thresholdType,blockSize,C);
}
