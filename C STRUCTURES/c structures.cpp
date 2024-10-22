//c structures
#include <stdio.h>
#include<string.h>
struct student{
	char Reg_no[30];
	char Name[30];
	char email[50];
	float Height;
	int marks;
	int ID_no;
	int phone_no;
	//preprocessor directive
}Student1;
int main(){
	//enter student1.name
	printf("enter Name:");
	scanf("%s \n", &Student1.Name);
	//struct student1.Reg_no;
	printf("enter Registration no:");
	scanf("%s \n", &Student1.Reg_no);
	//struct student1.email
	printf("enter email:");
	scanf("%s \n", &Student1.email);
	//struct student1.phone number
	printf("enter ID_no:");
	scanf("%d \n", &Student1.ID_no);
	//struct student1.phone no
	printf("enter phone_no:");
	scanf("%d \n", &Student1.phone_no);
	//struct student1.height
	printf("enter Height:");
	scanf("%f \n", &Student1.Height);
	//struct student1.marks
	printf("enter marks:");
	scanf("%d \n", &Student1.marks);
	return 0;
}
