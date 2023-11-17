#ifndef H_cat
#define H_cat

#include <string>; 
#include "leopard.h";

using namespace std;

class cat : public leopard
{
public:
	cat(string name) : leopard(name)
	{}

	void meow();
};

#endif // !H_cat

