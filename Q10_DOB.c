#include<stdio.h>
int main(){
    int day,mounth,year;
    printf("Enter date(DD/MM/YY)");
    scanf("%d%d%d", &day, &mounth,&year);
    printf("Day - %d ,Mounth - %02d , Year - %d", day,mounth,year);
    return 0;
}