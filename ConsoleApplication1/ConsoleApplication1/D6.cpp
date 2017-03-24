#include "D6.h"

D6::D6()
{
}

D6::D6(const D6 & copy)
{
}

D6::~D6()
{
}

string D6::roll_sr(int num_dice, bool edge)
{
	int successes = 0;
	int ones = 0;
	bool glitch = false;
	bool crit_glitch = false;

	string ret = "";

	for (int i = 0; i < num_dice; i++)
	{

		int curr_roll = rand() % 6 + 1;

		if (curr_roll == 6 || curr_roll == 6)
		{
			successes++;
		}
		else if (curr_roll == 1)
		{
			ones++;
		}

		if (curr_roll == 6 && edge == true)
		{
			i--;
		}
	}

	if (ones >= (num_dice/2) && successes == 0)
	{
		crit_glitch = true;
		ret = "0:CG";
	}
	else if (ones >= (num_dice/2))
	{
		glitch = true;
		ret = "" + to_string(successes) + ":G";
	}
	else
	{
		ret = "" + to_string(successes) + ":-";
	}

	return ret;
}
