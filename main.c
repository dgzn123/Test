#include <stdio.h>

void read_and_print_motto(char *buffer, size_t size)
{
    if (buffer == NULL || size == 0) return;
    printf("Enter a motto:");
    if (fgets(buffer, size, stdin) != NULL) {
        printf("Your motto is: %s", buffer);
    }
}

int main(void)
{
    char string[100];
    read_and_print_motto(string, sizeof(string));
    return 0;
}