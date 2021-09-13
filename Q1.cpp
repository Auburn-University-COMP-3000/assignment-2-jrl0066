#include<iostream> 

using namespace std;

bool isLeapYear(int year){
    return ((year % 4)&&(year % 100 !=0)) || (year % 400 == 0);
}
int getCenturyValue(int year){
    int cent;
    int centValue;
    cent = year / 100;
	centValue = (3 - (cent % 4)) * 2;
	return centValue;
}
int getYearValue(int year){

    return (year % 100)/4;

}
int getMonthValue(int month, int year){

    switch(month) {
		case 1:
			if (isLeapYear(year))
				return 6;
			else
				return 0;
		case 2:
			if (isLeapYear(year))
				return 2;
			else
				return 3;
		case 3:
			return 3;
		case 4:
			return 6;
		case 5:
			return 1;
		case 6:
			return 4;
		case 7:
			return 6;
		case 8:
			return 2;
		case 9:
			return 5;
		case 10:
			return 0;
		case 11:
			return 3;
		case 12:
			return 5;
    }
}

int main() {

    int month = 0;
    int day = 0;
    int year = 0;
    int sum = 0;
    int dayOfWeek = 0;
    string dayString = "";
    
    cout << "enter the month" <<endl;

    cin >> month;

    while (month < 1 || month >12){
    
    cout << "enter a valid month." << endl;
    cin >> month;

    }

    cout << "enter a day" << endl;
    
    cin >> day;

    if (month == 4 || month == 6 || month == 9 || month == 11){

        while (day < 1 || day > 30){

            cout << "enter a value between 1 and 30: ";
            cin >> day;

        }

    }

    cout << "enter a year: " << endl;

    cin >> year;
    
    sum = day + getMonthValue(month,year) + getYearValue(year)+ getCenturyValue(year);
    dayOfWeek = sum % 7;

    switch (dayOfWeek){

        case 0:
            dayString = "Sunday";
            break;
        
        case 1:
            dayString = "Monday";
            break;
        
        case 2:
            dayString = "Tuesday";
            break;
        
        case 3:
            dayString = "Wednesday";
            break;
        
        case 4:
            dayString = "Thursday";
            break;
        
        case 5:
            dayString = "Friday";
            break;
        
        case 6:
            dayString = "Saturday";
            break;
    }
    cout << month << "/" << day << "/" << year << " is a " << dayString;
    return 0;

}
