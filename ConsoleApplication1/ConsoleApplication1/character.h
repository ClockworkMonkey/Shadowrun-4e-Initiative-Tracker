#ifndef _CHARACTER_
#define _CHARACTER_

#include "D6.h"
#include <string>

using std::string;

class Character
{
public:
	Character(int ini, int phys_m, int phys_c, int stun_m, int stun_c, string name_);
	Character(const Character & copy);
	~Character();

	string tostring();

	string name;
	int initiative;
	int max_stun;
	int curr_stun;
	int max_phys;
	int curr_phys;
};

#endif
