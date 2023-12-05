#include "Header.h"


Pen::Pen(string _color, int _size) {
	if (_size <= 0 || _size == NULL) {
		throw("_size Can not be less or equal 0 or NULL");
	}
	color = _color;
	size = _size;
}

void Pen::PenPlot() {
	cout << "Plot with " << color << ", " << size << "px" << endl;
}

string Pen::getColor() {
	return this->color;
}
int Pen::getSize() {
	return size;
}

void Plotr::AddPen(string _color, int _size) {
	try {
		Pen pen = Pen(_color, _size);
		pens.push_back(&pen);
	}
	catch (const char* s) {
		throw(s);
	}
}

void Plotr::Plot(string _color, int _size) {
	for (Pen* pen : pens) {
		if (pen->color == _color && pen->size == _size) {
			pen->PenPlot();
			return;
		}
	}
	Pen p = Pen(_color, _size);
	pens.push_back(&p);
	p.PenPlot();
}

Plotr::Plotr() {
	pens.begin();
}
