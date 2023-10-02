#pragma once
#include <iostream>
#include "Components.h"
using namespace std;
class Laptop
{
	string model, color;
	CPU cpu;
	HDD hdd;
	RAM ram;
	GPU gpu;
	SoundCard soundcard;
	Battery battery;
	Display display;
	Keyboard keyboard;
	Mouse* mouse;
	NetworkCard* networkcard;
public:
	Laptop();
	Laptop(string model,string color, int clockspeed, float capacity, string type, int cores, int channels, int voltage, int size, bool backlight,Mouse* mouse,NetworkCard* networkcard):model(model),color(color),cpu(clockspeed),
};

