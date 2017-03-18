#include "character.h"

Character::Character(int ini, int phys_m, int phys_c, int stun_m, int stun_c) : initiative(ini), max_phys(phys_m), max_stun(stun_m), curr_phys(phys_c), curr_stun(stun_c)
{
}

Character::Character(const Character & copy) : initiative(copy.initiative), max_phys(copy.max_phys), max_stun(copy.max_stun), curr_phys(copy.curr_phys), curr_stun(copy.curr_stun)
{
}

Character::~Character()
{
}
