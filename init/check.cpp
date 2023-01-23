#include <iostream>
#include <string>
#include <chrono>

class Person
{
	std::string name = "Ada";
	int age;
public:
	void foo()
	{
		auto start = std::chrono::high_resolution_clock::now();
		std::cout << "Direct initialization " << name << std::endl;
		auto finish = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> elapsed = finish - start;
		std::cout << "Elapsed time in function: " << elapsed.count() << " s\n";
	}
	Person(){
		auto start = std::chrono::high_resolution_clock::now();
		age = 42;
		std::cout << "Default ctor initialization: " << age << std::endl; 
		auto finish = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> elapsed = finish - start;
		std::cout << "Elapsed time in default ctor: " << elapsed.count() << " s\n";
	}
};

int main()
{
	Person p;
	p.foo();
	// Person p2;
	// std::cout << p.obj_order << std::endl;
	// std::cout << p2.getName() << std::endl;
}