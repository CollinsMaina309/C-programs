#include <stdio.h>
int main (){
	int CustomerID;
	char CustomerName;
	int UnitConsumed;
	//preprocessor directive
	printf("enter CustomerID \n");
	printf("enter CustomerName \n");
	printf("enter UnitConsumed \n");
	//preprocessor directive
	scanf("CustomerID: %d \n", &CustomerID);
	scanf("CustomerName: %s \n", &CustomerName);
	scanf("UnitConsumed: %d \n", &UnitConsumed);
	return 0;
}