#include "pch.h"
#include "app.h"

void WinformsApplication::application::updateCharisma(System::Object^ send, System::EventArgs^ e)
{
	int charismaScore = (int)charCharisma->Value; // Store the character's ability score
	int mod = (charismaScore - (charismaScore % 2) - 10) / 2; // Calculate the ability modifier
	int pro = stoi(systostr(this->probonValue->Text)); // Store the character's proficiency bonus
	this->chaMod->Text = this->strtosys(std::to_string(mod)); // Set the text of the appropriate element to the calculated modifier

	if (chaST->Checked) // If the character has proficiency in saving throws:
	{
		chaST->Text = strtosys(std::to_string(mod + pro)); // Set the text of the appropriate element to include both the modifier and the proficiency bonus
	}
	else // Otherwise:
	{
		chaST->Text = strtosys(std::to_string(mod)); // Set the text of the appropriate element to include only the modifier
	}

	// Modifycing skill check bonuses
	if (deceptionPro->Checked)
	{
		if (deceptionExp->Checked)
		{
			deceptionExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			deceptionExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (deceptionExp->Checked)
		{
			deceptionExp->Checked = false;
		}
		deceptionExp->Text = strtosys(std::to_string(mod));
	}
	if (intimidationPro->Checked)
	{
		if (intimidationExp->Checked)
		{
			intimidationExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			intimidationExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (intimidationExp->Checked)
		{
			intimidationExp->Checked = false;
		}
		intimidationExp->Text = strtosys(std::to_string(mod));
	}
	if (performancePro->Checked)
	{
		if (performanceExp->Checked)
		{
			performanceExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			performanceExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (performanceExp->Checked)
		{
			performanceExp->Checked = false;
		}
		performanceExp->Text = strtosys(std::to_string(mod));
	}
	if (persuasionPro->Checked)
	{
		if (persuasionExp->Checked)
		{
			persuasionExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			persuasionExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (persuasionExp->Checked)
		{
			persuasionExp->Checked = false;
		}
		persuasionExp->Text = strtosys(std::to_string(mod));
	}
}