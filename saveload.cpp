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
		}},
		{"hitPointMaximum", (int)this->hitPointMaximum->Value},
		{"currentHitPoints", (int)this->currentHitPoints->Value},
		{"temporaryHitPoints", (int)this->temporaryHitPoints->Value},
		{"armourClass", (int)this->armourClass->Value},
		{"initiativeModifier", (int)this->initiativeModifier->Value},
		{"movementSpeed", (int)this->movementSpeed->Value},
		{"equipment", {
			{"CP", (int)this->CP->Value},
			{"SP", (int)this->SP->Value},
			{"EP", (int)this->EP->Value},
			{"GP", (int)this->GP->Value},
			{"PP", (int)this->PP->Value},
			{"gems", systostr(this->gems->Text)},
			{"weapons", systostr(this->weapons->Text)},
			{"misc", systostr(this->misc->Text)}
		}},
		{"features", {
			{"backgroundFeatures", systostr(this->backgroundFeatures->Text)},
			{"raceFeatures", systostr(this->raceFeatures->Text)},
			{"classFeatures", systostr(this->classFeatures->Text)},
			{"otherFeatures", systostr(this->otherFeatures->Text)}
		}},
		{"spells", {
			{"spellSaveDC", (int)this->spellSaveDC->Value},
			{"spellAttackModifier", (int)this->spellAttackModifier->Value},
			{"level1TotalSlots", (int)this->level1TotalSlots->Value},
			{"level2TotalSlots", (int)this->level2TotalSlots->Value},
			{"level3TotalSlots", (int)this->level3TotalSlots->Value},
			{"level4TotalSlots", (int)this->level4TotalSlots->Value},
			{"level5TotalSlots", (int)this->level5TotalSlots->Value},
			{"level6TotalSlots", (int)this->level6TotalSlots->Value},
			{"level7TotalSlots", (int)this->level7TotalSlots->Value},
			{"level8TotalSlots", (int)this->level8TotalSlots->Value},
			{"level9TotalSlots", (int)this->level9TotalSlots->Value},
			{"level1UsedSlots", (int)this->level1UsedSlots->Value},
			{"level2UsedSlots", (int)this->level2UsedSlots->Value},
			{"level3UsedSlots", (int)this->level3UsedSlots->Value},
			{"level4UsedSlots", (int)this->level4UsedSlots->Value},
			{"level5UsedSlots", (int)this->level5UsedSlots->Value},
			{"level6UsedSlots", (int)this->level6UsedSlots->Value},
			{"level7UsedSlots", (int)this->level7UsedSlots->Value},
			{"level8UsedSlots", (int)this->level8UsedSlots->Value},
			{"level9UsedSlots", (int)this->level9UsedSlots->Value},
			{"cantripsKnown", systostr(this->cantripsKnown->Text)},
			{"spellsKnown", systostr(this->spellsKnown->Text)},
			{"spellComponents", systostr(this->spellComponents->Text)}
		}},
		{"notes", {
			{"notes1", systostr(this->notes1->Text)},
			{"notes2", systostr(this->notes2->Text)},
			{"notes3", systostr(this->notes3->Text)}
		}}
	};
	std::ofstream o("Data/Output/" + systostr(this->charName->Text) + ".json");
	o << std::setw(4) << character << std::endl;
	o.close();
}

void CppCLRWinformsProjekt::application::load(System::Object^ send, System::EventArgs^ e)
{
	loadCharacter(systostr(this->charName->Text));
}

void CppCLRWinformsProjekt::application::open(System::Object^ send, System::EventArgs^ e)
{
	loadCharacter(systostr(this->characterList->Text));
	this->charName->Text = this->characterList->Text;
}

