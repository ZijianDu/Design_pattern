#include "Factory.h"

#pragma once
#include <iostream>
#include <string>
using namespace std;


class GUIFactory
{
public:
	string stylename;
	GUIFactory()
	{
		this->stylename = " ";
	}
	virtual ~GUIFactory();
};

class MotifFactory:GUIFactory
{
public:
	MotifFactory()
	{
		this->stylename = "Motif";
	}
	MotifScrollBar createScrollBar()
	{
		cout << "created motifscrollbar" << endl;
	};
	
	MotifButton createButton();
	{
		 cout << "created motifbutton" << endl;
	};
	
	MotifMenu createMenu();
	{
		cout << "created motifmenu" << endl;
	};
};

class PMFactory:GUIFactory
{
public:
	PMFactory()
	{
		this->stylename = "PM";
	};

	PMScrollBar createScrollBar()
	{
		cout << "created PMscrollbar" << endl;
	};

	PMButton createButton()
	{
		cout << "created PMbutton" << endl;
	};

	PMMenu createMenu()
	{
		cout << "created PMmenu" << endl;
	};

	~PMFactory()
	{

	};
};

class MacFactory :GUIFactory
{
public:
	MacFactory()
	{
		this->stylename = "Mac";
	};

	MacScrollBar createScrollBar()
	{
		cout << "created Macscrollbar" << endl;
	};
	MacButton createButton()
	{
		cout << "created Macbutton" << endl;
	};
	MacMenu createMenu()
	{
		cout << "created Macmenu" << endl;
	};
	~MacFactory()
	{

	};
};