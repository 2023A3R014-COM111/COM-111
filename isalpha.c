#include <stdio.h>
int main()
{
    char character;
    printf("press any key\n");

    character = getchar();

    if(isalpha(character)>0)
        printf("The character is a letter.");
    else if (isdigit(character)>0)
        printf("The character is a digit.");
    else
        printf("the character is not alphanumeric.");

    return 0;

}
