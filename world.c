#include <stdio.h>

typedef enum { false, true } bool_type;

bool_type getLight(int time);

bool_type getAir(int time);

struct Frog
{
	int time;
	int weight;
} frog;

void frog_awake_or_sleeping(struct Frog* this, int time);

void frog_breathes(struct Frog* this, int time);

void frog_moves(struct Frog* this, int time);

void frog_eatsGrass(struct Frog* this, int time);

int main()
{
	const int max_time = 24;
	for (int time = 0; time < max_time; ++time) 
	{
		printf("It is %d", time);
		printf(":00 o'clock.\n");
		frog_awake_or_sleeping(&frog, time);
		frog_breathes(&frog, time);
		frog_moves(&frog, time);
		frog_eatsGrass(&frog, time);
		printf("\n");
	}

	return 0;
}

bool_type getLight(int time)
{
	const int l_time = 7;
	const int h_time = 19;
	if (time > l_time && time < h_time)
	{
		return true;
	}
	return false;
}

bool_type getAir(int time)
{
	if (getLight(time))
	{
		return true;
	}
	return false;
}

void frog_awake_or_sleeping(struct Frog* this, int time)
{
	if (getLight(time))
	{
		printf("It is light. The sun is shining.\n");
		printf("The frog is awake.\n");
	} 
	else
	{
		printf("It is dark. The sun went down.\n");
	}
}

void frog_breathes(struct Frog* this, int time)
{
	if (getAir(time)) 
	{
		printf("The tree gives air.\n");
		printf("            *\n");
		printf("          *   *\n");
		printf("         *     *\n");
		printf("         *     *\n");
		printf("          *   *\n");
		printf("          |   |\n");
		printf("          |   |\n");
		printf("''''''''''|   |''''''''''\n");
		printf("The frog breathes.\n");
	}
	else
	{
		printf("The tree doesn't give air.\n");
		printf("The frog doesn't breathe.\n");
	} 
}

void frog_moves(struct Frog* this, int time)
{
	if (getLight(time)) 
	{
		printf("                o           o\n");
		printf("The frog moves 'O' _ _ _ _ 'O'\n");
		printf("               | |         | |\n");
	} 
}

void frog_eatsGrass(struct Frog* this, int time)
{
	this->weight = 2;
	if (getLight(time))
	{
		printf("The frog eats grass. o<---\n");
		printf("His weight is %d", this->weight);
		printf("kg.\n");
		this->weight += 1;
	}
}
