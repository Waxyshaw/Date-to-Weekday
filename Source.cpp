// File: Days_of_the_Week.cpp
// Author: Waxyshaw <brian.m.shaw@outlook.com>
//
// This program is meant to identify the day of the week of any date from Year 1900-2100

#include <iostream>

using namespace std;

int main() {

// Variables for user input.
	int month;
	int day;
	int year;

// Variables for Math
	int remYear;
	int preDays;
	int monDays;
	int weekDays;

// Variables for Months
	int Jan = 31;
	int Feb = 28;
	int Mar = 31;
	int Apr = 30;
	int May = 31;
	int Jun = 30;
	int Jul = 31;
	int Aug = 31;
	int Sep = 30;
	int Oct = 31;
	int Nov = 30;
	int Dec = 31;

// Ask for user input in <month>, <day> <year> format.

// Month input with failure case.
	cout << "Input date between 1900 and 2100 AD (eg. 01/01/1900): ";
	cin >> month;
	while ((month < 1) || (month > 12)) {
		cout << "\nHow many months do you think are in a year? Try again, buddy.\n\n";
		cout << "Input date between 1900 and 2100 AD (eg. 01/01/1900): ";
		cin >> month;
	}

// Day input with failure case.
	cout << month << "/ ";
	cin >> day;
	while ((day < 1) || (day > 31)) {
		cout << "\nPlease check your local calender for a proper date. Remember, \"Thirty days hath September...\"\n\n";
		cout << "Input date between 1900 and 2100 AD (eg. 01/01/1900) : " << month << "/ ";
		cin >> day;
	}

// Year input with failure case.
	cout << month << "/ " << day << "/ ";
	cin >> year;
	while ((year < 1900) || (year > 2100)) {
		cout << "\nI don't like repeating myself, but I will for your sake.\n\n";
		cout << "Input date between 1900 and 2100 AD (eg. 01/01/1900) : " << month << "/" << day << "/ ";
		cin >> year;
	}

// Math
	remYear = year - 1900; // Simplifying the year.
	preDays = remYear * 365; // Getting total days from previous years.

// Accounting for Leap Years
		if ((month < 3) && (year % 4 == 0)) {
			cout << "leap year" << endl;
			preDays - 1;
		}
		else {
			cout << preDays << " days before date." << endl;
		}

// More Math. Adding Days together to get number of days since 01/01/1901
		switch (month){
		case 1:
			monDays = Jan;
			break;
		case 2:
			monDays = Jan + Feb;
			break;
		case 3:
			monDays = Jan + Feb + Mar;
			break;
		case 4:
			monDays = Jan + Feb + Mar + Apr;
			break;
		case 5:
			monDays = Jan + Feb + Mar + Apr + May;
			break;
		case 6:
			monDays = Jan + Feb + Mar + Apr + May + Jun;
			break;
		case 7:
			monDays = Jan + Feb + Mar + Apr + May + Jun + Jul;
			break;
		case 8:
			monDays = Jan + Feb + Mar + Apr + May + Jun + Jul + Aug;
			break;
		case 9:
			monDays = Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep;
			break;
		case 10:
			monDays = Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct;
			break;
		case 11:
			monDays = Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct + Nov;
			break;
		case 12:
			monDays = Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct + Nov + Dec;
			break;
		default:
			cout << "Something is wrong with this code. Contact the developer and tell him to get his butt in gear and fix it." << endl;
	}

// Almost there!
		weekDays = (monDays + preDays) % 7;
		switch (weekDays) {
		case 1:
			cout << "The date: " << month << "/" << day << "/" << year << " was a Sunday" << endl;
			break;
		case 2:
			cout << "The date: " << month << "/" << day << "/" << year << " was a Monday" << endl;
			break;
		case 3:
			cout << "The date: " << month << "/" << day << "/" << year << " was a Tuesday" << endl;
			break;
		case 4:
			cout << "The date: " << month << "/" << day << "/" << year << " was a Wednesday" << endl;
			break;
		case 5:
			cout << "The date: " << month << "/" << day << "/" << year << " was a Thursday" << endl;
			break;
		case 6:
			cout << "The date: " << month << "/" << day << "/" << year << " was a Friday" << endl;
			break;
		case 7:
			cout << "The date: " << month << "/" << day << "/" << year << " was a Saturday" << endl;
			break;
		default:
			cout << "The developer's weekDays variable is wrong. Tell him to fix this NOW." << endl;
		}

// Exit command
	char exit;
	cout << "Type any character and \"Enter\" to quit.\n";
	cin >> exit;
	return 0;
}

































