#include <stdio.h>
int main (){
	float principle;
	int rate;
	int time;
	float simple_interest;
	//preprocessor directive
	printf("enter principle amount \n");
	printf("enter rate \n");
	printf("enter time \n");
	//preprocessor directive
	scanf("principal %f \n", &principle);
	scanf("rate %d \n", &rate);
	scanf("time %d \n", &time);
	//preprocessor directive
	simple_interest=(principle*rate*time)/100;
	//preprocessor directive
	printf("simple_interest %f \n", simple_interest);
	return 0;
}