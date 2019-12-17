#include "Engine.h"

void Engine::setVolume(float volume1)
{
	volume = volume1;
}


void Engine::setPower(int power1)
{
	power = power1;
}


float Engine::getVolume() const
{
	return volume;
}


int Engine::getPower() const
{
	return power;
}
