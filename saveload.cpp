#include "pch.h"
#include "app.h"
#include "json.hpp"
#include <fstream>
#include <iomanip>

void CppCLRWinformsProjekt::application::saveCharacter(System::Object^ send, System::EventArgs^ e)
{
	nlohmann::json character = {
		{"charLevel", (int)this->charLevel->Value},
		{"charBackground", systostr(this->charBackground->Text)},
		{"charAlignment", systostr(this->charAlignment->Text)},
		{"charClass", systostr(this->charClass->Text)},
		{"charSubclass", systostr(this->charSubclass->Text)},
		{"charRace", systostr(this->charRace->Text)},
		{"charSubrace", systostr(this->charSubrace->Text)}
	};
	std::ofstream o("Data/Output/file.json");
	o << std::setw(4) << character << std::endl;
	o.close();
}

void CppCLRWinformsProjekt::application::loadCharacter(System::Object^ send, System::EventArgs^ e)
{
	std::ifstream i("Data/Output/file.json");
	nlohmann::json character;
	i >> character;
	i.close();
	this->charLevel->Value = (int)character["charLevel"];
	this->charBackground->SelectedIndex = this->charBackground->Items->IndexOf(strtosys(character["charBackground"]));
	this->charAlignment->SelectedIndex = this->charAlignment->Items->IndexOf(strtosys(character["charAlignment"]));
	this->charClass->SelectedIndex = this->charClass->Items->IndexOf(strtosys(character["charClass"]));
	this->charSubclass->SelectedIndex = this->charSubclass->Items->IndexOf(strtosys(character["charSubclass"]));
	this->charRace->SelectedIndex = this->charRace->Items->IndexOf(strtosys(character["charRace"]));
	this->charSubrace->SelectedIndex = this->charSubrace->Items->IndexOf(strtosys(character["charSubrace"]));
}