#pragma once

#include "Base.h"

class Derived :	public Base
{
public:
	Derived(int var);
	~Derived();

	void show();
	static void ddd(){}


private:

	int Derived_var;
};

