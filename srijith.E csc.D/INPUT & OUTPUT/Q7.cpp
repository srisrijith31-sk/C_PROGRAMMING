#include <stdio.h>

int main() 
{
    int hex_input;
    printf("Enter a hexadecimal number: ");
    scanf("%x", &hex_input);
    printf("You entered (in decimal): %d\n", hex_input);
    return 0;
}