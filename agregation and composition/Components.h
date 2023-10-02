#pragma once
#include <iostream>
using namespace std;
class CPU {
	int clockspeed;
public:
	CPU();
	CPU(int clockspeed);
	int getClockspeed();
};

class HDD {
	float capacity;
public:
	HDD();
	HDD(float capacity);
	float getCapacity();
};

class RAM {
	string type;
public:
	RAM();
	RAM(string type);
	string getType();
};

class GPU
{
	int cores;
public:
	GPU();
	GPU(int cores);
	int getCores();
};

class SoundCard
{
	int channels;
public:
	SoundCard();
	SoundCard(int channels);
	int getChannels();
};

class Battery
{
	float voltage;
public:
	Battery();
	Battery(int voltage);
	float getVoltage();
};

class Display
{
	float size;
public:
	Display();
	Display(int size);
	float getSize();
};

class Keyboard
{
	bool backlight;
public:
	Keyboard();
	Keyboard(bool backlight);
	bool getBacklight();
};

class Mouse
{
	string color;
public:
	Mouse();
	Mouse(string color);
	string getColor();
};

class NetworkCard
{
	string connection;
public:
	NetworkCard();
	NetworkCard(string connection);
	string getConnection();
};

