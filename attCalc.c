#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Courses {
	int courseCode;
	int classesHeld;
	int classesAttended;
	int days[3];
} Course;

int dayOfWeek (int, int, int);

int main() {
	int day, month, year;
	printf("Please enter the date in the following format: DD-MM-YYYY\n");
	scanf("%d-%d-%d", &day, &month, &year);
	int weekDay;
	weekDay = dayOfWeek(day,month,year);

	Course course[5];
	
	course[0].courseCode = 301;
	course[0].days[0] = 2;
	course[0].days[1] = 3;
	course[0].days[2] = 5;
	course[1].courseCode = 331;
	course[1].days[0] = 1;
	course[1].days[1] = 2;
	course[1].days[2] = 5;
	course[2].courseCode = 341;
	course[2].days[0] = 1;
	course[2].days[1] = 3;
	course[2].days[2] = 4;
	course[3].courseCode = 343;
	course[3].days[0] = 1;
	course[3].days[1] = 2;
	course[3].days[2] = 4;
	course[4].courseCode = 344;
	course[4].days[0] = 3;
	course[4].days[1] = 4;
	course[4].days[2] = 5;


	printf("%d\n", course[0].days[0]);

}

int dayOfWeek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}