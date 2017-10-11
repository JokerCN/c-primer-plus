/* two_func.c -- two functions in a program */
#include <stdio.h>
void butler(void); /* IOS/ANSI function prototype */
int main(void){
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes, Bring me some tea and writeable CD-ROMS.\n");
	return 0;
}

void butler(void){
	printf("You rang, sir?\n");
}