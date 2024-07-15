#include<stdio.h>
#include<ctype.h>

int main() {
    int ctr=0; // Variable to keep track of position in the string
    char str_char; // Variable to store each character of the string
    char str[100]; // Array to store the input string

    printf("\n Convert a string to uppercase. :\n");
    printf("-----------------------------------");
    printf("\n Input a string in lowercase : ");
    fgets(str, sizeof str, stdin); // Read a string including spaces from the user

    printf(" Here is the above string in UPPERCASE :\n ");

    while (str[ctr]) { // Loop through each character of the string until the null character is encountered
        str_char = str[ctr]; // Retrieve each character from the string
        putchar(toupper(str_char)); // Convert the character to uppercase using toupper() function and print it
        ctr++; // Move to the next character in the string
    }

    printf("\n\n");
    return 0; // Return 0 to indicate successful execution of the program
}
