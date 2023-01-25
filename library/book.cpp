#include <iostream>
#include <string>
#include <vector>
#include "book.h"

Book::Book()
{
	title = "Jane Eyre";
	author = "Charlotte Bronte";
	taken = 25;
}
Book::Book(const std::string& t, const std::string& a, int take) 
{
	title = t;
	author = a;
	taken = take;
}
void Book::setTitle(const std::string& t)
{
	title = t;
}
std::string Book::getTitle() const
{
	return title;
}
void Book::setAuthor(const std::string& a)
{
	author = a;
}
void Book::setTaken(int t)
{
	taken = t;
}
int Book::getTaken() const
{
	return taken;
}
std::string Book::getAuthor() const
{
	return author;
}
void Book::wearOut(int t)
{
	if(t > 15)
	{
		std::cout << "wearout";
	}
	else
	{
		std::cout << "new";
	}
}