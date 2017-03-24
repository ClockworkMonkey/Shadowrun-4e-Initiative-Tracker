#include "initiative.h"

void Initiative::add(Character new_char)
{
	bool flag = false;

	for (int i = 0; i < participants.size; i++)
	{
		if (participants.at(i).name == new_char.name)
		{
			flag = true;
		}
	}

	if (!flag)
	{
		participants.push_back(new_char);
	}
	else
	{
		throw "Character already exists";
	}
}

void Initiative::remove(string name)
{
	bool flag = false;
	for (int i = 0; i < participants.size; i++)
	{
		if (participants.at(i).name == name)
		{
			//might be wrong math
			participants.erase(participants.begin() + i);
			flag = true;
		}
	}

	if (flag)
	{
		throw "No such character";
	}
}

void Initiative::save(string filename)
{
	ofstream myfile;
	//assume filename already has '.txt' on it
	myfile.open(filename);
	for (int i = 0; i < participants.size; i++)
	{
		myfile << participants.at(i).tostring();
	}	
	myfile.close();
}

void Initiative::load(string filename)
{
}

void Initiative::damage(string name, int damage, char type)
{

}

void Initiative::heal(string name, int damage, char type)
{
}
