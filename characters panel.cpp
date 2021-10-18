#include "pch.h"
#include "app.h"

void CppCLRWinformsProjekt::application::createCharactersPanel(void)
{
	this->charactersPanel = (gcnew System::Windows::Forms::Panel());
	this->components->Add(this->charactersPanel);
	this->charactersPanel->Location = System::Drawing::Point(0, 0);
	this->charactersPanel->Size = System::Drawing::Size(1266, 639);
	this->charactersPanel->Name = L"charactersPanel";
	this->Controls->Add(this->charactersPanel);

	this->characterList = (gcnew System::Windows::Forms::ComboBox());
	this->components->Add(this->characterList);
	this->characterList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::Simple;
	this->characterList->Location = System::Drawing::Point(500, 75);
	this->characterList->Size = System::Drawing::Size(600, 500);
	this->characterList->Name = L"characterList";
	this->Controls->Add(this->characterList);

	this->openButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->openButton);
	this->openButton->Location = System::Drawing::Point(1105, 75);
	this->openButton->Size = System::Drawing::Size(100, 20);
	this->openButton->Name = L"openButton";
	this->openButton->Text = L"Open";
	this->openButton->Click += gcnew System::EventHandler(this, &CppCLRWinformsProjekt::application::open);
	this->Controls->Add(this->openButton);
	
	this->deleteButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->deleteButton);
	this->deleteButton->Location = System::Drawing::Point(1105, 100);
	this->deleteButton->Size = System::Drawing::Size(100, 20);
	this->deleteButton->Name = L"deleteButton";
	this->deleteButton->Text = L"Delete";
	this->Controls->Add(this->deleteButton);

	this->charactersPanel->Controls->Add(this->characterList);
	this->charactersPanel->Controls->Add(this->openButton);
	this->charactersPanel->Controls->Add(this->deleteButton);

	this->charactersPanel->Visible = false;
}