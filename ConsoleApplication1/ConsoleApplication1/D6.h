#ifndef _D6_
#define _D6_

#include <string>
#include <time.h>
#include <stdlib.h>

using std::string;
using std::to_string;
using std::rand;
using std::srand;


class D6
{
public:
	D6();
	D6(const D6 & copy);
	~D6();

	string roll_sr(int num_dice, bool edge);

private:

};

#endif
