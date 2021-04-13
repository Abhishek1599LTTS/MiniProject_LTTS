#ifndef _CALCULATOR_H
#define _CALCULATOR_H

#define limit 10
#define acc 70 
#define EMPLOYEE_PERCENTAGE 12.5f
#define EMPLOYER_PERCENTAGE 12.0f

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


#endif