#include <iostream>
#include <string>
// #include "book.h"
#include "library.h"

Library::Library(int c, std::vector<Book> vec)
{
	count = c;
	books = vec;
}
void Library::setCount(int c)
{
	count = c;
}
int Library::getCount() const
{
	return count;
}
void Library::take(const Book& b)
{
	std::cout << b.getTitle() << " taken." << std::endl;
}
void Library::returned(const Book& b)
{
	std::cout << b.getTitle() << " returned." << std::endl;
}