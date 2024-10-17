// C arrays - IDarreys
#include <stdio.h>
int main (){
	int i;
	int marks[6];
	//preprocessor directive
	for(i=0;i<6;i++){
	printf("enter marks %d:", i);
	scanf("%d", &marks [i]);
	}
	//preprocesor directive
	printf("Marks entered: \n");
	for(i=0;i<6;i++){
		printf("%d=%d \n",i,marks[i]);
	}
	return 0;
}