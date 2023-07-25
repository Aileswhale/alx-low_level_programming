#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 *
 *Function to generate a random password
 *
 * Return: Always 0.
 */
void generatePassword(char *password, int length) 
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	for (int i = 0; i < length - 1; i++)
{
	password[i] = charset[rand() % (sizeof(charset) - 1)];
}
	password[length - 1] = '\0'; 
}

int main() 
{
	int password_length = 10; 

	char password[password_length];

	srand(time(NULL));

	generatePassword(password, password_length);

	printf("Generated Password: %s\n", password);

	return 0;
}
