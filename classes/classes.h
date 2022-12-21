#include <iostream>
#include <string>

class Dog
{
	std::string name;
	std::string breed;
	int age;
	double weight;
public:
	Dog(std::string n, std::string b, int a, double w);
	std::string getName();
	void setName(std::string n);
	std::string getBreed();
	void setBreed(std::string b);
	int getAge();
	void setAge(int a);
	double getWeight();
	void setWeight(double w);
	void print();
	void move();
	void eat();
	void make_sound();
};

class Helicopter
{
	std::string name;
	std::string type;
	int speed;
	int count_of_passengers;
public:
	Helicopter(std::string n, std::string t, int s, int c);
	std::string getName();
	void setName(std::string n);
	std::string getType();
	void setType(std::string t);
	int getSpeed();
	void setSpeed(int s);
	int getCount_of_passengers();
	void setCount_of_passengers(int c);
	void print();
	void fly();
};

class Hospital
{
	std::string name;
	std::string location;
	std::string phone_number;
	std::string work_time;
	std::string website;
	std::string service;
	std::string doctor_name;
	int price;
	int available_beds;
public:
	Hospital();
	Hospital(std::string n, std::string l, std::string p, std::string w, std::string web, std::string s, std::string d, int pr, int a);
	std::string getName();
	void setName(std::string n);
	std::string getLocation();
	void setLocation(std::string l);
	std::string getPhone_number();
	void setPhone_number(std::string p);
	std::string getWork_time();
	void setWork_time(std::string w);
	std::string getWebsite();
	void setWebsite(std::string w);
	std::string getService();
	void setService(std::string s);
	std::string getDoctor_name();
	void setDoctor_name(std::string d);
	int getPrice();
	void setPrice(int p);
	int getAvailable_beds();
	void setAvailable_beds(int a);
	void print();
	void fill_patient_data();
	void diagnostic();
	void tratement();
};
