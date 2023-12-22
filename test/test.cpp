#include <iostream>

using namespace std;

class Device
{
public:

	string manufacturers_name;
	string model;
	string name;
	int capacity;
	int count;

	virtual void PrintData()
	{
		cout << "Print info: \n";
	}

	virtual void LoadData()
	{
		cout << "Device has been loaded\n";
	}

	virtual void SaveData()
	{
		cout << "Data has been saved\n";
	}

};

class FlashDrive : public Device
{
public:

	void PrintData()
	{
		cout << "Device: Flash Drive, Manuf. name: SanDisk, Model: 123, Name: Cruzer, Campasity: 256 GB, Count: 1;\n";
	}

	void LoadData()
	{
		cout << "Flash drive has been loaded\n";
	}

	void SaveData()
	{
		cout << "Data ont the flash drive has been saved\n";
	}

};

class HardDrive : public Device
{
public:

	void PrintData()
	{
		cout << "Device: Hard Drive, Manuf. name: Seagate, Model: Backup Plus, Name: External Hard Drive, Campasity: 2000, Count: 1;\n";
	}

	void LoadData()
	{
		cout << "Hard Drive has been loaded\n";
	}

	void SaveData()
	{
		cout << "Data ont the hard drive has been saved\n";
	}

};

class Telephone : public Device
{
public:

	void PrintData()
	{
		cout << "Device: Telephone, Manuf. name: Apple, Model: iPhone 15, Name:iPhone, Campasity: 256 GB, Count: 1;\n";
	}

	void LoadData()
	{
		cout << "Telephone has been loaded\n";
	}

	void SaveData()
	{
		cout << "Data ont the telephone has been saved\n";
	}

};

int main()
{
	int count = 3;

	Device** device = new Device * [count];

	device[0] = new FlashDrive;
	device[1] = new HardDrive;
	device[2] = new Telephone;

	for (int i = 0; i < count; i++)
	{
		device[i]->PrintData();
		device[i]->LoadData();
		device[i]->SaveData();
		cout << "----------------\n";
	}

	for (int i = 0; i < count; i++)
	{
		delete device[i];
	}
	delete[] device;

}