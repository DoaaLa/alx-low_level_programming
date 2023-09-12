#ifndef dog_h
#define dog_h

/**
 * struct dog - dog attribute
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: The owner of the dog
 * Description: The attributes of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog my_dog;

#endif
