#pragma once
#include <string>
#include <list>
using namespace std;

class Format {
public:
	virtual string getFormated(string _text) = 0;
};
class Bolt : public Format {
public:
	string getFormated(string _text);
};
class Italic : public Format {
public:
	string getFormated(string _text);
};
class Odstavec : public Format{
private:
	string color;
public:
	Odstavec(string _color) : color(_color) { ; }
	//Odstavec() : color((string)NULL) { ; }
	string getFormated(string _text);
};

class Editor {
private:
	string text;
	list<Format *> forms;
public:
	Editor(string _text) :text(_text) { ; }
	std::string getFinalTextStyle();
	void setFormat(Format* _form);
};