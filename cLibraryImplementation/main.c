#include <stdio.h>
#include <stdlib.h>
#include "book.h"


int main(void) {
    
    // #include "librarian.h"
    // #include "library.h"
    
    Book *myBook = newBook();
    char* title = "MyBook";
	myBook->setTitle(myBook, title);
	int length = 1;
	myBook->setNumOfPages(myBook, &length);
	printf("%s" , myBook->getTitle(myBook));
	printf("\n%d" , myBook->getNumOfPages(myBook));
}
