#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct containing name, age and owner
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: struct that enables entry of the name, age and the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef foor struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
