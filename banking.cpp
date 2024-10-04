#include<stdio.h>
int main(){
	int age;
	float income;
	//preprocessor directive
	printf("enter age\n");
	printf("enter annual income\n");
	//preprocessor directive
	scanf("age: %d\n", &age);
	scanf("income: &f\n", &income);
	//preprocessor directive
	if(age >=21 && income >=21000){
		printf("congratulations you qualify for a loan.\n");
	} else {
		printf("Unfortunately, we are unable to offer you a loan for now at this time.\n");
	       }
	return 0;
}