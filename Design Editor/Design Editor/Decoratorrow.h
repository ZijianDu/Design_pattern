#include <memory>
#include <string>
#include "Decorator.h"
using namespace std;

// decoratorrow
class Decoratorrow :public Decorator
{

	public:
		Decoratorrow(unique_ptr<IDecorator>decorator = nullptr);
		~Decoratorrow();

		string getType(string type) override;

private:
	string _type;
};