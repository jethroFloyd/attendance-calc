#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int dayOfWeek (int, int, int);

int main() {
	int day, month, year;
	printf("Please enter the date in the following format: DD-MM-YYYY\n");
	scanf("%d-%d-%d", &day, &month, &year);
	int weekDay;
	weekDay = dayOfWeek(day,month,year);
}

int dayOfWeek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}