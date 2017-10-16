#pragma once

#include <iostream>
using namespace std;


class Base
{
public:

	Base(int var);
	virtual ~Base();

	virtual void show();//

private:

	int Base_var;

};

