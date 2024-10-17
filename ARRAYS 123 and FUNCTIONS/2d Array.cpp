// Arrays in C-2D arrays
#include <stdio.h>
int main (){
	int i;
	int h;
	int marks[2][3]={{300,500,900},{400,600,700}};
	for(i=0;i<2;i++){
		for(h=0;h<3;h++){
			printf("marks[%d][%d]= %d \n", i,h,marks[i][h]);
		}
	}
	return 0;
}