/*
AUTHOR: NYAWIRA M COLLINS
REG NO.:CT101/G/23728/24
DATE:7 November, 2024
TITLE: WORKPAY
*/

#include <stdio.h>
int main() {
float overtime_pay=1.5;
float taxrate1 =0.15;
float taxrate2 =0.20;
float taxthreshold =600.0;
float normalhours =40.0;
float hours_worked;
float hourly_wage; 
float grosspay; 
float taxes; 
float netpay;
//request the user to input 
printf("Enter hours worked in a week: \n");
printf("Enter hourly wage: \n");
//preprocessor directive 
scanf("%f", &hours_worked);
scanf("%f", &hourly_wage);
//calculate grosspay
if (hours_worked >taxthreshold){
//preprocessor directive
float normal_pay =40 "hourly_wage";
float overtime_pay = (hours_worked-40)* (hourly_wage *1.5);
grosspay =normal_pay +overtime_pay;
} else {
grosspay =hours_worked "hourly_wage";
}
//calculate taxes charged
if (grosspay <=600) {
taxes =grosspay *taxrate1;
} else {
//preprocessor directive
taxes =((taxthreshold*taxrate1)+(grosspay-taxthreshold)*taxrate2));
}
//calculate netpay
netpay =grosspay-taxes;
//preprocessor directive
printf("Gross pay: $%.2f \n", grosspay);
printf("Taxes: $%.2f \n", taxes);
printf("Net pay: $%.2f \n", netpay);
return 0;
}
