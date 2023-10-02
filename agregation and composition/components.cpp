#include <iostream>
#include "Components.h"
CPU::CPU()
{
	clockspeed = 0;
}
CPU::CPU(int clockspeed)
{
	this->clockspeed = clockspeed;
}
int CPU:: getClockspeed()
{
	return clockspeed;
}
HDD::HDD()
{
	capacity = 0;
}
HDD::HDD(float capacity)
{
	this->capacity = capacity;
}
float HDD:: getCapacity()
{
	return capacity;
}

RAM::RAM()
{
	type = " ";
}
RAM::RAM(string type)
{
	this->type = type;
}
string RAM:: getType()
{
	return type;
}
GPU::GPU()
{
	cores = 0;
}
GPU::GPU(int cores)
{
	this->cores = cores;
}
int GPU:: getCores()
{
	return cores;
}

SoundCard::SoundCard()
{
	channels = 0;
}
SoundCard::SoundCard(int channels)
{
	this->channels = channels;
}
int SoundCard:: getChannels()
{
	return channels;
}
Battery::Battery()
{
	voltage = 0;
}
Battery::Battery(int voltage)
{
	this->voltage = voltage;
}
float Battery:: getVoltage()
{
	return voltage;
}
Display::Display()
{
	size = 0;
}
Display::Display(int size)
{
	this->size = size;
}
float Display:: getSize()
{
	return size;
}
Keyboard::Keyboard()
{
	backlight = false;
}
Keyboard::Keyboard (bool backlight)
{
	this->backlight = backlight;
}
bool Keyboard:: getBacklight()
{
	return backlight;
}
Mouse::Mouse()
{
	color = " ";
}
Mouse::Mouse(string color)
{
	this->color = color;
}
string Mouse:: getColor()
{
	return color;
}
NetworkCard::NetworkCard()
{
	connection = " ";
}
NetworkCard::NetworkCard (string connection)
{
	this->connection = connection;
}
string NetworkCard:: getConnection()
{
	return connection;
}

