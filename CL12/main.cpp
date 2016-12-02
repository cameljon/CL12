#include <iostream>
#include <string>

using namespace std;

void Exercise1()
{
	int n = 20;
	float f = 9.99;
	string s = "Bob";

	cout << &n << " = " << n << endl;
	cout << &f << " = " << f << endl;
	cout << &s << " = " << s << endl;
}

void Exercise2()
{
	string a[4] = { "JCCC", "UMKC", "KU", "MS&T" };

	cout << "Array address: " << a << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "Item " << i << " address: " << &a[i];
		cout << "\tValue: " << a[i] << endl;
	}
}

void Exercise3()
{
	int n = 20;
	float f = 9.99;
	string s = "Bob";

	int* ptrN = &n;
	float* ptrF = &f;
	string* ptrS = &s;

	cout << ptrN << " = " << *ptrN << endl;
	cout << ptrF << " = " << *ptrF << endl;
	cout << ptrS << " = " << *ptrS << endl;
}

void Exercise4()
{
	char choice;
	cout << "[i]nt, [f]loat, [b]oolean, or [d]ouble? ";
	cin >> choice;
	if (choice == 'i')
	{
		int i = 0;
		int* ptrI = &i;
		cout << "Integer size: " << sizeof(i) << " , address: " << ptrI << endl;
	}
	else if (choice == 'f')
	{
		float i = 0;
		float* ptrI = &i;
		cout << "Float size: " << sizeof(i) << " , address: " << ptrI << endl;
	}
	else if (choice == 'b')
	{
		bool i = false;
		bool* ptrI = &i;
		cout << "Boolean size: " << sizeof(i) << " , address: " << ptrI << endl;
	}
	else if (choice == 'd')
	{
		double i = 0;
		double* ptrI = &i;
		cout << "Double size: " << sizeof(i) << " , address: " << ptrI << endl;
	}
}

void Exercise5()
{
	char choice;
	float priceHamburger = 3.99;
	float priceFries = 2.99;
	float priceSalad = 1.99;
	float* ptrPrice;
	float taxAmt;

	cout << "[h]amburger, [f]ries, or [s]alad? ";
	cin >> choice;

	if (choice == 'h')
	{
		ptrPrice = &priceHamburger;
		cout << "Original price: " << *ptrPrice << endl;
		taxAmt = *ptrPrice * 0.065;
		cout << "With tax price: " << *ptrPrice + taxAmt << endl;
	}
	else if (choice == 'f')
	{
		ptrPrice = &priceFries;
		cout << "Original price: " << *ptrPrice << endl;
		taxAmt = *ptrPrice * 0.065;
		cout << "With tax price: " << *ptrPrice + taxAmt << endl;
	}
	else if (choice == 's')
	{
		ptrPrice = &priceSalad;
		cout << "Original price: " << *ptrPrice << endl;
		taxAmt = *ptrPrice * 0.065;
		cout << "With tax price: " << *ptrPrice + taxAmt << endl;
	}
}

void Exercise6()
{
	string students[3] = { "Joe", "Jane", "Jill" };
	string* ptrStudents;
	int choice;
	string name;

	cout << "Enter 0, 1, or 2: ";
	cin >> choice;
	ptrStudents = &students[choice];

	cout << "New name: ";
	cin >> name;
	*ptrStudents = name;

	for (int i = 0; i < 3; i++)
	{
		cout << "student " << i << " = " << students[i] << endl;
	}
}

int main()
{
	Exercise6();
	return 0;
}