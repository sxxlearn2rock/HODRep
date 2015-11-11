#pragma once
#include "./Processors/SegmentStrategy.h"

//����ģʽ
class AdaSegmentStrategy  : public SegmentStrategy
{
public:
	~AdaSegmentStrategy(void) {}
	static AdaSegmentStrategy* getInstance()
	{
		if (mSingleton == NULL)
		{
			mSingleton = new AdaSegmentStrategy();
		}
		return mSingleton;
	}

	void process(Mat& srcImg, Mat& segImg, Mat& desImg, vector<Coordinate>& coordinates, vector<RotatedRect>& rotatedRects);

private:
	AdaSegmentStrategy(void)  {}
	static AdaSegmentStrategy* mSingleton;

	class Cleaner
	{
	public:
		~Cleaner()
		{
			if (AdaSegmentStrategy::mSingleton != NULL)
			{
				delete AdaSegmentStrategy::mSingleton;
			}
		}
	};
	static Cleaner cleaner;

	//����Ϊ˽�к���
	void adaSegment( Mat src, Mat& dst );
};


