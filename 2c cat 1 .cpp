#include<stdio.h>
int main(){
	int bookID;
	int duedate;
	int returndate;
	int daysoverdue;
	int fine =0;
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
  	if("daysoverdue=0"){
  		printf("books returned on time thus no fine. \n");
    } else {
		if(daysoverdue<=7){
			fine=daysoverdue * 20;
		} else if (daysoverdue<=14){
			fine=daysoverdue * 50;
		} else {fine=daysoverdue * 100;
		} ;
		return 0;
    }
	//preprocessor directive
    printf("boookID: %d \n", bookID);
    printf("daysoverdue: %d \n", daysoverdue);
    printf("fine amount: %d \n", fine);
	return 0;
}