#ifndef BOOK_H_
#define BOOK_H_
#include <stdbool.h>

typedef struct bookStruct {
     char *title;
	 int *numOfPages;
	 char *author;
	 char *ISBN;
	 char *coverType;
	 char *datePublished;
	 bool * inProd;
	 char *publisher;
	 char *country;
	 char *dateAdded;
	 char *datePurchased;
	 int numAdded;
	void (*setTitle)(void *obj, char* newTitle);
	char *(*getTitle)(void *obj);
	void (*setNumOfPages)(void *obj, int * pages);
	int *(*getNumOfPages)(void *obj);
	void (*setAuthor)(void *obj, char* newAuthor);
	char *(*getAuthor)(void *obj);
	void (*setISBN)(void *obj, char * newISBN);
	char *(*getISBN)(void *obj);
	void (*setCoverType)(void *obj, char* newCoverType);
	char *(*getCoverType)(void *obj);
	void (*setDatePublished)(void *obj, char * newDatePublished);
	char *(*getDatePublished)(void *obj);
	void (*setInProd)(void *obj, bool* newInProd);
	bool *(*getInProd)(void *obj);
	void (*setPublisher)(void *obj, char* newPublisher);
	char *(*getPublisher)(void *obj);
	void (*setCountry)(void *obj, char* newCountry);
	char *(*getCountry)(void *obj);
	void (*setDateAdded)(void *obj, char * newDateAdded);
	char *(*getDateAdded)(void *obj);
	void (*setdatePurchased)(void *obj, char* newDatePurchased);
	char *(*getdatePurchased)(void *obj);
	void (*setNumAdded)(void *obj, int * pages);
	int *(*getNumAdded)(void *obj);
} Book;

void setNumOfPages(void *obj, int * pages){
	Book* this = (Book*) obj;
	this->numOfPages = *pages;
}

int * getNumOfPages(void *obj){
	Book *this = (Book*) obj;
	return this->numOfPages;
}

void setTitle(void *obj, char *newTitle){
     
	Book *this = (Book*) obj;
	this->title = newTitle;
}


char *getTitle(void *obj) {	
	Book *this = (Book*) obj;
	return this->title;	
}

void setAuthor(void *obj, char* newAuthor){
Book* this = (Book*) obj;
	this->author = newAuthor;
	
}
	char *getAuthor(void *obj){
			Book *this = (Book*) obj;
	return this->author;
		
	}
	void setISBN(void *obj, char * newISBN){
		Book* this = (Book*) obj;
	this->ISBN = newISBN;
	}
	char *getISBN(void *obj){
			Book *this = (Book*) obj;
	return this->ISBN;
	}
	void setCoverType(void *obj, char* newCoverType){
		Book* this = (Book*) obj;
	this->coverType = newCoverType;
	}
	char *getCoverType(void *obj){
			Book *this = (Book*) obj;
	return this->coverType;
	}
	void setDatePublished(void *obj, char * newDatePublished){
		Book* this = (Book*) obj;
	this->datePublished = newDatePublished;
	}
	
	char *getDatePublished(void *obj){
			Book *this = (Book*) obj;
	return this->datePublished;
	}
	
	void setInProd(void *obj, bool* newInProd){
		Book* this = (Book*) obj;
	this->inProd = newInProd;
	}
	
	bool *getInProd(void *obj){
			Book *this = (Book*) obj;
	return this->inProd;
	}
	
	void setPublisher(void *obj, char* newPublisher){
		Book* this = (Book*) obj;
	this->publisher = newPublisher;
	}
	
	char *getPublisher(void *obj){
			Book *this = (Book*) obj;
	return this->publisher;
	}
	
	void setCountry(void *obj, char* newCountry){
		Book* this = (Book*) obj;
	this->country = newCountry;
	}
	
	char *getCountry(void *obj){
			Book *this = (Book*) obj;
	return this->country;
	}
	
	void setDateAdded(void *obj, char * newDateAdded){
		Book* this = (Book*) obj;
	this->dateAdded = newDateAdded;
	}
	char *getDateAdded(void *obj){
			Book *this = (Book*) obj;
	return this->dateAdded;
	}
	void setdatePurchased(void *obj, char* newDatePurchased){
		Book* this = (Book*) obj;
	this->datePurchased = newDatePurchased;
	}
	
	char *getdatePurchased(void *obj){
			Book *this = (Book*) obj;
	return this->datePurchased;
	}
	
	void setNumAdded(void *obj, int * newNumAdded){
		Book* this = (Book*) obj;
	this->numAdded = *newNumAdded;
	}
	
	int *getNumAdded(void *obj){
			Book *this = (Book*) obj;
	return this->numAdded;
	}

Book *newBook() {
	Book *book = (Book*)malloc(sizeof(Book));
	book->setTitle = &setTitle;
	book->getTitle = &getTitle;
	book->setNumOfPages = &setNumOfPages;
	book->getNumOfPages = &getNumOfPages;
	book->setAuthor = &setAuthor;
	book->getAuthor = &getAuthor;
	book->setISBN = &setISBN;
	book->getISBN = &getISBN;
	book->setCoverType = &setCoverType;
	book->getCoverType = &getCoverType;
	book->setDatePublished = &setDatePublished;
	book->getDatePublished = &getDatePublished;
	book->setInProd = &setInProd;
	book->getInProd = &getInProd;
	book->setPublisher = &setPublisher;
	book->getPublisher = &getPublisher;
	book->setCountry = &setCountry;
	book->getCountry = &getCountry;
	book->setDateAdded = &setDateAdded;
	book->getDateAdded = &getDateAdded;
	book->setdatePurchased = &setdatePurchased;
	book->getdatePurchased = &getdatePurchased;
	book->setNumAdded = &setNumAdded;
	book->getNumAdded = &getNumAdded;
	return book;
}

#endif