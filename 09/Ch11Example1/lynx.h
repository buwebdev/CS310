#ifndef H_lynx
#define H_lynx

#include <string>; 
#include "leopard.h"; 

using namespace std;

class lynx : public leopard
{
public:
	lynx(string name) : leopard(name)
	{}

	void purr(); 
};

#endif // !H_leopard.h

