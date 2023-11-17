
#ifndef H_leopard
#define H_leopard

#include <iostream>; 
#include <string>; 

using namespace std; 

class leopard
{
public:
	leopard(string n)
	{
		name = n;
	}

	void hiss(); 
	string getName(); 

private:
	string name;
};

#endif // !H_leopard
