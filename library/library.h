#include <string>
#include <vector>
#include "book.h"

class Library
{
public:
	Library(int, std::vector<Book>);
	void setCount(int);
	int getCount() const;
	void take(const Book&);
	void returned(const Book&);
private:
	int count;
	std::vector<Book> books;
};