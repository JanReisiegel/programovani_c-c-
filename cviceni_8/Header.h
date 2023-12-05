#pragma once
#include <list>
#include <string>
#include <iostream>

using namespace std;

class Pen {
public:
	string color;
	int size;
public:
	Pen(string _color, int _size);
	void PenPlot();
	string getColor();
	int getSize();
};

class Plotr {
private:
	list<Pen *> pens;
public:
	Plotr();
	void Plot(string _color, int _size);
	void AddPen(string _color, int _size);
};