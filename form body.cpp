#include "pch.h"
#include "app.h"
#include <fstream>

void CppCLRWinformsProjekt::application::InitializeFormBody(void)
{
	this->components = gcnew System::ComponentModel::Container();
	this->Name = L"Character_Sheet";
	this->Text = L"Character Sheet";
	this->Padding = System::Windows::Forms::Padding(0);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	this->MaximizeBox = false;
	this->MaximumSize = System::Drawing::Size(1266, 639);
	this->MinimumSize = System::Drawing::Size(1266, 639);
	this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Load += gcnew System::EventHandler(this, &CppCLRWinformsProjekt::application::onFormLoad);
}

void CppCLRWinformsProjekt::application::onFormLoad(System::Object^ send, System::EventArgs^ e)
{
	srand(time(NULL));
	std::string line;
	std::ifstream backgroundFile;
	backgroundFile.open("Data/Input/BackgroundOptions.txt");
	if (backgroundFile.fail())
	{
		this->notes1->Text += L"Failed to load background file.";
	}
	while (!backgroundFile.eof())
	{
		while (getline(backgroundFile, line))
		{
			this->charBackground->Items->Add(this->strtosys(line));
		}
		backgroundFile.close();
	}
	
	std::ifstream alignmentFile;
	alignmentFile.open("Data/Input/AlignmentOptions.txt");
	if (alignmentFile.fail())
	{
		this->notes1->Text += L"Failed to load alignment file.";
	}
	while (!alignmentFile.eof())
	{
		while (getline(alignmentFile, line))
		{
			this->charAlignment->Items->Add(this->strtosys(line));
		}
		alignmentFile.close();
	}

	std::ifstream classFile;
	classFile.open("Data/Input/ClassOptions.txt");
	if (classFile.fail())
	{
		this->notes1->Text += L"Failed to load class file.";
	}
	while (!classFile.eof())
	{
		while (getline(classFile, line))
		{
			this->charClass->Items->Add(this->strtosys(line));
		}
		classFile.close();
	}

	std::ifstream raceFile;
	raceFile.open("Data/Input/RaceOptions.txt");
	if (raceFile.fail())
	{
		this->notes1->Text += L"Failed to open race file.";
	}
	while (!raceFile.eof())
	{
		while (getline(raceFile, line))
		{
			this->charRace->Items->Add(this->strtosys(line));
		}
		raceFile.close();
	}
	std::ifstream characterFile;
	characterFile.open("Data/Input/Characters.txt");
	if (characterFile.fail())
	{
		this->notes1->Text += L"Failed to open character file.";
	}
	while (!characterFile.eof())
	{
		while (getline(characterFile, line))
		{
			this->characterList->Items->Add(this->strtosys(line));
		}
		characterFile.close();
	}
}