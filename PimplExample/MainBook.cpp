/*
 * MainBook.cpp
 *
 *  Created on: Jul 20, 2016
 *      Author: developer
 */

#include <iostream>
#include "inc/PublicBook.h"
#include "inc/PrivateBook.h"

// constructor
Book::Book() {
	b_p = new BookImpl();
}

// destructor
Book::~Book() {
	delete b_p;
}

// print functions
void Book::print() {
	b_p->print();
}

/* BookImpl functions */
void Book::BookImpl::print() {
	std::cout << "print from BookImpl" << std::endl;
}

/* main */
int main()
{
	Book *b = new Book();
	b->print();
	delete b;

	return 0;
}

