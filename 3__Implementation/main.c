 /**
 * @file main.c
 * @author your name (abhishek.1599@gmail.com)
 * @brief Main file
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */



#include "calculator.h"

#include<stdio.h>
#include <stdlib.h>

int main (){
 
    struct User u1, u2; 
 
    line();
    printf("\n\t\tMonthly Financial Calculator\n");
    line();

    printf("\n");
     
    input();
 


    providentfund();  
 /**
 * @brief calculation of provident fund
 *
 */
    calculate();   
 /**
 * @brief calculation of total amount debit and credit , calculation of remaining amount (Deficit or surplus)
 *
 */

    system("cls");

    display();
 
 /**
 * @brief Displays output
 *
 */

    message();      
  /**
 * @brief final Message if u are smart budget planner or not.
 *
 */

    printf("\n");
    printf("\n");

    return 0;

}

