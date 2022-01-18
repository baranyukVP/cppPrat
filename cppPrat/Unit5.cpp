#include <iostream>
#include <cmath>
#include <array>
using namespace std;
void Task1(void);
void Task2(void);
void Task3(void);
void Task4(void);
void Task5(void);
void Task6(void);
void Task7(void);
void Task8(void);
void Task9(void);
void Task10(void);

const int ArrSize = 100;

const int monthsInYear = 12;
const string months[monthsInYear] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

int main5(void) {
	Task10();

	return 0;
};

void Task1() {
	cout << "Task 1\n";
	int start = 0, end = 0, result = 0;
	cout << "Enter two numbers: ";
	cin >> start;
	cin.get();
	cin >> end;
	cin.get();

	for (int i = start; i <= end; i++) {
		result += i;
	};

	cout << "\nSum is: " << result << endl;
};

void Task2() {
	cout << "\nTask 2\n";
	array<long double, ArrSize> factorials;
	factorials[1] = factorials[0] = 1;
	for (int i = 2; i < ArrSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArrSize; i++)
		cout << i << "! =" << factorials[i] << endl;
};

void Task3() {
	cout << "\nTask 3\n";

	int number = 0, sum = 0;
	do {
		cout << "Enter number: ";
		cin >> number;
		cin.get();
		sum += number;
		cout << "\nSum is: " << sum;
	} while (number != 0);
};

void Task4() {
	cout << "\nTask 4\n";
	int dufna = 100;
	double kleo = 100.00, kleoPercent = 0.05;
	int  dufnaPercent = 10, years = 0;

	do {
		years++;
		dufna += dufnaPercent;
		kleo = kleo + kleo * kleoPercent;
		cout << dufna << " " << kleo << endl;
	} while (dufna > kleo);

	cout << "Kleo wins in " << years << " years\n";
	cout << "Dufna's balance: " << dufna << "$\n";
	cout << "Kleo's balance: " << kleo << "$\n";
};

void Task5() {
	cout << "\nTask 5\n";
	int sales[monthsInYear];
	int result = 0;

	for (int i = 0; i < monthsInYear; i++) {
		cout << "Enter sales for " << months[i] << ": \n";
		cin >> sales[i];
		cin.get();
		result += sales[i];
	}

	cout << "Result of the year: " << result << endl;
};

void Task6() {
	cout << "\nTask 6\n";
	const int years = 3;
	int sales[years][monthsInYear];
	int results[years] = { 0, 0 , 0 };
	int result = 0;

	for (int j = 0; j < years; j++) {
		for (int i = 0; i < monthsInYear; i++) {
			cout << "Enter sales for " << months[i] << ": \n";
			cin >> sales[j][i];
			cin.get();
			results[j] += sales[j][i];
			result += sales[j][i];
		}
		cout << "Result of the year: " << results[j] << endl;
	}

	cout << "Total result: " << result << endl;
};

void Task7() {
	cout << "\nTask 7\n";
	struct car
	{
		string producer;
		int createYear;
	};
	int count = 0;
	cout << "How much automobiles in your collection?";
	cin >> count;
	cin.get();

	car *cars = new car[count];

	for (int i = 0; i < count; i++) {
		cout << "\nEnter producer: ";
		cin >> cars[i].producer;
		cin.get();
		cout << "\nEnter creation year: ";
		cin >> cars[i].createYear;
		cin.get();
	}

	cout << "Here's your collection:\n";
	for (int i = 0; i < count; i++) {
		cout << "\n#" << i + 1 << " " << cars[i].createYear << " " << cars[i].producer;
	}
};

void Task8() {
	cout << "\nTask 8\n";
	int counter = 0;
	char word[255] = "";
	while (strcmp(word, "done")) {
		counter++;
		cin >> word;
	}
	counter--;

	cout << counter;
};

void Task9() {
	cout << "\nTask 9\n";
	int counter = 0;
	string word = "";
	while (word != "done") {
		counter++;
		cin >> word;
	}
	counter--;

	cout << counter;
};

void Task10() {
	cout << "\nTask 10\n";
	int count = 0;
	cout << "Enter the number of lines: ";
	cin >> count;
	cout << endl;

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count - i - 1; j++) {
			cout << ".";
		}
		for (int j = count - i - 1; j < count; j++) {
			cout << "*";
		}
		cout << endl;
	}
};