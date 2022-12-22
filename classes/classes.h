#include <iostream>
#include <string>

class Dog
{
	std::string name;
	std::string breed;
	int age;
	double weight;
public:
	Dog(const std::string& n, const std::string& b, int a, double w);
	std::string getName();
	void setName(const std::string& n);
	std::string getBreed();
	void setBreed(const std::string& b);
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
	Helicopter(const std::string& n, const std::string& t, int s, int c);
	std::string getName();
	void setName(const std::string& n);
	std::string getType();
	void setType(const std::string& t);
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
	Hospital(const std::string& n, const std::string& l, const std::string& p, const std::string& w, const std::string& web,
	 const std::string& s, const std::string& d, int pr, int a);
	std::string getName();
	void setName(const std::string& n);
	std::string getLocation();
	void setLocation(const std::string& l);
	std::string getPhone_number();
	void setPhone_number(const std::string& p);
	std::string getWork_time();
	void setWork_time(const std::string& w);
	std::string getWebsite();
	void setWebsite(const std::string& w);
	std::string getService();
	void setService(const std::string& s);
	std::string getDoctor_name();
	void setDoctor_name(const std::string& d);
	int getPrice();
	void setPrice(int p);
	int getAvailable_beds();
	void setAvailable_beds(int a);
	void print();
	void fill_patient_data();
	void diagnostic();
	void tratement();
};
