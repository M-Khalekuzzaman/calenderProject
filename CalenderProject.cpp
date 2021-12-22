#include<iostream>
#include<conio.h>
using namespace std;
int getFirstDayOfTheYear(int year)
{
    int day = (year * 365 + ((year - 1) /4) - ((year - 1) / 100) + ((year - 1) /400)) %7;
    return day;
}
int main()
{
    char *month[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31} ;
    int totalDays,weekDays = 0,spaceCounter = 0;
    int year;
    printf("Enter your favorite year : ");
    scanf("%d",&year);
    printf("\n************ Welcome to %d ***************\n",year);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        daysInMonth[1] = 29;
    }
    weekDays = getFirstDayOfTheYear(year);
    for(int i = 0 ; i<12 ; i++)
    {
        printf("\n  ---------------- %s -------------------\n",month[i]);
        printf("\n    Sun   Mon   Tue   Wed   Thu   Fri   Sat   \n");
        for(spaceCounter = 1 ; spaceCounter <= weekDays ; spaceCounter++)
        {
            printf("      ");
        }
        totalDays = daysInMonth[i];
        for(int j = 1 ; j<=totalDays ; j++)
        {
            printf("%6d",j);
            weekDays ++;
            if(weekDays > 6)
            {
                weekDays = 0;
                printf("\n");
            }

        }

    }

    getch();
}
