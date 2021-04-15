/**
 * @file calculator.h
 * @author your name (abhishek.1599@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef _CALCULATOR_H
#define _CALCULATOR_H

#define limit 10
#define acc 70 
#define EMPLOYEE_PERCENTAGE 12.5f
#define EMPLOYER_PERCENTAGE 12.0f

struct User
{
    char name[50];
    float salary;
};

float fnp;
float phone;
float book[limit];
float totalbook;
float enter;
float car;
float bills;
float allow;
float side[limit];
float totalside;
int i,n,a,k,j;
int books( int o);
int totalsideInc(int u);
float totalcredit;
float totaldebit;
float total_amount;
char name[acc];
char month[acc];
float basicPay;
float employeeFund,employerFund;

void display();
void input();
void line();
void message();
void calculate();
void providentfund();

int calculatesum(int totaldebit,int totalcredit);

int providentfund2(int basicPay);


#endif
