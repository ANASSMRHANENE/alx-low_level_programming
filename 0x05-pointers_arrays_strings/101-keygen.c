#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 12
/**
 * main - this main
 * Return: 0(SUCCESS)
 */

char generateRandomChar() {
const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
int numCharacters = sizeof(characters) - 1;
int randomIndex = rand() % numCharacters;
return characters[randomIndex];
}
char* generateRandomPassword(int length) {
char* password = malloc((length + 1) * sizeof(char));
for (int i = 0; i < length; i++) {
password[i] = generateRandomChar();
}
password[length] = '\0';
return password;
}
int isValidPassword(const char* password) {
    // Add your validation logic for the "101-crackme" program here
    // For example, you could check if the password meets certain requirements
    // such as minimum length, presence of numbers, special characters, etc.
    return strlen(password) >= 8;
}
char* generateValidPassword(int length) {
char* password;
do
{
password = generateRandomPassword(length);
}
while (!isValidPassword(password));
return password;
}

int main() {
    srand(time(NULL)); // Seed the random number generator with current time

    char* validPassword = generateValidPassword(PASSWORD_LENGTH);
    printf("Generated valid password: %s\n", validPassword);

    free(validPassword); // Free the allocated memory

    return (0);
}
