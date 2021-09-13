#include <iostream>
#include <iomanip>

using namespace std;

double convertToMPH(int min, int sec);
double convertToMPH(double kph);

int main() {
	int min = 0,
	    sec = 0;
	double kph = 0.0;

    cout << "Enter the minutes of pace per mile: ";
    cin >> min;
    
    if (min < 0){

        cout << "\nEnter a positive time: ";
        cin >> min;

    }

    cout << "\nEnter the seconds of pace per mile: ";
    cin >> sec;

    if (sec < 0 || sec > 59){

        cout << "\nEnter a valid time in seconds between 1 and 59: ";
        cin >> sec;

    }
    cout << "\nEnter the speed of pace in kph: ";
    cin >> kph;
    if (kph < 0){

        cout << "\nEnter a positive pace: ";
        cin >> kph;

    }

    cout << "\n" << min << " minutes and " << sec << " seconds is " << convertToMPH(min,sec) << " MPH.";
    cout << "\n" << kph << "kph is " << convertToMPH(kph) << "MPH.";

	return 0;
}

double convertToMPH(int min, int sec) {
	// There are 3600 seconds in an hour
	return (3600.0 / ((min * 60) + sec));
}

double convertToMPH(double kph) {
	return (kph / 1.61);
}