#include <iostream>
#include <Windows.h>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}

int getDaysDifference(int day1, int month1, int year1, int day2, int month2, int year2) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (isLeapYear(year1))
        daysInMonth[1] = 29;

    int totalDays1 = year1 * 365 + day1;

    for (int i = 0; i < month1 - 1; i++) {
        totalDays1 += daysInMonth[i];
    }

    int leapYears1 = year1 / 4 - year1 / 100 + year1 / 400;
    totalDays1 += leapYears1;

    int totalDays2 = year2 * 365 + day2;

    for (int i = 0; i < month2 - 1; i++) {
        totalDays2 += daysInMonth[i];
    }

    int leapYears2 = year2 / 4 - year2 / 100 + year2 / 400;

    return totalDays2 - totalDays1;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int day1, month1, year1;
    int day2, month2, year2;

    cout << "¬вед≥ть першу дату (день, м≥с€ць, р≥к): ";
    cin >> day1 >> month1 >> year1;

    cout << "¬вед≥ть другу дату (день, м≥с€ць, р≥к): ";
    cin >> day2 >> month2 >> year2;

    int difference = getDaysDifference(day1, month1, year1, day2, month2, year2);

    cout << "–≥зниц€ в дн€х м≥ж двома датами: " << difference << endl;

    return 0;
}
