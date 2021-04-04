#include "pch.h"
#include "app.h"

int random(int min, int max)
{
	if (max == 0 || max == -1)
	{
		return max;
	}
	return rand() % (max - min + 1) + min;
}

void CppCLRWinformsProjekt::application::randomizeAll(System::Object^ send, System::EventArgs^ e)
{
	randomizeBackground(send, e);
	randomizeAlignment(send, e);
	randomizeClass(send, e);
	randomizeRace(send, e);
}

void CppCLRWinformsProjekt::application::randomizeBackground(System::Object^ send, System::EventArgs^ e)
{
	this->charBackground->SelectedIndex = random(0, this->charBackground->Items->Count - 1);
}

void CppCLRWinformsProjekt::application::randomizeAlignment(System::Object^ send, System::EventArgs^ e)
{
	this->charAlignment->SelectedIndex = random(0, this->charAlignment->Items->Count - 1);
}

void CppCLRWinformsProjekt::application::randomizeClass(System::Object^ send, System::EventArgs^ e)
{
	this->charClass->SelectedIndex = random(0, this->charClass->Items->Count - 1);
	this->charSubclass->SelectedIndex = random(0, this->charSubclass->Items->Count - 1);
}

void CppCLRWinformsProjekt::application::randomizeRace(System::Object^ send, System::EventArgs^ e)
{
	this->charRace->SelectedIndex = random(0, this->charRace->Items->Count - 1);
	this->charSubrace->SelectedIndex = random(0, this->charSubrace->Items->Count - 1);
}

int generateScore()
{
	int sum, lowest, next;
	next = random(1, 6);
	sum = next;
	lowest = next;
	for (int i = 1; i < 4; ++i)
	{
		next = random(1, 6);
		sum += next;
		if (next < lowest)
		{
			lowest = next;
		}
	}
	return sum - lowest;
}

void CppCLRWinformsProjekt::application::generateAbilityScores(System::Object^ send, System::EventArgs^ e)
{
	this->charStrength->Value = generateScore();
	this->charDexterity->Value = generateScore();
	this->charConstitution->Value = generateScore();
	this->charIntelligence->Value = generateScore();
	this->charWisdom->Value = generateScore();
	this->charCharisma->Value = generateScore();
}

void CppCLRWinformsProjekt::application::rolld4(System::Object^ send, System::EventArgs^ e)
{
	if (this->nd4->Value == 0)
	{
		this->d4Result->Text = L"0";
		return;
	}
	int total = 0;
	int roll;
	for (int i = 1; i < (int)this->nd4->Value; ++i)
	{
		roll = random(1, 4);
		total += roll;
		this->diceResults->Text += this->strtosys(std::to_string(roll) + ", ");
	}
	roll = random(1, 4);
	total += roll;
	this->diceResults->Text += this->strtosys(std::to_string(roll)) + System::Environment::NewLine + System::Environment::NewLine;
	this->d4Result->Text = this->strtosys(std::to_string(total));
}

void CppCLRWinformsProjekt::application::rolld6(System::Object^ send, System::EventArgs^ e)
{
	if (this->nd6->Value == 0)
	{
		this->d6Result->Text = L"0";
		return;
	}
	int total = 0;
	int roll;
	for (int i = 1; i < (int)this->nd6->Value; ++i)
	{
		roll = random(1, 6);
		total += roll;
		this->diceResults->Text += this->strtosys(std::to_string(roll) + ", ");
	}
	roll = random(1, 6);
	total += roll;
	this->diceResults->Text += this->strtosys(std::to_string(roll)) + System::Environment::NewLine + System::Environment::NewLine;
	this->d6Result->Text = this->strtosys(std::to_string(total));
}

