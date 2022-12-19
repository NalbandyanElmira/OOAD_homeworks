#include <iostream>
#include <string>

class Dog
{
		std::string name;
		std::string breed;
		int age;
		double weight;
	public:
		Dog()
		{
			name = "Rex";
			breed = "Shepherd";
			age = 3;
			weight = 7.5;
		}
		void print()
		{
			std::cout << "My name is " << name << ". I am " << breed << ". I am " << age << " years old. And I " << weight <<
			 " kg." << std::endl;
		}
		void move()
		{
			std::cout << name << " is moving" << std::endl;
		}
		void eat()
		{
			std::cout << name << " is eating" << std::endl;
		}
		void make_sound()
		{
			std::cout << "Woof, Woof" << std::endl;
		}
};

class Helicopter
{
		std::string name;
		std::string type;
		int speed;
		int count_of_passengers;
	public:
		Helicopter()
		{
			name = "H125";
			type = "Civil";
			speed = 140;
			count_of_passengers = 7;
		}
		void print()
		{
			std::cout << "It is " << name << " helicopter.\nType: " << type << ".\nSpeed: " << speed << ".\nPassengers: " <<
			count_of_passengers << ".\n";
		}
		void fly()
		{
			std::cout << name << " helicopter is flying." << std::endl;
		}
};

class Hospital
{
		std::string name;
		std::string location;
		std::string phone_number;
		std::string work_time;
		std::string website;
		std::string services;
		std::string doctor_name;
		int price;
		int available_beds;
	public:
		Hospital()
		{
			name = "Muracan";
			location = "114 Muratsan St, Yerevan 0075";
			phone_number = "(010) 450230";
			work_time = "24/7";
			website = "http://muratsan.am/ru/";
			services = "Diagnostic";
			doctor_name = "Marina M. Vardanyan";
			price = 100000;
			available_beds = 25;
		}
		void print()
		{
			std::cout << "It is " << name << " hospital.\nIt's location: " << location << ".\nPhone number: " << phone_number <<
			".\nWork time: " << work_time <<".\nwebsite: " << website << ".\nServices: " << services << ".\nDoctor name: " <<
			doctor_name << ".\nPrice: " << price << "dram.\nAvailable beds: " << available_beds << ".\n";
		}
		void fill_patient_data()
		{
			std::cout << "Please say your data" << std::endl;
		}
		void diagnostic()
		{
			std::cout << "You should be examined" << std::endl;
		}
		void tratement()
		{
			std::cout << "You shuold receive appropriate treatment" << std::endl;
		}
};


int main()
{
	Dog dog;
	dog.print();
	dog.move();
	dog.eat();
	dog.make_sound();
	Helicopter helicopter;
	helicopter.print();
	helicopter.fly();
	Hospital hospital;
	hospital.print();
	hospital.fill_patient_data();
	hospital.diagnostic();
	hospital.tratement();

	return 0;
}