#include <stdio.h>
int main(){
	int CustomerID;
	char CustomerName;
	int UnitConsumed;
	float Chargesperunit;
	float Total_bill;
	float Surcharge;
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
    }
    //preprocessor directive
    Total_bill=UnitConsumed * Chargesperunit;
    //preprocesssor directive
    if(Total_bill>400){
		(Surcharge=Total_bill*0.15);
		(Total_bill+=Surcharge);
		printf("Surcharge of 15% (%f)added. \n", Surcharge);
	}
 //preprocessor directive
 printf("CustomerID: %d \n", &CustomerID);
 printf("CustomerName: %s \n", &CustomerName);
 printf("UnitConsumed: %d \n", &UnitConsumed);
 printf("Chargesperunit: %f \n", &Chargesperunit);
 printf("Total bill: %f \n", &Total_bill);
 printf("total bill(after surcharge and minimum bill):%f \n", Total_bill);
 return 0;
}