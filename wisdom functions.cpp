#include "pch.h"
#include "app.h"

void WinformsApplication::application::updateWisdom(System::Object^ send, System::EventArgs^ e)
{
	int wisdomScore = (int)charWisdom->Value;
	int mod = (wisdomScore - (wisdomScore % 2) - 10) / 2;
	int pro = stoi(systostr(this->probonValue->Text));
	this->wisMod->Text = this->strtosys(std::to_string(mod));
	if (wisST->Checked)
	{
		wisST->Text = strtosys(std::to_string(mod + pro));
	}
	else
	{
		wisST->Text = strtosys(std::to_string(mod));
	}
	if (animalhandlingPro->Checked)
	{
		if (animalhandlingExp->Checked)
		{
			animalhandlingExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			animalhandlingExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (animalhandlingExp->Checked)
		{
			animalhandlingExp->Checked = false;
		}
		animalhandlingExp->Text = strtosys(std::to_string(mod));
	}
	if (insightPro->Checked)
	{
		if (insightExp->Checked)
		{
			insightExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			insightExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (insightExp->Checked)
		{
			insightExp->Checked = false;
		}
		insightExp->Text = strtosys(std::to_string(mod));
	}
	if (medicinePro->Checked)
	{
		if (medicineExp->Checked)
		{
			medicineExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			medicineExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (medicineExp->Checked)
		{
			medicineExp->Checked = false;
		}
		medicineExp->Text = strtosys(std::to_string(mod));
	}
	if (perceptionPro->Checked)
	{
		if (perceptionExp->Checked)
		{
			perceptionExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			perceptionExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (perceptionExp->Checked)
		{
			perceptionExp->Checked = false;
		}
		perceptionExp->Text = strtosys(std::to_string(mod));
	}
	if (survivalPro->Checked)
	{
		if (survivalExp->Checked)
		{
			survivalExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			survivalExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (survivalExp->Checked)
		{
			survivalExp->Checked = false;
		}
		survivalExp->Text = strtosys(std::to_string(mod));
	}
}