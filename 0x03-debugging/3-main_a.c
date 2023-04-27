#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* @print_remaining_days: function that convert a date
* print_remaining_days - function that convert a date
* @month: refer to month
* @day: refar to the day
* @year: refer to the year
* Return: 0
*/

void print_remaining_days(int month, int day, int year)
{
	int month;
	int day;
	int year;

	month = 02;
	day = 29;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);
	day = convert_day(month, day);
	print_remaining_days(month, day, year);

	return (0);
}
