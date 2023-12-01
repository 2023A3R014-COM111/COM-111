#include <stdio.h>
int myGetchar(void);
int main()
{
    int ch;
    printf("enter a character:");
    ch = myGetchar();
    printf("the character entered is : %c\n",ch);
    return 0;
}
int myGetchar(void)
{
    int c;
    c = getchar();
    return c;
}
