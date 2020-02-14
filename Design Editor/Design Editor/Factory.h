// abstract factory pattern is used for encapsulation of the property, style in this case to be applied at run time
#include <iostream>
#include <string>
using namespace std;


class GUIFactory
{
public:
	string stylename;
	GUIFactory(string style)
	{

	}

	virtual ~GUIFactory(); 
};

class MotifFactory :GUIFactory
{
public: 
	MotifFactory();
	MotifScrollBar createScrollBar();
	MotifButton createButton();
	MotifMenu createMenu();
	~MotifFactory()
	{

	};
};

class PMFactory :GUIFactory
{
public:
	PMFactory();
	PMScrollBar createScrollBar();
	PMButton createButton();
	PMMenu createMenu();
	~PMFactory()
	{

	};
};

class MacFactory :GUIFactory
{
public:
	MacFactory();
	MacScrollBar createScrollBar();
	MacButton createButton();
	MacMenu createMenu();
	~MacFactory()
	{

	};
};