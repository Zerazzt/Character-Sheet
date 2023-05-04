#include "pch.h"
#include "app.h"
#include <fstream>

void WinformsApplication::application::setClass(System::Object^ send, System::EventArgs^ e)
{
	std::string line;
	std::ifstream subclassFile;
	subclassFile.open("Data/Input/ClassInfo/" + this->systostr(this->charClass->Text) + "Subclasses.txt");
	if (subclassFile.fail())
	{
		this->notes1->Text += "Failed to load subclass file.";
	}
	this->charSubclass->Items->Clear();
	while (!subclassFile.eof())
	{
		while (getline(subclassFile, line))
		{
			this->charSubclass->Items->Add(this->strtosys(line));
		}
		subclassFile.close();
	}
}