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
	Laptop()
	{
		model = color = " ";
	}
	Laptop(string model, string color, int clockspeed, float capacity, string type, int cores, int channels, float voltage, float size, bool backlight, Mouse* m, NetworkCard* ncard):cpu(clockspeed), hdd(capacity), ram(type), gpu(cores), soundcard(channels), battery(voltage), display(size), keyboard(backlight), mouse(m), networkcard(ncard)
	{
		this->model = model;
		this->color = color;
	}
	void print()
	{
		cout << "Model: " << model << endl;
		cout << "Color: " << color << endl;
		cout << "CPU clockspeed: " << cpu.getClockspeed() << endl;
		cout << "HDD capacity: " << hdd.getCapacity() << endl;
		cout << "RAM type: " << ram.getType() << endl;
		cout << "GPU cores: " << gpu.getCores() << endl;
		cout << "Soundcard channels: " << soundcard.getChannels() << endl;
		cout << "Battery voltage: " << battery.getVoltage() << endl;
		cout << "Display size: " << display.getSize() << endl;
		cout << "Keyboard has backlight: " << boolalpha << keyboard.getBacklight() << endl;
		cout << "Mouse color: " << mouse->getColor() << endl;
		cout << "Network card type connection: " << networkcard->getConnection() << endl;
	}
};
int main()
{
	Mouse mouse("white");
	NetworkCard nic("ethernet");
	Laptop laptop("ASUS", "black", 2, 500, "DDR", 1000, 2, 14.2, 13.3, true, &mouse, &nic);
	laptop.print();
}
