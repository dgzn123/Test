#include <stdio.h>
#include <stdbool.h>
void clear_input_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
void read_and_print_motto(char *buffer, size_t size)
{
    if (buffer == NULL || size == 0) return;
    printf("Enter a motto:");
    if (fgets(buffer, size, stdin) != NULL) {
        printf("Your motto is: %s", buffer);
    }
}
bool should_continue(void)
{
    char response;
    printf("Do you want to continue? (y/n): ");
    scanf(" %c", &response);
    clear_input_buffer();
    return (response == 'y' || response == 'Y');
}
int main(void)
{
    char string[100];
restart:
    read_and_print_motto(string, sizeof(string));
    if (should_continue())
    {
        goto restart;
    }
    return 0;
}