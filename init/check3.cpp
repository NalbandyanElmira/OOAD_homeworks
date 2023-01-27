#include <iostream>

class Person {
public:
    Person(const std::string& name) {
        std::cout << "Executing constructor body" << std::endl;
        this->name = name;
        check_init();
    }
    std::string name;
    static bool is_init;
    static void check_init() {
        if (!is_init) {
            std::cout << "Executed direct initialization" << std::endl;
            is_init = true;
        }
    }
};

bool Person::is_init = false;

int main()
{
    Person p("Alan");
    return 0;
}
