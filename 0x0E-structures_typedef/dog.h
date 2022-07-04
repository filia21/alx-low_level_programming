#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - short description
 * @name: first type
 * @age: second type
 * @owner: third type
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif/* _DOG_H_ */
