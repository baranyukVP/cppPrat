#include <iostream>
#include <cstring>
#include <string>
#include <array>
using namespace std;

int main4(void) {
	cout << "Task 1\n";
	const int ArSize = 20;
	char firstName[ArSize];
	char lastName[ArSize];
	char grade[2];
	char age[3];
	cout << "What is your first name? ";
	cin.getline(firstName, ArSize);
	cout << "\nWhat is your last name? ";
	cin.getline(lastName, ArSize);
	cout << "\nWhat letter grade do you deserve? ";
	cin.get(grade, 2);
	cin.get();
	cout << "What is your age? ";
	cin.get(age, 3);
	
	cout << "Name: " << lastName << " " << firstName << endl;
	cout << "Grade: ";
	cout.put(grade[0] + 1);
	cout << endl << "Age: " << age << endl;

	cout << "\nTask 2\n";
	string name = "";
	string dessert = "";
	cout << "Enter your name: \n";
	cin >> name;
	cout << "Enter your favorite dessert: \n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	
	cout << "\nTask 3\n";
	char fName[20];
	char lName[40];
	cout << "Enter your first name: ";
	cin >> fName;
	cout << "\nEnter your last name: ";
	cin >> lName;

	strcat_s(lName, ", ");
	strcat_s(lName, fName);
	cout << "\nHere's the information in à single string: " << lName;
	
	cout << "\nTask 4\n";
	string strFName;
	string strLName;
	cout << "Enter your first name: ";
	cin >> strFName;
	cout << "\nEnter your last name: ";
	cin >> strLName;

	strLName = strLName + ", " + strFName;
	
	cout << "\nHere's the information in à single string: " << strLName;
	
	cout << "\nTask 5\n";
	struct CandyBar {
		string name;
		double weight;
		int energy;
	};

	CandyBar snack = { "Mocha Munch", 2.3, 350 };
	cout << snack.name << endl << snack.weight << endl << snack.energy << endl;

	cout << "\nTask 6\n";
	CandyBar snacks[3] = {
		{ "Mocha Munch", 2.3, 350 },
		{ "Mars", 0.04, 600 },
		{ "Crisps", 0.2, 300 }
	};
	for (int i = 0; i < size(snacks); i++) {
		cout << snacks[i].name << endl << snacks[i].weight << endl << snacks[i].energy << endl;
	}
	
	cout << "\nTask 7\n";
	struct Pizza {
		char producer[40];
		int diameter;
		float weight;
	};

	char p[40];
	int d = 0;
	float w = 0.00;
	cin.get();
	cout << "Enter pizza company: ";
	cin.getline(p, 40);
	cout << "Enter pizza diameter: ";
	cin >> d;
	cin.get();
	cout << "Enter pizza weight: ";
	cin >> w;
	cin.get();

	Pizza pizza = {*p, d, w};
	cout << "Producer: " << pizza.producer << "\nDiameter: " << pizza.diameter << "\nWeight: " << pizza.weight << endl;

	cout << "\nTask 8\n";
	Pizza *dynamicPizza = new Pizza;

	cout << "Enter pizza company: ";
	cin.getline(dynamicPizza->producer, 40);
	cout << "Enter pizza diameter: ";
	cin >> dynamicPizza->diameter;
	cin.get();
	cout << "Enter pizza weight: ";
	cin >> dynamicPizza->weight;
	cin.get();

	cout << "Producer: " << dynamicPizza->producer << "\nDiameter: " << dynamicPizza->diameter << "\nWeight: " << dynamicPizza->weight << endl;

	cout << "\nTask 9\n";
	CandyBar *snackBars = new CandyBar[3];
	for (int i = 0; i < 3; i++) {
		cout << "Enter snack name: ";
		getline(cin, snackBars[i].name);
		cout << "Enter sanck weight: ";
		cin >> snackBars[i].weight;
		cin.get();
		cout << "Enter snack energy: ";
		cin >> snackBars[i].energy;
		cin.get();
	}

	for (int i = 0; i < sizeof snackBars - 1; i++) {
		cout << snackBars[i].name << endl << snackBars[i].weight << endl << snackBars[i].energy << endl;
	}
	
	cout << "\nTask 10\n";
	array<float, 3> results;

	cout << "Enter 3 race result: ";
	for (int i = 0; i < 3; i++) {
		cin >> results[i];
		cin.get();
	}

	float acc = 0;
	for (int i = 0; i < 3; i++) {
		cout << results[i] << ", ";
		acc += results[i];
	}
	cout << "\nThe average is: " << acc / 3 << endl;

	return 0;
};
