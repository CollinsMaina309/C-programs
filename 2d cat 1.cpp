#include <stdio.h>
int main (){
	int bookID;
	int duedate;
	int returndate;
	int daysoverdue;
	int fineamount=0;
	int finerate=0;
	//preprocessor directive
	printf("enter bookID \n");
	printf("enter duedate \n");
	printf("enter returndate \n");
	//preprocessor directive
	scanf("bookID: %d \n", &bookID);
	scanf("duedate: %d \n", &duedate);
	scanf("returndate: %d \n", returndate);
	//preprocessor directive
	daysoverdue=returndate-duedate;
	//preprocessor directive
	if ("daysoverdue= 0") {
		printf("book returned on time. \n");
	} else {
		if(daysoverdue<=7) 
		{finerate=daysoverdue* 20;
		}else if (daysoverdue<=14)
		{finerate =daysoverdue*50;
		}else {finerate=daysoverdue* 100;
		}
		fineamount=daysoverdue * finerate;
	}
	//preprocessor directive
	printf("bookID: %d \n", &bookID);
	printf("duedate: %d \n", &duedate);
	printf("returndate: %d \n", &returndate);
	printf("daysoverdue: %d \n", &daysoverdue);
	printf("fineamount: %d \n", &fineamount);
	printf("finerate: %d \n", &finerate);
	return 0;
}