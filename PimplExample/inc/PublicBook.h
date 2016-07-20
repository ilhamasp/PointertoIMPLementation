/*
 * PublicBook.h
 *
 *  Created on: Jul 20, 2016
 *      Author: developer
 */

#ifndef INC_PUBLICBOOK_H_
#define INC_PUBLICBOOK_H_

/*
 * Book class
 */
class Book {
public:
	// Constructor
	Book();

	// Destructor
	~Book();

	// Print method
	void print();

private:
	// BookImpl declaration
	class BookImpl;

	// BookImpl pointer
	BookImpl* b_p;
};

#endif /* INC_PUBLICBOOK_H_ */
