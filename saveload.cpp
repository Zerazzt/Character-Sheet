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
		{"abilityScores", {
			{"charStrength", (int)this->charStrength->Value},
			{"charDexterity", (int)this->charDexterity->Value},
			{"charConstitution", (int)this->charConstitution->Value},
			{"charIntelligence", (int)this->charIntelligence->Value},
			{"charWisdom", (int)this->charWisdom->Value},
			{"charCharisma", (int)this->charCharisma->Value}
		}},
		{"savingThrows",{
			{"strST", this->strST->Checked},
			{"dexST", this->dexST->Checked},
			{"conST", this->conST->Checked},
			{"intST", this->intST->Checked},
			{"wisST", this->wisST->Checked},
			{"chaST", this->chaST->Checked}
		}},
		{"skills", {
			{"acrobatics", {
				{"acrobaticsPro", this->acrobaticsPro->Checked},
				{"acrobaticsExp", this->acrobaticsExp->Checked}
			}},
			{"animalhandling", {
				{"animalhandlingPro", this->animalhandlingPro->Checked},
				{"animalhandlingExp", this->animalhandlingExp->Checked}
			}},
			{"arcana", {
				{"arcanaPro", this->arcanaPro->Checked},
				{"arcanaExp", this->arcanaExp->Checked}
			}},
			{"athletics", {
				{"athleticsPro", this->athleticsPro->Checked},
				{"athleticsExp", this->athleticsExp->Checked}
			}},
			{"deception", {
				{"deceptionPro", this->deceptionPro->Checked},
				{"deceptionExp", this->deceptionExp->Checked}
			}},
			{"history", {
				{"historyPro", this->historyPro->Checked},
				{"historyExp", this->historyExp->Checked}
			}},
			{"insight", {
				{"insightPro", this->insightPro->Checked},
				{"insightExp", this->insightExp->Checked}
			}},
			{"intimidation", {
				{"intimidationPro", this->intimidationPro->Checked},
				{"intimidationExp", this->intimidationExp->Checked}
			}},
			{"investigation", {
				{"investigationPro", this->investigationPro->Checked},
				{"investigationExp", this->investigationExp->Checked}
			}},
			{"medicine", {
				{"medicinePro", this->medicinePro->Checked},
				{"medicineExp", this->medicineExp->Checked}
			}},
			{"nature", {
				{"naturePro", this->naturePro->Checked},
				{"natureExp", this->natureExp->Checked}
			}},
			{"perception", {
				{"perceptionPro", this->perceptionPro->Checked},
				{"perceptionExp", this->perceptionExp->Checked}
			}},
			{"performance", {
				{"performancePro", this->performancePro->Checked},
				{"performanceExp", this->performanceExp->Checked}
			}},
			{"persuasion", {
				{"persuasionPro", this->persuasionPro->Checked},
				{"persuasionExp", this->persuasionExp->Checked}
			}},
			{"religion", {
				{"religionPro", this->religionPro->Checked},
				{"religionExp", this->religionExp->Checked}
			}},
			{"sleightofhand", {
				{"sleightofhandPro", this->sleightofhandPro->Checked},
				{"sleightofhandExp", this->sleightofhandExp->Checked}
			}},
			{"stealth", {
				{"stealthPro", this->stealthPro->Checked},
				{"stealthExp", this->stealthExp->Checked}
			}},
			{"survival", {
				{"survivalPro", this->survivalPro->Checked},
				{"survivalExp", this->survivalExp->Checked}
			}}
		}}
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
	this->charStrength->Value = (int)character["abilityScores"]["charStrength"];
	this->charDexterity->Value = (int)character["abilityScores"]["charDexterity"];
	this->charConstitution->Value = (int)character["abilityScores"]["charConstitution"];
	this->charIntelligence->Value = (int)character["abilityScores"]["charIntelligence"];
	this->charWisdom->Value = (int)character["abilityScores"]["charWisdom"];
	this->charCharisma->Value = (int)character["abilityScores"]["charCharisma"];
	this->strST->Checked = character["savingThrows"]["strST"];
	this->dexST->Checked = character["savingThrows"]["dexST"];
	this->conST->Checked = character["savingThrows"]["conST"];
	this->intST->Checked = character["savingThrows"]["intST"];
	this->wisST->Checked = character["savingThrows"]["wisST"];
	this->chaST->Checked = character["savingThrows"]["chaST"];
	this->acrobaticsPro->Checked = character["skills"]["acrobatics"]["acrobaticsPro"];
	this->acrobaticsExp->Checked = character["skills"]["acrobatics"]["acrobaticsExp"];
	this->animalhandlingPro->Checked = character["skills"]["animalhandling"]["animalhandlingPro"];
	this->animalhandlingExp->Checked = character["skills"]["animalhandling"]["animalhandlingExp"];
	this->arcanaPro->Checked = character["skills"]["arcana"]["arcanaPro"];
	this->arcanaExp->Checked = character["skills"]["arcana"]["arcanaExp"];
	this->athleticsPro->Checked = character["skills"]["athletics"]["athleticsPro"];
	this->athleticsExp->Checked = character["skills"]["athletics"]["athleticsExp"];
	this->deceptionPro->Checked = character["skills"]["deception"]["deceptionPro"];
	this->deceptionExp->Checked = character["skills"]["deception"]["deceptionExp"];
	this->historyPro->Checked = character["skills"]["history"]["historyPro"];
	this->historyExp->Checked = character["skills"]["history"]["historyExp"];
	this->insightPro->Checked = character["skills"]["insight"]["insightPro"];
	this->insightExp->Checked = character["skills"]["insight"]["insightExp"];
	this->intimidationPro->Checked = character["skills"]["intimidation"]["intimidationPro"];
	this->intimidationExp->Checked = character["skills"]["intimidation"]["intimidationExp"];
	this->investigationPro->Checked = character["skills"]["investigation"]["investigationPro"];
	this->investigationExp->Checked = character["skills"]["investigation"]["investigationExp"];
	this->medicinePro->Checked = character["skills"]["medicine"]["medicinePro"];
	this->medicineExp->Checked = character["skills"]["medicine"]["medicineExp"];
	this->naturePro->Checked = character["skills"]["nature"]["naturePro"];
	this->natureExp->Checked = character["skills"]["nature"]["natureExp"];
	this->perceptionPro->Checked = character["skills"]["perception"]["perceptionPro"];
	this->perceptionExp->Checked = character["skills"]["perception"]["perceptionExp"];
	this->performancePro->Checked = character["skills"]["performance"]["performancePro"];
	this->performanceExp->Checked = character["skills"]["performance"]["performanceExp"];
	this->persuasionPro->Checked = character["skills"]["persuasion"]["persuasionPro"];
	this->persuasionExp->Checked = character["skills"]["persuasion"]["persuasionExp"];
	this->religionPro->Checked = character["skills"]["religion"]["religionPro"];
	this->religionExp->Checked = character["skills"]["religion"]["religionExp"];
	this->sleightofhandPro->Checked = character["skills"]["sleightofhand"]["sleightofhandPro"];
	this->sleightofhandExp->Checked = character["skills"]["sleightofhand"]["sleightofhandExp"];
	this->stealthPro->Checked = character["skills"]["stealth"]["stealthPro"];
	this->stealthExp->Checked = character["skills"]["stealth"]["stealthExp"];
	this->survivalPro->Checked = character["skills"]["survival"]["survivalPro"];
	this->survivalExp->Checked = character["skills"]["survival"]["survivalExp"];
}