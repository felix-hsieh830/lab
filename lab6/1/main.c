#include <stdio.h>
#include <stdlib.h>
#include "../include/Information.h"

int main(void)
{
	Person person;
	printf("Please enter your name: ");
	scanf("%s", &person.name);

	printf("Please enter your gender<0 for woman, 1 for man> : ");
	scanf("%d", &person.gender);

	printf("Please input your age: ");
	scanf("%d", &person.age);

	printf("\nHi! %s\n", person.name);

	if(person.gender == 0)
		printf("You are %d-year-old woman.\n", person.age);
	else
		printf("You are %d-year-old man.\n", person.age);
	system("pause");

	return 0;
}





