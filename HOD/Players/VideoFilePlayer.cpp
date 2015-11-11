#include "./Players/VideoFilePlayer.h"

#include <iostream>
#include <QString>
#include <QObject>
#include <QTextCodec>
#include <QtGui/QFileDialog>
#include <qdebug.h>

VideoFilePlayer::VideoFilePlayer(void)
{
	mVideoCapture = new VideoCapture();
}


VideoFilePlayer::~VideoFilePlayer(void)
{
	releaseVideo();
}

//bool VideoFilePlayer::readVideo(const string& fileName)
//{	
//	mVideoCapture.open(fileName);
//	return mVideoCapture.isOpened();
//}

bool VideoFilePlayer::readVideo(const QString& filepath)
{
	string s = QTextCodec::codecForLocale()->fromUnicode(filepath).data();
	mVideoCapture->open(s);
	return mVideoCapture->isOpened();
}

bool VideoFilePlayer::getNextFrame(Mat& frameMat)
{
	if (mVideoCapture->read(frameMat))
	{
		mCurrentFrameNo++;
//		frameMat = mCurrentMat;
		return true;
	}
	return false;
}

double VideoFilePlayer::getVideoRate()
{
	return mVideoCapture->get(CV_CAP_PROP_FPS);
}

void VideoFilePlayer::releaseVideo()
{
	mCurrentFrameNo = 0;
	mVideoCapture->release();
}
