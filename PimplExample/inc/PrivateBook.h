/*
 * PrivateBook.h
 *
 *  Created on: Jul 20, 2016
 *      Author: developer
 */

#ifndef INC_PRIVATEBOOK_H_
#define INC_PRIVATEBOOK_H_

#include <iostream>
#include "PublicBook.h"

/*
 * Book implementation class
 */
class Book::BookImpl {
public:
	// Print method
	void print();

private:
	// Book properties
	std::string  b_Contents;
	std::string  b_Title;
};

#endif /* INC_PRIVATEBOOK_H_ */
