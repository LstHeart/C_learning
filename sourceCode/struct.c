#include<stdio.h>

struct date{
    int month;
    int day;
    int year;
};

int main(){

    struct date today;
    today.month=03;
    today.day=12;
    today.year=2019;

    printf("Today's date is %i-%i-%i.\n",today.year,today.month,today.day);
    return 0;
}
