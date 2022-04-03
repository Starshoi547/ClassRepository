#include "Header.h"
#include "Phone.h"

int main()
{
	Phone phone1, phone2, phone3;

	
	cout << "Input brand: ";
	cin >> phone1.brand;

	cout << "Input model: ";
	cin >> phone1.model;

	cout << "Input price: ";
	cin >> phone1.price;

	cout << "Input length: ";
	cin >> phone1.length;

	cout << "Input width: ";
	cin >> phone1.width;

	cout << "Input height: ";
	cin >> phone1.height;

	cout << "Input color: ";
	cin >> phone1.color;

	cout << "Input number of cores: ";
	cin >> phone1.cores;

	cout << "Input RAM: ";
	cin >> phone1.RAM;

	cout << "Input storage: ";
	cin >> phone1.storage;

	cout << "Input USB type: ";
	cin >> phone1.USB;

	cout << "Input CPU brand: ";
	cin >> phone1.CPUbrand;

	cout << "Input CPU model: ";
	cin >> phone1.CPUmodel;
	


	cout << phone1.getInfo() << endl;
}

