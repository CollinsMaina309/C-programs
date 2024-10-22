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
	strcpy("Introduction to C programming", Book.Title);
	strcpy("John Smith", Book.Author);
	printf("2022", Book.Publication_year);
	printf("9780131103627", Book.ISBN);
	printf("49.99",Book.price);
	return 0;
}