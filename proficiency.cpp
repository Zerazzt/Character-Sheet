#include "pch.h"
#include "app.h"

void WinformsApplication::application::setLevel(System::Object^ send, System::EventArgs^ e)
{
	int level = (int)this->charLevel->Value;
	int pro = (level - (level - 1) % 4 + 8) / 4;
	this->probonValue->Text = strtosys(std::to_string(pro));
	this->updateStrength(send, e);
	this->updateDexterity(send, e);
	this->updateConstitution(send, e);
	this->updateIntelligence(send, e);
	this->updateWisdom(send, e);
	this->updateCharisma(send, e);
}