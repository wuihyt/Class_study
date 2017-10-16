
#include "Base.h"

Base::Base(int var) : Base_var(var)
{
	cout << "Base construct !" << endl;

}


Base::~Base()
{
	cout << "Base destroy !" << endl;

}

void Base::show()
{
	cout << "I am a Base objiect" << endl;
}
