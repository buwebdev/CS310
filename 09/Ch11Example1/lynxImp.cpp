#include <string>;
#include "lynx.h";
#include "leopard.h";

using namespace std;

void lynx::purr()
{
	string name = leopard::getName(); 

	cout << "  " << name << ": purrrr" << endl; 
}
