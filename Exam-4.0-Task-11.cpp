/////////////////////////////////////
// Task 11.	 Convert Speed Units
/////////////////////////////////////


//This is stuped program for 1 hour speed low from time equal 59' 59''

#include <iostream>
#include <iomanip>
using namespace std;

const float MILE = 1.603f;

int main() {
	int meters;
	int hour;
	int minutes;
	int seconds;

	cout << "Distance: ";
	cin >> meters;
	cout << "Hour: ";
	cin >> hour;
	cout << "Minutes: ";
	cin >> minutes;
	cout << "Seconds: ";
	cin >> seconds;

	cout << "MPS  = ";
	int timeSeconds = ((hour * 60) + minutes) * 60 + seconds;

	if (timeSeconds == 0) {
		cout << "Error: not Diveade to NULL";
	}
	else {
		cout << fixed << setprecision(3) << (float)meters / timeSeconds << " MPS" << endl;
	}

	cout << "KMP  = ";
	float kilometers = (float)meters / 1000;
	float timeHour = (float)timeSeconds / 3600;

	if (timeHour == 0) {
		cout << "Error: not divide by zero!";
		system("pause");
		return 0;
	}
	else {
		cout << fixed << setprecision(3) << kilometers / timeHour << " KPH" << endl;
	}

	cout << "MPH  = ";
	float miles = kilometers * MILE;

	if (timeHour == 0) {
		cout << "Error: not divided by zero!";
		system("pause");
		return 0;
	}
	else {
		cout << fixed << setprecision(3) << miles / timeHour << " MPH" << endl;
	}

	system("pause");
	return 0;
}
