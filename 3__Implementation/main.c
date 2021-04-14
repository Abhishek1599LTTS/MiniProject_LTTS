#include "calculator.h"
#include<stdio.h>
#include <stdlib.h>

int main (){
 
    line();
    printf("\n\t\tMonthly Financial Calculator\n");
    line();

    printf("\n");
     
    input();

    providentfund();
    calculate();

    system("cls");

    display();

    message();
    printf("\n");
    printf("\n");

    return 0;

}

