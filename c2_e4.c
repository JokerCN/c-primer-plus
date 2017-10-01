#include <stdio.h>
void print_normal_line(void);
void print_last_line(void);
int main(void){
	
	print_normal_line();
	print_normal_line();
	print_normal_line();
	print_last_line();

	return 0;
}
void print_normal_line(void){
	char *str;
	str = "For he's a jolly good fellow!";
	printf("%s\n", str);
}
void print_last_line(void){
	char *str;
	str = "Which nobody can deny!";
	printf("%s\n", str);
}