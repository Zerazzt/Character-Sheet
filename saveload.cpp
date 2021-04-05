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
		{"charSubrace", systostr(this->charSubrace->Text)},
		{"charStrength", (int)this->charStrength->Value},
		{"charDexterity", (int)this->charDexterity->Value},
		{"charConstitution", (int)this->charConstitution->Value},
		{"charIntelligence", (int)this->charIntelligence->Value},
		{"charWisdom", (int)this->charWisdom->Value},
		{"charCharisma", (int)this->charCharisma->Value}
	};
	std::ofstream o("Data/Output/" + systostr(this->charName->Text) + ".json");
	o << std::setw(4) << character << std::endl;
	o.close();
}

void CppCLRWinformsProjekt::application::loadCharacter(System::Object^ send, System::EventArgs^ e)
{
	std::ifstream i("Data/Output/" + systostr(this->charName->Text) + ".json");
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
	this->charStrength->Value = (int)character["charStrength"];
	this->charDexterity->Value = (int)character["charDexterity"];
	this->charConstitution->Value = (int)character["charConstitution"];
	this->charIntelligence->Value = (int)character["charIntelligence"];
	this->charWisdom->Value = (int)character["charWisdom"];
	this->charCharisma->Value = (int)character["charCharisma"];
}