#include "pch.h"
#include "app.h"

void CppCLRWinformsProjekt::application::createPanelButtons(void)
{
	this->noneButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->noneButton);
	this->noneButton->Location = System::Drawing::Point(500, 575);
	this->noneButton->Size = System::Drawing::Size(100, 20);
	this->noneButton->Name = L"noneButton";
	this->noneButton->Text = L"None";
	this->noneButton->Click += gcnew System::EventHandler(this, &CppCLRWinformsProjekt::application::setPanelNone);
	this->Controls->Add(this->noneButton);

	this->equipmentButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->equipmentButton);
	this->equipmentButton->Location = System::Drawing::Point(600, 575);
	this->equipmentButton->Size = System::Drawing::Size(100, 20);
	this->equipmentButton->Name = L"equipmentButton";
	this->equipmentButton->Text = L"Equipment";
	this->equipmentButton->Click += gcnew System::EventHandler(this, &CppCLRWinformsProjekt::application::setPanelEquipment);
	this->Controls->Add(this->equipmentButton);

	this->featuresButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->featuresButton);
	this->featuresButton->Location = System::Drawing::Point(700, 575);
	this->featuresButton->Size = System::Drawing::Size(100, 20);
	this->featuresButton->Name = L"featuresButton";
	this->featuresButton->Text = L"Features";
	this->featuresButton->Click += gcnew System::EventHandler(this, &CppCLRWinformsProjekt::application::setPanelFeatures);
	this->Controls->Add(this->featuresButton);

	this->spellsButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->spellsButton);
	this->spellsButton->Location = System::Drawing::Point(800, 575);
	this->spellsButton->Size = System::Drawing::Size(100, 20);
	this->spellsButton->Name = L"spellsButton";
	this->spellsButton->Text = L"Spells";
	this->spellsButton->Click += gcnew System::EventHandler(this, &CppCLRWinformsProjekt::application::setPanelSpells);
	this->Controls->Add(this->spellsButton);

	this->notesButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->notesButton);
	this->notesButton->Location = System::Drawing::Point(900, 575);
	this->notesButton->Size = System::Drawing::Size(100, 20);
	this->notesButton->Name = L"notesButton";
	this->notesButton->Text = L"Notes";
	this->notesButton->Click += gcnew System::EventHandler(this, &CppCLRWinformsProjekt::application::setPanelNotes);
	this->Controls->Add(this->notesButton);

	this->charactersButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->charactersButton);
	this->charactersButton->Location = System::Drawing::Point(1000, 575);
	this->charactersButton->Size = System::Drawing::Size(100, 20);
	this->charactersButton->Name = L"charactersButton";
	this->charactersButton->Text = L"Characters";
	this->charactersButton->Click += gcnew System::EventHandler(this, &CppCLRWinformsProjekt::application::setPanelCharacters);
	this->Controls->Add(this->charactersButton);
}

void CppCLRWinformsProjekt::application::setPanelNone(System::Object^ send, System::EventArgs^ e)
{
	this->equipmentPanel->Visible = false;
	this->featuresPanel->Visible = false;
	this->spellsPanel->Visible = false;
	this->notesPanel->Visible = false;
	this->charactersPanel->Visible = false;
}

void CppCLRWinformsProjekt::application::setPanelEquipment(System::Object^ send, System::EventArgs^ e)
{
	this->featuresPanel->Visible = false;
	this->spellsPanel->Visible = false;
	this->notesPanel->Visible = false;
	this->charactersPanel->Visible = false;

	this->equipmentPanel->Visible = true;
}

void CppCLRWinformsProjekt::application::setPanelFeatures(System::Object^ send, System::EventArgs^ e)
{
	this->equipmentPanel->Visible = false;
	this->spellsPanel->Visible = false;
	this->notesPanel->Visible = false;
	this->charactersPanel->Visible = false;

	this->featuresPanel->Visible = true;
}

void CppCLRWinformsProjekt::application::setPanelSpells(System::Object^ send, System::EventArgs^ e)
{
	this->equipmentPanel->Visible = false;
	this->featuresPanel->Visible = false;
	this->notesPanel->Visible = false;
	this->charactersPanel->Visible = false;

	this->spellsPanel->Visible = true;
}

void CppCLRWinformsProjekt::application::setPanelNotes(System::Object^ send, System::EventArgs^ e)
{
	this->equipmentPanel->Visible = false;
	this->featuresPanel->Visible = false;
	this->spellsPanel->Visible = false;
	this->charactersPanel->Visible = false;

	this->notesPanel->Visible = true;
}

void CppCLRWinformsProjekt::application::setPanelCharacters(System::Object^ send, System::EventArgs^ e)
{
	this->equipmentPanel->Visible = false;
	this->featuresPanel->Visible = false;
	this->spellsPanel->Visible = false;
	this->notesPanel->Visible = false;

	this->charactersPanel->Visible = true;
}