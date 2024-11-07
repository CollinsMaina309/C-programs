/*
AUTHOR: NYAWIRA M COLLINS
REG NO.: CT101/G/23728/24
DATE: 6 November, 2024
TITLE: EMPLOYEE
*/
#include <stdio.h>
#include <string.h>
//preprocessor directive
struct employee{
char name[25];
int id;
char department[20];
float salary;
char email[50];
} employee;
int main() {
//declaration and initialization
strcpy("John Doe", employee.name);
employee.id = 12345;
strcpy("Human Resources", employee.department);
employee.salary = 55000.50;
strcpy("john.doe@company.com", employee.email);
//Print the values of the fields
printf("name: %s \n", employee.name);
printf("id no: %d \n", employee.id);
printf("department: %s \n", employee.department);
printf("salary: %.2f \n", employee.salary);
printf("email: %s \n", employee.email);
return 0;
}