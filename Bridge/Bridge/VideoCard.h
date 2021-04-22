#pragma once
#include "Header.h"
class VideoCard : public Component
{
private:
	string _videoMemory;
	string _clockFrequency;
public:
	VideoCard(const string& serialNumber,
		const string& model,
		const string& videoMemory,
		const string& clockFrequency);

	virtual void ShowInfo() const override;

	const string& GetVideoMemory() const;
	const string& ClockFrequency() const;
};

inline VideoCard::VideoCard(const string& serialNumber,
	const string& model, 
	const string& videoMemory, 
	const string& clockFrequency)
{
	_serialNumber = serialNumber;
	_model = model;
	_videoMemory = videoMemory;
	_clockFrequency = clockFrequency;
}


inline void VideoCard::ShowInfo() const
{
	GeneralInfo();
	cout << "Clock frequency: " << ClockFrequency() << endl
		<< "Video memory: " << GetVideoMemory() << endl;
}

inline const string& VideoCard::GetVideoMemory() const
{
	return _videoMemory;
}

inline const string& VideoCard::ClockFrequency() const
{
	return _clockFrequency;
}

