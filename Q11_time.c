#include<stdio.h>
int main(){
    int hour, minute;
    //Ask user to enter HH:MM format 
    printf("Enter time in format (HH:MM: ");
    scanf("%d %d", &hour ,&minute);
    printf("%d Hour amd %d Minute\n", hour, minute);
    return 0;
}
