#include "pch.h"
#include "app.h"

void CppCLRWinformsProjekt::application::updateStrength(System::Object^ send, System::EventArgs^ e)
{
	int strengthScore = (int)charStrength->Value;
	int mod = (strengthScore - (strengthScore % 2) - 10) / 2;
	int pro = stoi(systostr(this->probonValue->Text));
	this->strMod->Text = this->strtosys(std::to_string(mod));
	if (strST->Checked)
	{
		strST->Text = strtosys(std::to_string(mod + pro));
	}
	else
	{
		strST->Text = strtosys(std::to_string(mod));
	}
	if (athleticsPro->Checked)
	{
		if (athleticsExp->Checked)
		{
			athleticsExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			athleticsExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (athleticsExp->Checked)
		{
			athleticsExp->Checked = false;
		}
		athleticsExp->Text = strtosys(std::to_string(mod));
	}
}