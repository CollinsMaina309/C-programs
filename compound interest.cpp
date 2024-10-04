#include <stdio.h>
#include <math.h>
//for the power function pow()
int main(){
	double principle;
	double rate;
	double time;
	double period;
	float final_amount;
	//preprocessor directive
	printf("enter principle \n");
	printf("enter rate \n");
	printf("enter time \n");
	printf("enter period \n");
	//preprocessor directive
	scanf("principle %lf \n", &principle);
	scanf("rate %lf \n",&rate);
	scanf("time %lf \n",&time);
	scanf("period %lf \n", &period);
	//preprocessor directive
	final_amount =principle* pow((1+rate/period),period*time);
	//preprocessor directive
	printf("The final_amount after %.2lf years is: %.2lf \n",time,final_amount);
	return 0;
}