#include "pch.h"
#include "app.h"

void WinformsApplication::application::updateIntelligence(System::Object^ send, System::EventArgs^ e)
{
	int intelligenceScore = (int)charIntelligence->Value;
	int mod = (intelligenceScore - (intelligenceScore % 2) - 10) / 2;
	int pro = stoi(systostr(this->probonValue->Text));
	this->intMod->Text = this->strtosys(std::to_string(mod));
	if (intST->Checked)
	{
		intST->Text = strtosys(std::to_string(mod + pro));
	}
	else
	{
		intST->Text = strtosys(std::to_string(mod));
	}
	if (arcanaPro->Checked)
	{
		if (arcanaExp->Checked)
		{
			arcanaExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			arcanaExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (arcanaExp->Checked)
		{
			arcanaExp->Checked = false;
		}
		arcanaExp->Text = strtosys(std::to_string(mod));
	}
	if (historyPro->Checked)
	{
		if (historyExp->Checked)
		{
			historyExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			historyExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (historyExp->Checked)
		{
			historyExp->Checked = false;
		}
		historyExp->Text = strtosys(std::to_string(mod));
	}
	if (investigationPro->Checked)
	{
		if (investigationExp->Checked)
		{
			investigationExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			investigationExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (investigationExp->Checked)
		{
			investigationExp->Checked = false;
		}
		investigationExp->Text = strtosys(std::to_string(mod));
	}
	if (naturePro->Checked)
	{
		if (natureExp->Checked)
		{
			natureExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			natureExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (natureExp->Checked)
		{
			natureExp->Checked = false;
		}
		natureExp->Text = strtosys(std::to_string(mod));
	}
	if (religionPro->Checked)
	{
		if (religionExp->Checked)
		{
			religionExp->Text = strtosys(std::to_string(mod + pro + pro));
		}
		else
		{
			religionExp->Text = strtosys(std::to_string(mod + pro));
		}
	}
	else
	{
		if (religionExp->Checked)
		{
			religionExp->Checked = false;
		}
		religionExp->Text = strtosys(std::to_string(mod));
	}
}