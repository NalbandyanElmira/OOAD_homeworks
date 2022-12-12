#include <iostream>

class Sun 
{
	public:
		bool getLight(int time)
		{
			if (time > 7 && time < 19)
			{
				return true;
			}
			return false;
		}
};

class Tree
{
		Sun s;
	public:
		bool getAir(int time)
		{
			if (s.getLight(time)) 
			{
				return true;
			} 
			return false;
		}
};

class Frog
{	
		Sun s;
		Tree t;
	public:
		int weight { 1 };
		void awake_or_sleeping(int time)
		{
			if (s.getLight(time))
			{
				std::cout << "It is light. The sun is shining." << std::endl;
				std::cout << "The frog is awake." << std::endl;
			} 
			else
			{
				std::cout << "It is dark. The sun went down." << std::endl;
			}
		}
		void breathes(int time)
		{
			if (t.getAir(time)) 
			{
				std::cout << "The tree gives air." << std::endl;
				std::cout << "            *" << std::endl;
				std::cout << "          *   *" << std::endl;
				std::cout << "         *     *" << std::endl;
				std::cout << "         *     *" << std::endl;
				std::cout << "          *   *" << std::endl;
				std::cout << "          |   |" << std::endl;
				std::cout << "          |   |" << std::endl;
				std::cout << "''''''''''|   |''''''''''" << std::endl;
				std::cout << "The frog breathes." << std::endl;
			}
			else
			{
				std::cout << "The tree doesn't give air." << std::endl;
				std::cout << "The frog doesn't breathe." << std::endl;
			} 
		}
		void moves(int time)
		{
			if (s.getLight(time)) 
			{
				std::cout << "                o           o" << std::endl;
				std::cout << "The frog moves 'O' _ _ _ _ 'O'" << std::endl;
				std::cout << "               | |         | |" << std::endl;
			} 
		}
		void eatsGrass(int time)
		{
			if (s.getLight(time)) 
			{
				std::cout << "The frog eats grass. o<---" << std::endl;
				std::cout << "His weight is " << weight << "kg." << std::endl;
				weight += 1;
			} 
		}
};

int main() 
{
	std::cout << "Hiiii!!! Welcome to my imagine world!!!" << std::endl << std::endl;
	Frog frog;
	for(int time = 0; time < 24; ++time)
	{
		std::cout << "It is " << time << ":00 o'clock." << std::endl;
		frog.awake_or_sleeping(time);
		frog.breathes(time);
		frog.moves(time);
		frog.eatsGrass(time);
		std::cout << std::endl;
	}

	return 0;
}