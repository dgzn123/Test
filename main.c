#include <stdio.h>
int main(void)
{
    char string[100];
    printf("Enter a motto:");
    fgets(string, sizeof(string), stdin);
    printf("Your motto is: %s", string);
    return 0;
}