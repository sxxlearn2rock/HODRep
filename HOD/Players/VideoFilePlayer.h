#pragma once
#include "VideoPlayer.h"

using cv::VideoCapture;

//��Ƶ�ļ������������Բ��ŵ�������Ƶ�ļ�
class VideoFilePlayer : public VideoPlayer
{
public:
	VideoFilePlayer(void);
	~VideoFilePlayer(void);

//	bool readVideo(const string& filepath);
	bool readVideo(const QString& filepath);
	bool getNextFrame(Mat&);
	double getVideoRate();
	void releaseVideo();
private:
	cv::VideoCapture* mVideoCapture;
};

