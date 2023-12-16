#pragma once
#include <string>
#include <list>
using namespace std;

template class T;

class Validate {
private:
	string tagType;
public:
	Validate() {};
	bool Validated() {};
};


class Autocomplete {
private:
	string tagType;
	string Value;
public:
	Autocomplete() {};
	virtual string GetAutocompleted(string value);
};

class Tag {
protected:
	string Name;
	string Value;
	Autocomplete* autocompleteValue;
public:
	Tag() {};
	bool IsCompleted();
	virtual void ValidateData() {};
	virtual string GetHTMLcode() {};
};

class Input : public Tag {
private:
	string Type;
public:
	Input(string _type) {};
	//string Autocomplete() {};
	void ValidateData() {};
	string GetHTMLcode() {};
};



//s uèitelem

class autocomplete {
protected:
public:
	void complete(model* m);
};

class validator {
public:
	virtual bool valid(model* value);
};

class in_vlaidator : public validator {
public:
	bool valid();
};

class range_validator : public validator {
public:
	bool valid();
};

class model {
private:
	list<validator *> validators;
public:
	void set_value(string value);
	void* get_value();
};

class int_model : public model {
public: 
	int* get_value();
};

class FormElement {
protected:
	model* m;
	string name;
public:
	virtual string GetHTML();
	void set_model(model* _m) {
		this->m = _m;

	}
};

class input : public FormElement {
private:

public:
};