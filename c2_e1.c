#include <stdio.h>
int main(){
	char* first_name = "Anton";
	char* last_name = "Bruckner";

	printf("%s %s\n", first_name, last_name);
	printf("%s\n", first_name);
	printf("%s\n", last_name);
	printf("%s ", first_name);
	printf("%s\n", last_name);

	return 0;
}