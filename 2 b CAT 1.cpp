#include<stdio.h>
int main(){
	int bookID;
	int duedate;
	int returndate;
	int daysoverdue;
	//preprocessor directive
	printf("enter bookID \n");
	printf("enter duedate \n");
	printf("enter returndate \n");
	//preprocessor directive
	scanf("bookID %d \n" ,&bookID);
	scanf("duedate %d \n ",&duedate);
	scanf("returndate %d \n ",&returndate);
	//preprocessor directive
	daysoverdue=returndate-duedate;
	//preprocessor directive
    if(daysoverdue>0) {
		printf("daysoverdue: %d \n", daysoverdue);
	}else{
		printf("books returned timely.\n");
	}
	return 0;
}