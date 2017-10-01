#include <stdio.h>
int main(void){
	int age;
	int days_in_year;
	int days;

	age = 28;
	days_in_year = 365;
	days = age * days_in_year;

	printf("%d\n", days);
	return 0;
}