#include "pch.h"
#include "app.h"

void WinformsApplication::application::updateConstitution(System::Object^ send, System::EventArgs^ e)
{
	int constitutionScore = (int)charConstitution->Value;
	int mod = (constitutionScore - (constitutionScore % 2) - 10) / 2;
	int pro = stoi(systostr(this->probonValue->Text));
	this->conMod->Text = this->strtosys(std::to_string(mod));
	if (conST->Checked)
	{
		conST->Text = strtosys(std::to_string(mod + pro));
	}
	else
	{
		conST->Text = strtosys(std::to_string(mod));
	}
}