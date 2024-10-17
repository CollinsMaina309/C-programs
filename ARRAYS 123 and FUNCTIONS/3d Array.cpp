//Arrays in C -3D Arrays
#include<stdio.h>
int main (){
	int i;
	int h;
	int m;
	int marks[2][2][3]={{{1000,2000,3000},{5000,6000,7000}},{{50,20,10},{90,80,70}}};
	for (i=0;i<2;i++){
		for(h=0;h<2;h++){
			for(m=0;m<3;m++){
				printf("marks[%d][%d][%d]=%d \n",i,h,m, marks[i][h][m]);
			}
		}
	}
	return 0
}