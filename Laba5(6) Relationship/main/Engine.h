#pragma once
class Engine {

private:

	int volume;
	int power;

public:

	void setVolume(int volume1);
	void setPower(int power1);
	int getVolume() const;
	int getPower() const;

};

