#include <iostream>
#include "classes.h"

Dog::Dog(const std::string& n, const std::string& b, int a, double w)
{
	name = n;
	breed = b;
	age = a;
	weight = w;
}

std::string Dog::getName()
{
	return name;
}

void Dog::setName(const std::string& n)
{
	name = n;
}

std::string Dog::getBreed()
{
	return breed;
}

void Dog::setBreed(const std::string& b)
{
	breed = b;
}

int Dog::getAge()
{
	return age;
}

void Dog::setAge(int a)
{
	age = a;
}

double Dog::getWeight()
{
	return weight;
}

void Dog::setWeight(double w)
{
	weight = w;
}

void Dog::print()
{
	std::cout << "My name is " << name << ". I am " << breed << ". I am " << age << " years old. And I " << weight <<
	 " kg." << std::endl;
}

void Dog::move()
{
	std::cout << name << " is moving" << std::endl;
}

void Dog::eat()
{
	std::cout << name << " is eating" << std::endl;
}

void Dog::make_sound()
{
	std::cout << "Woof, Woof" << std::endl;
}

Helicopter::Helicopter(const std::string& n, const std::string& t, int s, int c)
{
	name = n;
	type = t;
	speed = s;
	count_of_passengers = c;
}

std::string Helicopter::getName()
{
	return name;
}

void Helicopter::setName(const std::string& n)
{
	name = n;
}

std::string Helicopter::getType()
{
	return type;
}

void Helicopter::setType(const std::string& t)
{
	type = t;
}

int Helicopter::getSpeed()
{
	return speed;
}

void Helicopter::setSpeed(int s)
{
	speed = s;
}

int Helicopter::getCount_of_passengers()
{
	return count_of_passengers;
}

void Helicopter::setCount_of_passengers(int c)
{
	count_of_passengers = c;
}

void Helicopter::print()
{
	std::cout << "It is " << name << " helicopter.\nType: " << type << ".\nSpeed: " << speed << ".\nPassengers: " <<
	count_of_passengers << ".\n";
}

void Helicopter::fly()
{
	std::cout << name << " helicopter is flying." << std::endl;
}

Hospital::Hospital()
{
	name = "";
	location = "";
	phone_number = "";
	work_time = "";
	website = "";
	service = "";
	doctor_name = "";
	price = 0;
	available_beds = 0;
}

Hospital::Hospital(const std::string& n, const std::string& l, const std::string& p, const std::string& w, 
	const std::string& web, const std::string& s, const std::string& d, int pr, int a)
{
	name = n;
	location = l;
	phone_number = p;
	work_time = w;
	website = web;
	service = s;
	doctor_name = d;
	price = pr;
	available_beds = a;
}

std::string Hospital::getName()
{
	return name;
}

void Hospital::setName(const std::string& n)
{
	name = n;
}

std::string Hospital::getLocation()
{
	return location;
}

void Hospital::setLocation(const std::string& l)
{
	location = l;
}

std::string Hospital::getPhone_number()
{
	return phone_number;
}

void Hospital::setPhone_number(const std::string& p)
{
	phone_number = p;
}

std::string Hospital::getWork_time()
{
	return work_time;
}

void Hospital::setWork_time(const std::string& w)
{
	work_time = w;
}

std::string Hospital::getWebsite()
{
	return website;
}

void Hospital::setWebsite(const std::string& w)
{
	website = w;
}

std::string Hospital::getService()
{
	return service;
}

void Hospital::setService(const std::string& s)
{
	service = s;
}

std::string Hospital::getDoctor_name()
{
	return doctor_name;
}

void Hospital::setDoctor_name(const std::string& d)
{
	doctor_name = d;
}

int Hospital::getPrice()
{
	return price;
}

void Hospital::setPrice(int p)
{
	price = p;
}

int Hospital::getAvailable_beds()
{
	return available_beds;
}

void Hospital::setAvailable_beds(int a)
{
	available_beds = a;
}

void Hospital::print()
{
	std::cout << "It is " << name << " hospital.\nIt's location: " << location << ".\nPhone number: " << phone_number <<
	".\nWork time: " << work_time <<".\nwebsite: " << website << ".\nServices: " << service << ".\nDoctor name: " <<
	doctor_name << ".\nPrice: " << price << "dram.\nAvailable beds: " << available_beds << ".\n";
}

void Hospital::fill_patient_data()
{
	std::cout << "Please say your data" << std::endl;
}

void Hospital::diagnostic()
{
	std::cout << "You should be examined" << std::endl;
}

void Hospital::tratement()
{
	std::cout << "You should receive appropriate treatment" << std::endl;
}

int main()
{
	Dog dog("Rex", "Shepherd", 2, 3.5);
	dog.print();
	dog.move();
	dog.eat();
	dog.make_sound();
	dog.setAge(7);
	dog.print();
	Helicopter helicopter("H125", "Civil", 140, 7);
	helicopter.print();
	helicopter.fly();
	Hospital hospital;
	hospital.setName("Astxik");
	hospital.setAvailable_beds(30);
	hospital.print();
	hospital.fill_patient_data();
	hospital.diagnostic();
	hospital.tratement();

	return 0;
}