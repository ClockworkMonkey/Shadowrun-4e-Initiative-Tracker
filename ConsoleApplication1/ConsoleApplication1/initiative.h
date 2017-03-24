#ifndef _INITIATIVE_
#define _INITIATIVE_

#include <vector>
#include "character.h"
#include "D6.h"

using std::vector;

class Initiative
{
public:
	Initiative();	
	Initiative(vector<Character> chars);
	Initiative(const Initiative & copy);
	~Initiative();
	
	//add to list

	//remove from list

	//save list

	//load list

	//damage

	//heal

	//main loop

	//menu - called at beginning of main loop
	// and also each time a combat ends
	// 1:new combat with current participants;
	// 2:add new participant
	// 3:remove participant (print a list, remove by index #
	// 4:save current character list to file
	// 5:load character list from file

	//turn

	//pass

	//init

private:
	vector<Character> participants;
	vector<Character> init_order;
	int pass;
	int turn;

};

#endif
