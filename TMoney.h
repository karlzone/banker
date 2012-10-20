/*
 * TMoney.h
 *
 *  Created on: 18 Oct 2012
 *      Author: karsten
 */

#ifndef TMONEY_H_
#define TMONEY_H_

using namespace std;

#include <stdio.h>
#include <string>


class TMoney {
private:
	double amount;
	string currency;
public:
	TMoney();
	virtual ~TMoney();

	void setAmount();
	double getAmount();
	void setCurrency();
	string getCurrency();
};

#endif /* TMONEY_H_ */
