#pragma once
class Engine {

private:

	float volume;
	int power;

public:

	void setVolume(float volume1);
	void setPower(int power1);
	float getVolume() const;
	int getPower() const;

};

