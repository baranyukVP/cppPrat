#include <iostream>
#include <cmath>
using namespace std;

const char inchesInFoot = 12;
const float metersInInch = 39.37;
const float poundsInKilogram = 2.2;
const char minutesInDegree = 60;
const char secondsInMinute = 60;
const char minutesInHour = 60;
const char hoursInDay = 24;
const float milesIn100Kilometers = 62.14;
const float litersInGallon = 3.875;

int main3(void) {
	cout << "Task 1\n";
	int height;
	cout << "Enter your height (inches):__\b\b";
	cin >> height;
	cout << "\nYour height is " << height / inchesInFoot << "ft and " << height % inchesInFoot << "inches\n";

	cout << "\nTask 2\n";
	int heightFt, heightInch, weight;
	cout << "Enter your height (foots):__\b\b";
	cin >> heightFt;
	cout << "\nEnter your height (inches):__\b\b";
	cin >> heightInch;
	cout << "\nEnter your weight (pounds):__\b\b";
	cin >> weight;
	cout << "\nYour BMI is: " << int(weight * poundsInKilogram / pow((heightFt * inchesInFoot + heightInch) / metersInInch, 2)) << endl;

	cout << "\nTask 3\n";
	float latitudeDegrees, latitudeMinutes, latitudeSeconds;
	cout << "Enter à latitude in degrees , minutes, and seconds:\nFirst, enter the degrees: __\b\b";
	cin >> latitudeDegrees;
	cout << "\nNext, enter the minutes: __\b\b";
	cin >> latitudeMinutes;
	cout << "\nFinally, enter the seconds: __\b\b";
	cin >> latitudeSeconds;
	cout << latitudeDegrees << " degrees, "
		<< latitudeMinutes << " minutes, "
		<< latitudeSeconds << " seconds = "
		<< (latitudeSeconds / secondsInMinute + latitudeMinutes) / minutesInDegree + latitudeDegrees << " degrees";

	cout << "\nTask 4\n";
	long long seconds;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	cout << seconds << " seconds = "
		<< seconds / hoursInDay / minutesInHour / secondsInMinute << " days, "
		<< seconds / minutesInHour / secondsInMinute % hoursInDay << " hours, "
		<< seconds / secondsInMinute % minutesInHour << " minutes, "
		<< seconds % secondsInMinute <<" seconds";

	cout << "\nTask 5\n";
	long long worldPopulation, usaPopulation;
	cout << "Enter the world 's population: ";
	cin >> worldPopulation;
	cout << "Enter the population of the US: ";
	cin >> usaPopulation;
	cout << "The population of the US is " << float(usaPopulation) / worldPopulation * 100 << "% of the world population.";

	cout << "\nTask 6\n";
	int miles, gallons;
	cout << "Enter miles: ";
	cin >> miles;
	cout << "Enter gallons: ";
	cin >> gallons;
	cout << "Miles per gallon: " << float(miles) / gallons * 100;

	cout << "\nTask 7\n";
	double litresPer100Kilometers;
	cout << "Enter liters per 100km: ";
	cin >> litresPer100Kilometers;
	cout << "Miles per gallon: " << milesIn100Kilometers / litresPer100Kilometers * litersInGallon;

	return 0;
};
