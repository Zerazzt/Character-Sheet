#include "pch.h"
#include "app.h"

void CppCLRWinformsProjekt::application::createPanelButtons(void)
{
	this->equipmentButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->equipmentButton);
	this->equipmentButton->Location = System::Drawing::Point(500, 55);
	this->equipmentButton->Size = System::Drawing::Size(100, 20);
	this->equipmentButton->Name = L"equipmentButton";
	this->equipmentButton->Text = L"Equipment";
	this->Controls->Add(this->equipmentButton);

	this->featuresButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->featuresButton);
	this->featuresButton->Location = System::Drawing::Point(600, 55);
	this->featuresButton->Size = System::Drawing::Size(100, 20);
	this->featuresButton->Name = L"featuresButton";
	this->featuresButton->Text = L"Features";
	this->Controls->Add(this->featuresButton);

	this->spellsButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->spellsButton);
	this->spellsButton->Location = System::Drawing::Point(700, 55);
	this->spellsButton->Size = System::Drawing::Size(100, 20);
	this->spellsButton->Name = L"spellsButton";
	this->spellsButton->Text = L"Spells";
	this->Controls->Add(this->spellsButton);

	this->notesButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->notesButton);
	this->notesButton->Location = System::Drawing::Point(800, 55);
	this->notesButton->Size = System::Drawing::Size(100, 20);
	this->notesButton->Name = L"notesButton";
	this->notesButton->Text = L"Notes";
	this->Controls->Add(this->notesButton);
}