#include "Header.h"


//default constructr
class Phone  {
public:
	string brand;
	string model;
	double price;
	int length;
	int width;
	int height;
	string color;
	int cores;
	int cameras;
	int RAM;
	int storage;
	string USB;
	string CPUbrand;
	int CPUmodel;

	//конструктор - похер
	Phone() {
		cout << "default constructor" << endl;
	};

	Phone(double initPrice) {
		price = initPrice;
		cout << "constructor #2" << price << endl;
	}

	Phone(string iBrand, string iModel, double iPrice, int iLength,
		int iWidth, int iHeight, string iColor, int iCores, int iCameras,
		int iRAM, int iStorage, string iUSB, string iCPUbrand, int iCPUmodel) {

		brand = iBrand;
		model = iModel;
		price = iPrice;
		length = iLength;
		width = iWidth;
		height = iHeight;
		color = iColor;
		cores = iCores;
		cameras = iCameras;
		RAM = iRAM;
		storage = iStorage;
		USB = iUSB;
		CPUbrand = iCPUbrand;
		CPUmodel = iCPUmodel;


		cout << "default constructor #3" << endl;
	};

	//Деструктор должен быть только один!
	~Phone() {
		cout << "Destructor" << endl;
	};



	string getInfo() {
		return "Phone:\nname = " + brand
			+ "\nmodel = " + model
			+ "\nprice = " + to_string(price)
			+ "\nlength = " + to_string(length)
			+ "\nwidth = " + to_string(width)
			+ "\nheight = " + to_string(height)
			+ "\ncolor = " + color
			+ "\nCPU = " + CPUbrand + " " + to_string(CPUmodel)
			+ "\ncores = " + to_string(cores)
			+ "\ncameras = " + to_string(cameras)
			+ "\nRAM = " + to_string(RAM)
			+ "\nstorage = " + to_string(storage)
			+ "\nUSB = " + USB;


		
		
	}

private:
	;

protected:
	;
};

