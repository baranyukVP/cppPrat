#include <iostream>
#include <cctype>
using namespace std;
void Task6_1(void);
void Task6_2(void);
void Task6_3(void);
void Task6_4(void);
void Task6_5(void);
void Task6_6(void);
void Task6_7(void);
void Task6_8(void);
void Task6_9(void);
void Task6_10(void);

int main(void) {
	Task6_1();

	return 0;
};

void Task6_1() {
	cout << "Task 1\n";
	char ch;
	string str = "";

	do {
		cin >> ch;
		if (isdigit(ch)) {
			continue;
		}
		if (islower(ch)) {
			str += toupper(ch);
		}
		else if (isupper(ch)) {
			str += tolower(ch);
		}
		else {
			str += ch;
		}
	} while (ch != '@');

	cout << str;
};

void Task6_2() {
	cout << "\nTask 2\n";
};

void Task6_3() {
	cout << "\nTask 3\n";

};

void Task6_4() {
	cout << "\nTask 4\n";
};

void Task6_5() {
	cout << "\nTask 5\n";
};

void Task6_6() {
	cout << "\nTask 6\n";
};

void Task6_7() {
	cout << "\nTask 7\n";
};

void Task6_8() {
	cout << "\nTask 8\n";
};

void Task6_9() {
	cout << "\nTask 9\n";
};

void Task6_10() {
	cout << "\nTask 10\n";
};