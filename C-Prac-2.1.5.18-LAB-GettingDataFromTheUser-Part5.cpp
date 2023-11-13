//Scenario
//Write a program that asks the user for a day, month and year(as separate integer values).Next, it should print the day number of the year for the given day, month and year.
//This task is similar to one of the previous labs, but this time you have to get the year from the user and check if that year is a leap year.You must use this information(whether this is a leap year or not) for computation.Your program must print the same result as the expected output.Test it for several days of different years(check some of them on paper).Assume that the user input is valid.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Code
//
//#include <stdio.h>
//
//int main()
//{
//	/* your code */
//	/* because you may not know the else instruction yet,
//	   this simple formula will help you to check if a year is a leap year */
//	if (year % 400 == 0)
//		puts("Leap");
//	else if (year % 100 == 0)
//		puts("Not leap");
//	else if (year % 4 == 0)
//		puts("Leap");
//	/* your code */
//	return 0;
//}
//
//
//Sample Input
//1
//1
//2016
//
//Sample output
//The day of the year : 1
//
//Sample Input
//31
//1
//2015
//
//Sample output
//The day of the year : 31
//
//Sample Input
//1
//3
//2016
//
//Sample output
//The day of the year : 60
//
//Sample Input
//31
//12
//2015
//
//Sample output
//The day of the year : 365
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {

	int day,month,year;
	int dmonth = 0;
	int leap = 0;
	printf("Enter the days: ");
	scanf_s("%d", &day);
	printf("Enter the month: ");
	scanf_s("%d", &month);
	printf("Enter the year: ");
	scanf_s("%d", &year);
	if (year % 4 == 0) leap = 1;
	if (month > 1) dmonth += 31;
	if (month > 2) dmonth += 28 + leap;
	if (month > 3) dmonth += 31;
	if (month > 4) dmonth += 30;
	if (month > 5) dmonth += 31;
	if (month > 6) dmonth += 30;
	if (month > 7) dmonth += 31;
	if (month > 8) dmonth += 31;
	if (month > 9) dmonth += 30;
	if (month > 10) dmonth += 31;
	if (month > 11) dmonth += 30;
	printf("The day of the year: %d", day + dmonth);
}