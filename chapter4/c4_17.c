/* skiptwo.c -- skips over first two integers of input */
#include <stdio.h>
int main(void){
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);
    printf("%zd\n", sizeof(char*));
    printf("%zd\n", sizeof(int));
    printf("%zd\n", sizeof(char));
    return 0;
}