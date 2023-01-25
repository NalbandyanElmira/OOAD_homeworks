#include <string>
#include "library.h"

class Student
{
public:
	Student(const std::string&, std::vector<Book>);
	void setName(const std::string&);
	std::string getName() const;
	void read(const Book&);
private:
	std::string name;
	std::vector<Book> st_books;
};