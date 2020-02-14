#pragma once
#include<iostream>
#include "Glyph.h"
using namespace std;

class Glyph
{
public:
	string type;
	Glyph();
	virtual ~Glyph();
};

class ScrollBar :Glyph
{
public:
	void ScrollTo(int line);
};

class Button :Glyph
{
public:
	void Press();
};

class Menu :Glyph
{
public:
	void Popup();
}; 

class MotifScrollBar :public ScrollBar
{

};

class MacScrollBar : public ScrollBar
{

};

class PMScrollBar : public ScrollBar
{

};

