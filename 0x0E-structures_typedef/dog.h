#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure for dogs
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog Owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
