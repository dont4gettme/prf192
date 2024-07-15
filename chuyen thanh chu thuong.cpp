#include<stdio.h>
#include<ctype.h>

int main() {
    int ctr = 0; // Variable to keep track of position in the string
    char str_char; // Variable to store each character of the string
    char str[100]; // Array to store the input string

    printf("\n Convert a string to lowercase :\n");
    printf("----------------------------------");
    printf("\n Input a string in UPPERCASE : ");
    fgets(str, sizeof str, stdin); // Read a string including spaces from the user

    printf(" Here is the above string in lowercase :\n ");

    while (str[ctr]) { // Loop through each character of the string until the null character is encountered
        str_char = str[ctr]; // Retrieve each character from the string
        putchar(tolower(str_char)); // Convert the character to lowercase using tolower() function and print it
        ctr++; // Move to the next character in the string
    }

    return 0; // Return 0 to indicate successful execution of the program
}