void CppCLRWinformsProjekt::application::loadCharacter(std::string name)
{
	std::ifstream i("Data/Output/" + name + ".json");
	nlohmann::json character;
	i >> character;
	i.close();
	this->charBackground->SelectedIndex	= this->charBackground->Items->IndexOf(strtosys(character["charBackground"]));
	this->charLevel->Value				= (int)character["charLevel"];
	this->charAlignment->SelectedIndex	= this->charAlignment->Items->IndexOf(strtosys(character["charAlignment"]));
	this->charClass->SelectedIndex		= this->charClass->Items->IndexOf(strtosys(character["charClass"]));
	this->charSubclass->SelectedIndex	= this->charSubclass->Items->IndexOf(strtosys(character["charSubclass"]));
	this->charRace->SelectedIndex		= this->charRace->Items->IndexOf(strtosys(character["charRace"]));
	this->charSubrace->SelectedIndex	= this->charSubrace->Items->IndexOf(strtosys(character["charSubrace"]));
	this->charStrength->Value			= (int)character["abilityScores"]["charStrength"];
	this->charDexterity->Value			= (int)character["abilityScores"]["charDexterity"];
	this->charConstitution->Value		= (int)character["abilityScores"]["charConstitution"];
	this->charIntelligence->Value		= (int)character["abilityScores"]["charIntelligence"];
	this->charWisdom->Value				= (int)character["abilityScores"]["charWisdom"];
	this->charCharisma->Value			= (int)character["abilityScores"]["charCharisma"];
	this->strST->Checked				= character["savingThrows"]["strST"];
	this->dexST->Checked				= character["savingThrows"]["dexST"];
	this->conST->Checked				= character["savingThrows"]["conST"];
	this->intST->Checked				= character["savingThrows"]["intST"];
	this->wisST->Checked				= character["savingThrows"]["wisST"];
	this->chaST->Checked				= character["savingThrows"]["chaST"];
	this->acrobaticsPro->Checked		= character["skills"]["acrobatics"]["acrobaticsPro"];
	this->acrobaticsExp->Checked		= character["skills"]["acrobatics"]["acrobaticsExp"];
	this->animalhandlingPro->Checked	= character["skills"]["animalhandling"]["animalhandlingPro"];
	this->animalhandlingExp->Checked	= character["skills"]["animalhandling"]["animalhandlingExp"];
	this->arcanaPro->Checked			= character["skills"]["arcana"]["arcanaPro"];
	this->arcanaExp->Checked			= character["skills"]["arcana"]["arcanaExp"];
	this->athleticsPro->Checked			= character["skills"]["athletics"]["athleticsPro"];
	this->athleticsExp->Checked			= character["skills"]["athletics"]["athleticsExp"];
	this->deceptionPro->Checked			= character["skills"]["deception"]["deceptionPro"];
	this->deceptionExp->Checked			= character["skills"]["deception"]["deceptionExp"];
	this->historyPro->Checked			= character["skills"]["history"]["historyPro"];
	this->historyExp->Checked			= character["skills"]["history"]["historyExp"];
	this->insightPro->Checked			= character["skills"]["insight"]["insightPro"];
	this->insightExp->Checked			= character["skills"]["insight"]["insightExp"];
	this->intimidationPro->Checked		= character["skills"]["intimidation"]["intimidationPro"];
	this->intimidationExp->Checked		= character["skills"]["intimidation"]["intimidationExp"];
	this->investigationPro->Checked		= character["skills"]["investigation"]["investigationPro"];
	this->investigationExp->Checked		= character["skills"]["investigation"]["investigationExp"];
	this->medicinePro->Checked			= character["skills"]["medicine"]["medicinePro"];
	this->medicineExp->Checked			= character["skills"]["medicine"]["medicineExp"];
	this->naturePro->Checked			= character["skills"]["nature"]["naturePro"];
	this->natureExp->Checked			= character["skills"]["nature"]["natureExp"];
	this->perceptionPro->Checked		= character["skills"]["perception"]["perceptionPro"];
	this->perceptionExp->Checked		= character["skills"]["perception"]["perceptionExp"];
	this->performancePro->Checked		= character["skills"]["performance"]["performancePro"];
	this->performanceExp->Checked		= character["skills"]["performance"]["performanceExp"];
	this->persuasionPro->Checked		= character["skills"]["persuasion"]["persuasionPro"];
	this->persuasionExp->Checked		= character["skills"]["persuasion"]["persuasionExp"];
	this->religionPro->Checked			= character["skills"]["religion"]["religionPro"];
	this->religionExp->Checked			= character["skills"]["religion"]["religionExp"];
	this->sleightofhandPro->Checked		= character["skills"]["sleightofhand"]["sleightofhandPro"];
	this->sleightofhandExp->Checked		= character["skills"]["sleightofhand"]["sleightofhandExp"];
	this->stealthPro->Checked			= character["skills"]["stealth"]["stealthPro"];
	this->stealthExp->Checked			= character["skills"]["stealth"]["stealthExp"];
	this->survivalPro->Checked			= character["skills"]["survival"]["survivalPro"];
	this->survivalExp->Checked			= character["skills"]["survival"]["survivalExp"];
	this->hitPointMaximum->Value		= (int)character["hitPointMaximum"];
	this->currentHitPoints->Value		= (int)character["currentHitPoints"];
	this->temporaryHitPoints->Value		= (int)character["temporaryHitPoints"];
	this->armourClass->Value			= (int)character["armourClass"];
	this->initiativeModifier->Value		= (int)character["initiativeModifier"];
	this->movementSpeed->Value			= (int)character["movementSpeed"];
	this->CP->Value						= (int)character["equipment"]["CP"];
	this->SP->Value						= (int)character["equipment"]["SP"];
	this->EP->Value						= (int)character["equipment"]["EP"];
	this->GP->Value						= (int)character["equipment"]["GP"];
	this->PP->Value						= (int)character["equipment"]["PP"];
	this->gems->Text					= strtosys(character["equipment"]["gems"]);
	this->weapons->Text					= strtosys(character["equipment"]["weapons"]);
	this->misc->Text					= strtosys(character["equipment"]["misc"]);
	this->backgroundFeatures->Text		= strtosys(character["features"]["backgroundFeatures"]);
	this->raceFeatures->Text			= strtosys(character["features"]["raceFeatures"]);
	this->classFeatures->Text			= strtosys(character["features"]["classFeatures"]);
	this->otherFeatures->Text			= strtosys(character["features"]["otherFeatures"]);
	this->spellSaveDC->Value			= (int)character["spells"]["spellSaveDC"];
	this->spellAttackModifier->Value	= (int)character["spells"]["spellAttackModifier"];
	this->level1TotalSlots->Value		= (int)character["spells"]["level1TotalSlots"];
	this->level2TotalSlots->Value		= (int)character["spells"]["level2TotalSlots"];
	this->level3TotalSlots->Value		= (int)character["spells"]["level3TotalSlots"];
	this->level4TotalSlots->Value		= (int)character["spells"]["level4TotalSlots"];
	this->level5TotalSlots->Value		= (int)character["spells"]["level5TotalSlots"];
	this->level6TotalSlots->Value		= (int)character["spells"]["level6TotalSlots"];
	this->level7TotalSlots->Value		= (int)character["spells"]["level7TotalSlots"];
	this->level8TotalSlots->Value		= (int)character["spells"]["level8TotalSlots"];
	this->level9TotalSlots->Value		= (int)character["spells"]["level9TotalSlots"];
	this->level1UsedSlots->Value		= (int)character["spells"]["level1UsedSlots"];
	this->level2UsedSlots->Value		= (int)character["spells"]["level2UsedSlots"];
	this->level3UsedSlots->Value		= (int)character["spells"]["level3UsedSlots"];
	this->level4UsedSlots->Value		= (int)character["spells"]["level4UsedSlots"];
	this->level5UsedSlots->Value		= (int)character["spells"]["level5UsedSlots"];
	this->level6UsedSlots->Value		= (int)character["spells"]["level6UsedSlots"];
	this->level7UsedSlots->Value		= (int)character["spells"]["level7UsedSlots"];
	this->level8UsedSlots->Value		= (int)character["spells"]["level8UsedSlots"];
	this->level9UsedSlots->Value		= (int)character["spells"]["level9UsedSlots"];
	this->cantripsKnown->Text			= strtosys(character["spells"]["cantripsKnown"]);
	this->spellsKnown->Text				= strtosys(character["spells"]["spellsKnown"]);
	this->spellComponents->Text			= strtosys(character["spells"]["spellComponents"]);
	this->notes1->Text					= strtosys(character["notes"]["notes1"]);
	this->notes2->Text					= strtosys(character["notes"]["notes2"]);
	this->notes3->Text					= strtosys(character["notes"]["notes3"]);
}

void CppCLRWinformsProjekt::application::deleteCharacter(System::Object^ send, System::EventArgs^ e)
{

}