#include <memory>
#include <string>
using namespace std;

// IDecorator

class IDecortor
{
public:
	// virtual for 
	virtual ~IDecorator() {};
	virtual string getType(string type) = 0;

};