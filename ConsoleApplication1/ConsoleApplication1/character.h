#ifndef _CHARACTER_
#define _CHARACTER_

#include "Dice.h"

class Character
{
public:
	Character(int ini, int phys_m, int phys_c, int stun_m, int stun_c);
	Character(const Character & copy);
	~Character();



private:
	int initiative;
	int max_stun;
	int curr_stun;
	int max_phys;
	int curr_phys;
};

#endif
