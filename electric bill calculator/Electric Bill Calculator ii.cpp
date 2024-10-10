#include <stdio.h>
int main(){
	int CustomerID;
	char CustomerName;
	int UnitConsumed;
	float Chargesperunit;
	//preprocessor directive
	printf("enter CustomerID \n");
	printf("enter CustomerName \n");
	printf("enter UnitConsumed \n");
	//preprocessor directive
	scanf("CustomerID: %d \n", &CustomerID);
	scanf("CustomerName: %s \n", &CustomerName);
	scanf("UnitConsumed: %d \n", &UnitConsumed);
	//preprocessor directive
	if (UnitConsumed<=199) {
         (Chargesperunit=1.20);
	} else {
        if(UnitConsumed<= 200){
         (Chargesperunit=1.50);
	    } else if (400<=UnitConsumed<600){
         (Chargesperunit=1.80);
		}else {(UnitConsumed>=600);
         (Chargesperunit=2.00);
		}
		return 0;
    }
 //preprocessor directive
 printf("CustomerID: %d \n", &CustomerID);
 printf("CustomerName: %s \n", &CustomerName);
 printf("UnitConsumed: %d \n", &UnitConsumed);
 printf("Chargesperunit: %f \n", &Chargesperunit);
 return 0;
}