///////////////////////////////////////////////////////////
//  TBank.h
//  Implementation of the Class TBank
//  Created on:      01-Nov-2012 18:19:10
//  Original author: Runge
///////////////////////////////////////////////////////////

#if !defined(EA_ABC9D122_9EC7_4555_A420_8FA79E39912F__INCLUDED_)
#define EA_ABC9D122_9EC7_4555_A420_8FA79E39912F__INCLUDED_

#include <string>

#include "TAccount.h"

class TAccount;
class TBank
{
private:
	string name;
	unsigned BLZ;
	static TAccount *accountList[];
	int accountCounter;
public:
	TBank(string,unsigned);
	virtual ~TBank();
	void setAccountCounter(int accountCounter);
	static const TAccount**& getAccountList() const;
	unsigned getBlz() const;
	void setBlz(unsigned blz);
	const string& getName() const;
	void setName(const string& name);
	void print();
};
#endif // !defined(EA_ABC9D122_9EC7_4555_A420_8FA79E39912F__INCLUDED_)
