#include <string>

class Book
{
public:
	void setTitle(const std::string&);
	std::string getTitle() const;
	void setAuthor(const std::string&);
	std::string getAuthor() const;
	void setTaken(int);
	int getTaken() const;
	void wearOut(int);
	Book();
	Book(const std::string&, const std::string&, int);
private:
	std::string title;
	std::string author;
	int taken;
};