//*************************************************************************
//@author: zijiandu   zijiandu@asml.com
//@an example of designing a text editor using design pattern
//@date: 02/13/2020
//*************************************************************************

// Glyphs class, formatting class, recursive compositon, composition and compositor, decorator


#include <memory>
#include <iostream>
#include <string>
#include "Decorator.h"

using namespace std;
// constructor
Decorator::Decorator(unique_ptr<IDecorator> decorator) :_decorator(move(decorator))
{
	cout << "Decorator created." << endl;
}

Decorator::~Decorator()
{
	cout << "Decorator destoryed" << endl;
}

double Decorator::getWeight(double weight)
{
	cout << "Weight from decorator." << endl;
	_weight += weight;
	return _decorator->getWeight(_weight);
}