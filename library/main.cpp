#include <iostream>
#include <string>
#include <vector>
#include "user.h"

int main()
{
	std::vector<Book> books_arr;
	Book b1("Ascanio", "Alexandre Dumas", 12);
	Book b2("Master and Margarita", "Mikhail Bulgakov", 11);
	Book b3("Samvel", "Raffi", 35);
	Book b4("Gevorg Marzpetuni", "Muracan", 21);
	books_arr.push_back(Book());
	books_arr.push_back(b1);
	books_arr.push_back(b2);
	books_arr.push_back(b3);
	books_arr.push_back(b4);
	for(int i = 0; i < books_arr.size(); ++i)
	{
		std::cout << books_arr[i].getTitle() << " - " << books_arr[i].getAuthor() << " - ";
		books_arr[i].wearOut(books_arr[i].getTaken());
		std::cout << std::endl;
	}
	Library l(books_arr.size(), books_arr);
	l.take(b2);
	l.returned(b4);
	Student st("Joe", books_arr);
	st.read(b3);
}
