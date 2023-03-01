#include <iostream>
#include <map>
#include <string>

class Multiton
{
public:
	static Multiton* getInstance(const std::string&);
	void printInfo();
private:
	Multiton();
	static const int limit = 3;
	static int count;
	static std::map<std::string, Multiton*> instances;
};

int Multiton::count = 0;
std::map<std::string, Multiton*> Multiton::instances;

Multiton::Multiton() {}

Multiton* Multiton::getInstance(const std::string& key)
{
	if(instances.count(key) == 0){
		if(count < limit){
			instances[key] = new Multiton();
			++count;
		}
		else{
			return instances.begin()->second;
		}
	}
	return instances[key];
}

void Multiton::printInfo()
{
	std::cout << "Instance is created at " << this << std::endl;
}

int main()
{
	Multiton* m1 = Multiton::getInstance("key1");
	Multiton* m2 = Multiton::getInstance("key2");
	Multiton* m3 = Multiton::getInstance("key3");
	Multiton* m4 = Multiton::getInstance("key4");
	m1->printInfo();
	m2->printInfo();
	m3->printInfo();
	m4->printInfo();

	return 0;
}