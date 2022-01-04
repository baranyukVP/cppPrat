#include <iostream>
#include <string>
using namespace std;
void coutln(string);
void farlongToYard(int);
void mices(void);
void run(void);
double celsiusToFarenheit(int);
double lightYearsToAstronomicalUnits(double);
void coutTime(int, int);

int main(void) {
	coutln("Task 1");
	coutln("Vlad Baranyuk");
	coutln("Moscow");

	int farlong;
	coutln("Task 2");
	coutln("Type farlongs");
	cin >> farlong;
	farlongToYard(farlong);

	coutln("Task 3");
	mices();
	mices();
	run();
	run();

	coutln("Task 4");
	int age;
	cout << "Enter your age: ";
	cin >> age;
	coutln("");
	cout << "Your age in months is " << age * 12 << ".";

	coutln("Task 5");
	cout << "Please enter a Celsius value: ";
	int celsius;
	cin >> celsius;
	cout << celsius << " degrees Celsius is " << celsiusToFarenheit(celsius) << " degrees Fahrenheit." << endl;

	coutln("Task 6");
	cout << "Enter the number of light years: ";
	double lightYears;
	cin >> lightYears;
	cout << lightYears << " light years = " << lightYearsToAstronomicalUnits(lightYears) << " astronomical units." << endl;

	coutln("Task 7");
	cout << "Enter the number of hours: ";
	int hours;
	cin >> hours;
	cout << "Enter the number of minutes: ";
	int minutes;
	cin >> minutes;
	coutTime(hours, minutes);
};

void coutln(string str) {
	cout << str << endl;
};
void coutln(int str) {
	cout << str << endl;
};
void coutln(double str) {
	cout << str << endl;
};

void farlongToYard(int f) {
	cout << "It is " << f * 220 << " yards" << endl;
};

void mices(void) {
	coutln("Three blind mice");
};

void run(void) {
	coutln("See how they run");
};

double celsiusToFarenheit(int c) {
	return 1.8 * c + 32;
};

double lightYearsToAstronomicalUnits(double ly) {
	return ly * 63240;
};

void coutTime(int h, int m) {
	int hours = h;
	string minutes = to_string(m);
	if (m >= 60) {
		hours = h + static_cast<int>(m / 60);
		minutes = to_string(m % 60);
	}
	if (minutes.length() < 2) {
		minutes = "0" + minutes;
	}
	cout << "Time: " << hours << ":" << minutes;
};
