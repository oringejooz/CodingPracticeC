#include <stdio.h>


int main()
{
char txt[] = "We are the so-called \"Vikings\" from the north.";
char txt1[] = "It\'s alright.";
char txt2[] = "The character \\ is called backslash.";

char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s", greetings);

char greetings2[] = "Hello World!";

printf("%lu\n", sizeof(greetings));   // Outputs 13
printf("%lu\n", sizeof(greetings2));  // Outputs 13


//\0 character at the end is known as the "null terminating character"

return 0;
}