void CppCLRWinformsProjekt::application::rolld8(System::Object^ send, System::EventArgs^ e)
{
	if (this->nd8->Value == 0)
	{
		this->d8Result->Text = L"0";
		return;
	}
	int total = 0;
	int roll;
	for (int i = 1; i < (int)this->nd8->Value; ++i)
	{
		roll = random(1, 8);
		total += roll;
		this->diceResults->Text += this->strtosys(std::to_string(roll) + ", ");
	}
	roll = random(1, 8);
	total += roll;
	this->diceResults->Text += this->strtosys(std::to_string(roll)) + System::Environment::NewLine + System::Environment::NewLine;
	this->d8Result->Text = this->strtosys(std::to_string(total));
}

void CppCLRWinformsProjekt::application::rolld10(System::Object^ send, System::EventArgs^ e)
{
	if (this->nd10->Value == 0)
	{
		this->d10Result->Text = L"0";
		return;
	}
	int total = 0;
	int roll;
	for (int i = 1; i < (int)this->nd10->Value; ++i)
	{
		roll = random(1, 10);
		total += roll;
		this->diceResults->Text += this->strtosys(std::to_string(roll) + ", ");
	}
	roll = random(1, 10);
	total += roll;
	this->diceResults->Text += this->strtosys(std::to_string(roll)) + System::Environment::NewLine + System::Environment::NewLine;
	this->d10Result->Text = this->strtosys(std::to_string(total));
}

void CppCLRWinformsProjekt::application::rolld12(System::Object^ send, System::EventArgs^ e)
{
	if (this->nd12->Value == 0)
	{
		this->d12Result->Text = L"0";
		return;
	}
	int total = 0;
	int roll;
	for (int i = 1; i < (int)this->nd12->Value; ++i)
	{
		roll = random(1, 12);
		total += roll;
		this->diceResults->Text += this->strtosys(std::to_string(roll) + ", ");
	}
	roll = random(1, 12);
	total += roll;
	this->diceResults->Text += this->strtosys(std::to_string(roll)) + System::Environment::NewLine + System::Environment::NewLine;
	this->d12Result->Text = this->strtosys(std::to_string(total));
}

void CppCLRWinformsProjekt::application::rolld20(System::Object^ send, System::EventArgs^ e)
{
	if (this->nd20->Value == 0)
	{
		this->d20Result->Text = L"0";
		return;
	}
	int total = 0;
	int roll;
	for (int i = 1; i < (int)this->nd20->Value; ++i)
	{
		roll = random(1, 20);
		total += roll;
		this->diceResults->Text += this->strtosys(std::to_string(roll) + ", ");
	}
	roll = random(1, 20);
	total += roll;
	this->diceResults->Text += this->strtosys(std::to_string(roll)) + System::Environment::NewLine + System::Environment::NewLine;
	this->d20Result->Text = this->strtosys(std::to_string(total));
}

void CppCLRWinformsProjekt::application::rolld100(System::Object^ send, System::EventArgs^ e)
{
	if (this->nd100->Value == 0)
	{
		this->d100Result->Text = L"0";
		return;
	}
	int total = 0;
	int roll;
	for (int i = 1; i < (int)this->nd100->Value; ++i)
	{
		roll = random(1, 100);
		total += roll;
		this->diceResults->Text += this->strtosys(std::to_string(roll) + ", ");
	}
	roll = random(1, 100);
	total += roll;
	this->diceResults->Text += this->strtosys(std::to_string(roll)) + System::Environment::NewLine + System::Environment::NewLine;
	this->d100Result->Text = this->strtosys(std::to_string(total));
}

void CppCLRWinformsProjekt::application::rolldX(System::Object^ send, System::EventArgs^ e)
{
	if (this->ndX->Value == 0)
	{
		this->dXResult->Text = L"0";
		return;
	}
	int total = 0;
	int roll;
	for (int i = 1; i < (int)this->ndX->Value; ++i)
	{
		roll = random(1, (int)this->dXValue->Value);
		total += roll;
		this->diceResults->Text += this->strtosys(std::to_string(roll) + ", ");
	}
	roll = random(1, (int)this->dXValue->Value);
	total += roll;
	this->diceResults->Text += this->strtosys(std::to_string(roll)) + System::Environment::NewLine + System::Environment::NewLine;
	this->dXResult->Text = this->strtosys(std::to_string(total));	
}