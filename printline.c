#include <stdio.h>
/* Function declaration */
int addition(int);
int substraction(int);
int multiplication(int);
int division(int);
int modulous(int);

int main()
{
    /*call the printline function*/
    printline();
    /*output a message*/
    printf("Welcome to MIET ECE Department\n");
    /*call the printline function again*/
    printline();
    return 0;
}
/*function defination*/
void printline(void){
int i ;
for (i = 1; i<40;i++){
        printf("-");
}
printf("\n");
}

