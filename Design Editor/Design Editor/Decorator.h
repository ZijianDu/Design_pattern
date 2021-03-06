// header file for decorator
#include <memory>
#include "IDecorator.h"
using namespace std;

// Decorator delcaration
class Decorator : public IDecorator;
{
public:
	Decorator(unique_ptr<IDecorator> decorator = nullptr);
	// virtual destructor for polymophic behavior
	virtual ~Decorator();
	// every subtype has different behavior
	virtual string getType(string type) 
		override;

private:
	// private field for type and pointer to IDecorator class
	string _type;
	unique_ptr<IDecorator> _decorator;
};