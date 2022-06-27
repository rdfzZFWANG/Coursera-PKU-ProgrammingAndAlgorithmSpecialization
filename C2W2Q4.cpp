#include<stdio.h>

using namespace std;

bool IsLeapYear(int Year) {
	return (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0);
}

void PrintDate(int Year, int Month, int Day) {
	printf("%d-%02d-%02d\n", Year, Month, Day);
}

int main() {
	int Year, Month, Day;

	const int YearCalender[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	const int LeapYearCalender[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	scanf("%d-%2d-%2d", &Year, &Month, &Day);

	if ((Month == 12 && Day >= 31) || (Month > 12)) {

		PrintDate(Year + 1, 1, 1);

	} else {

		if (IsLeapYear(Year)) {

			if (Day >= LeapYearCalender[Month - 1]) {

				PrintDate(Year, Month + 1, 1);

			} else {

				PrintDate(Year, Month, Day + 1);

			}

		} else {

			if (Day >= YearCalender[Month - 1]) {

				PrintDate(Year, Month + 1, 1);

			} else {

				PrintDate(Year, Month, Day + 1);

			}
		}
	}
	
	return 0;
}