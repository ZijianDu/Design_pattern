#include <iostream>
#include <memory>
#include <string>
#include "Decoratorrow.h"

// constructor
Decoratorrow::Decoratorrow(unique_ptr<IDecorator> decorator) 
	:Decorator(move(decorator))
{
	cout << "Decorator row created" << endl;
	_type = "row";
	
}

// destructor
Decoratorrow::~Decoratorrow()
{
	cout << "Decorator row destoryed" << endl;
}

// get type
// decoratorrow has pointer to decorator instance hence _type can be modified through the pointer

string Decoratorrow::getType(string type)
{
	cout << "type from row" << type << endl;
	_type += type;
	_type += " ";
	return Decorator::getType(_type);
}