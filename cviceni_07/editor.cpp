#include "editor.h"

string Editor::getFinalTextStyle() {
	for (auto el : forms) {
		text = el->getFormated(text);
	}
	return text;
}
void Editor::setFormat(Format* form) {
	forms.push_back(form);
}

string Bolt::getFormated(string _text) {
	return "<b>" + _text + "</b>";
}
string Italic::getFormated(string _text) {
	return "<i>" + _text + "</i>";
}
string Odstavec::getFormated(string _text) {
	string result = "<p style=\"";
	//if (color == (string)NULL) {
		result = result + "color: " + color +";";
	//}
	result = result + "\">" + _text + "</p>";
	return result;
}
