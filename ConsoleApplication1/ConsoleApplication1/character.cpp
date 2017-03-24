#include "character.h"

Character::Character(int ini, int phys_m, int phys_c, int stun_m, int stun_c, string name_) : initiative(ini), max_phys(phys_m), max_stun(stun_m), curr_phys(phys_c), curr_stun(stun_c), name(name_)
{
}

Character::Character(const Character & copy) : initiative(copy.initiative), max_phys(copy.max_phys), max_stun(copy.max_stun), curr_phys(copy.curr_phys), curr_stun(copy.curr_stun), name(copy.name)
{
}

Character::~Character()
{
}

string Character::tostring()
{
	string output = "";

	output = name + ":" + to_string(initiative) + ":" + to_string(max_phys) + ":" + to_string(curr_phys) + ":" + to_string(max_stun) + ":" + to_string(curr_stun) + "\n";

	return output;
}
