//C structure of a book
#include<string.h>
#include<stdio.h>
struct book {
	char Title[30];
	char Author[30];
	int Publication_year;
	int ISBN[13];
	float price;
	//declaration and initialization
	
}Book;
int main(){
	//struct Book;
	//preprocessor directive
	printf("enter Title:\n");
	printf("enter Author:\n");
	printf("enter Publication_year:\n");
	printf("enter ISBN:\n");
	printf("enter price:\n");
	
	//preprocessor directive
	scanf("%s \n", &Book.Title);
	scanf("%s \n", &Book.Author);
	scanf("%d \n", &Book.Publication_year);
	scanf("%s \n", &Book.ISBN);
	scanf("%f \n", &Book.price);
	
	//preprocessor directive
	printf("Title:%s \n", Book.Title);
	printf("Author:%s \n", Book.Author);
	printf("Publication_year:%d \n", Book.Publication_year);
	printf("ISBN:%s \n", Book.ISBN);
	printf("price:%f \n", Book.price);
	return 0;
}