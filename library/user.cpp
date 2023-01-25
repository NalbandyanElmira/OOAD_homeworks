#include <iostream>
#include <string>
#include "user.h"

Student::Student(const std::string& n, std::vector<Book> b)
{
	name = n;
	st_books = b;
}
void Student::setName(const std::string& n)
{
	name = n;
}
std::string Student::getName() const
{
	return name;
}
void Student::read(const Book& b)
{
	std::cout << getName() << " read " << b.getTitle() << std::endl;
}