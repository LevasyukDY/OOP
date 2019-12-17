#include "Engine.h"

void Engine::setVolume(int volume1)
{
	volume = volume1;
}


void Engine::setPower(int power1)
{
	power = power1;
}


int Engine::getVolume() const
{
	return volume;
}


int Engine::getPower() const
{
	return power;
}
