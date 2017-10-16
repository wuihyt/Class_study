#include "Derived.h"



Derived::Derived(int var) : Derived_var(var), Base(var)
{
	cout << "Derived construct !" << endl;

}


Derived::~Derived()
{
	cout << "Derived destroy !" << endl;

}

void Derived::show()
{
	cout << "I am a Derived objiect" << endl;
}