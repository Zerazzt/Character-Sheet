#include "pch.h"
#include "app.h"

void CppCLRWinformsProjekt::application::updateDexterity(System::Object^ send, System::EventArgs^ e)
{
	int dexterityScore = (int)charDexterity->Value;
	int mod = (dexterityScore - (dexterityScore % 2) - 10) / 2;
	int pro = stoi(systostr(this->probonValue->Text));
	this->dexMod->Text = this->strtosys(std::to_string(mod));
	if (dexST->Checked)
	{
		dexST->Text = strtosys(std::to_string(mod + pro));
	}
	else
	{
		dexST->Text = strtosys(std::to_string(mod));
	}
	if (acrobaticsPro->Checked)
	{
		if (acrobaticsExp->Checked)
		{
			acrobaticsExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			acrobaticsExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (acrobaticsExp->Checked)
		{
			acrobaticsExp->Checked = false;
		}
		acrobaticsExp->Text = strtosys(std::to_string(mod));
	}
	if (sleightofhandPro->Checked)
	{
		if (sleightofhandExp->Checked)
		{
			sleightofhandExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			sleightofhandExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (sleightofhandExp->Checked)
		{
			sleightofhandExp->Checked = false;
		}
		sleightofhandExp->Text = strtosys(std::to_string(mod));
	}
	if (stealthPro->Checked)
	{
		if (stealthExp->Checked)
		{
			stealthExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			stealthExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (stealthExp->Checked)
		{
			stealthExp->Checked = false;
		}
		stealthExp->Text = strtosys(std::to_string(mod));
	}
}