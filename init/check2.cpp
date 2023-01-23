#include <iostream>
#include <string>

class Count {
	int count = 0;
    	int order;
public:
	void foo()
	{
		++count;
		order = count;
		std::cout << "foo function -> " << order << std::endl;
	}
    Count() {
        ++count;
        order = count;
        std::cout << "default ctor -> " << order << std::endl;
    }
};

int main()
{
	Count obj;
	obj.foo();
}
