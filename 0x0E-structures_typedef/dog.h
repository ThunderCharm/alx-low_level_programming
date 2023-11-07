#ifndef DOG_H
#define DOG_H

/**
* struct dog - a dog's basic info
* @name: First member
* @age: Second member
* @owner: Third member
*
* Description: Longer description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;


int main() {
    /* Example of using the dog struct */
    dog my_dog = {"Buddy", 4.5, "Jane Doe"};
    
    printf("Dog's Name: %s\n", my_dog.name);
    printf("Dog's Age: %.1f years\n", my_dog.age);
    printf("Dog's Owner: %s\n", my_dog.owner);
    
    return 0;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
