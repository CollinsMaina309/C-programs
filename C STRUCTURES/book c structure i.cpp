//C structure of a book
#include<string.h>
#include<stdio.h>
struct book {
	char Title[30];
	char Author[30];
	int Publication_year;
	int ISBN[13];
	float price;
}Book;