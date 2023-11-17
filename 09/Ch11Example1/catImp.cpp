#include <string>; 
#include "cat.h";
#include "leopard.h"; 

using namespace std;

void cat::meow()
{
	cout << "  " << leopard::getName() << ": meow" << endl;
}
