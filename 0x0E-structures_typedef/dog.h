#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - dog identity information
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: dof identity listed
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  *main - dog information
  *@Dog.name: poppy
  *@Dog.age: number
  *@Dog.owner: owner name
  *
  *Return: 0 (alwyas success)
  */

int main(void)
{
	struct dog myDog;

	Dog.name = "poppy";
	Dog.age = 3.5;
	Dog.owner = "bob";

	printf("%s\n", Dog.name);
	printf("%.1f\n", Dog.age);
	printf("%s\n", Dog.owner);

	return (0);
}
