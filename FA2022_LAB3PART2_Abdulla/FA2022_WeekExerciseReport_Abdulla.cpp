//FA2022_WeekExcerciseReport_Abdulla.cpp
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	string name, startDate, endDate;
	int minutes1 = 0, minutes2 = 0, minutes3 = 0, minutes4 = 0, minutes5 = 0, minutes6 = 0, minutes7 = 0, totalTime;
	float miles1 = 0, miles2 = 0, miles3 = 0, miles4 = 0, miles5 = 0, miles6 = 0, miles7 = 0;
	float averageTime, averageMiles, totalMiles;

	//Read user's full name
	cout << "Please enter your full name: ";
	getline(cin, name);
	cout << endl;

	// Read start date
	cout << "And enter the starting date in the format MM/DD/YYYY: ";
	cin >> startDate;
	cout << endl;

	// Read end date
	cout << "Next, type in the ending date in the format MM/DD/YYYY: ";
	cin >> endDate;
	cout << endl;

	// Read in exercise statistics
	cout << "Please enter how many minutes you exercised each day of the week (7 whole numbers separated by space): ";
	cin >> minutes1;
	cin >> minutes2;
	cin >> minutes3;
	cin >> minutes4;
	cin >> minutes5;
	cin >> minutes6;
	cin >> minutes7;

	cout << endl;

	cin.ignore(100, '\n');

	cout << "Now, enter how many miles you walked each day of the week (7 decimal numbers separated by space): ";
	cin >> miles1;
	cin >> miles2;
	cin >> miles3;
	cin >> miles4;
	cin >> miles5;
	cin >> miles6;
	cin >> miles7;
	cout << endl;

	totalTime = minutes1 + minutes2 + minutes3 + minutes4 + minutes5 + minutes6 + minutes7;
	totalMiles = miles1 + miles2 + miles3 + miles4 + miles5 + miles6 + miles7;

	averageTime = totalTime / 7;
	averageMiles = totalMiles / 7;

	//Output stage
	cout << fixed << setprecision(2);
	cout << "File name: FA2022_WeekExcerciseReport_Abdulla.cpp" << endl;
	cout << "Name of the person using the program: " << name << endl;
	cout << "Report of week from: " << startDate << " to " << endDate << endl;

	cout << "---------------------------------------------------------------------------------------" << endl;
	cout << setw(22) << "MON" << setw(8) << "TUE" << setw(8) << "WED" << setw(8) << "THU" << setw(8) << "FRI" << setw(8)
		<< "SAT" << setw(8) << "SUN" << setw(8) << "Total" << setw(8) << "Average"; 
	cout << endl;

	cout << "---------------------------------------------------------------------------------------" << endl;
	cout << "Time (minutes):    ";
	cout << minutes1 << setw(8) << minutes2 << setw(8) << minutes3 << setw(8) << minutes4 << setw(8)
		<< minutes5 << setw(8) << minutes6 << setw(8) << minutes7 << setw(8) << totalTime << setw(8) << averageTime;
	cout << endl;

	cout << "Distance (miles):  ";
	cout << miles1 << setw(8) << miles2 << setw(8) << miles3 << setw(8) << miles4 << setw(8)
		<< miles5 << setw(8) << miles6 << setw(8) << miles7 << setw(8) << totalMiles << setw(8) << averageMiles;
	cout << endl;

	system("pause");
	return 0;
}