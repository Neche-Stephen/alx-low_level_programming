#include "dog.h"
/**
 * init_dog -  initializes a variable of type struct dog
 * @d: struct variable to initialize
 * @name: member variable in struct
 * @age: member variable in struct
 * @owner: member variable in struct
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
