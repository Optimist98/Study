#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
printf("Enter your name: ");
fgets(name, 255, stdin);
name[strlen(name)-1] = '\0';

printf("Hello, %s!\n", name);
return 0;
}