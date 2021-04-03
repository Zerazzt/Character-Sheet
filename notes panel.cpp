#include "pch.h"
#include "app.h"

void CppCLRWinformsProjekt::application::createNotesPanel(void)
{
	this->notesPanel = (gcnew System::Windows::Forms::Panel());
	this->components->Add(this->notesPanel);
	this->notesPanel->Location = System::Drawing::Point(0, 0);
	this->notesPanel->Size = System::Drawing::Size(1266, 639);
	this->notesPanel->Name = L"notesPanel";
	this->Controls->Add(this->notesPanel);

	this->notes1 = (gcnew System::Windows::Forms::TextBox());
	this->notes1->Multiline = true;
	this->notes1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->notes1->Location = System::Drawing::Point(500, 75);
	this->notes1->Size = System::Drawing::Size(245, 500);
	this->notes1->Name = L"notes1";

	this->notes2 = (gcnew System::Windows::Forms::TextBox());
	this->notes2->Multiline = true;
	this->notes2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->notes2->Location = System::Drawing::Point(750, 75);
	this->notes2->Size = System::Drawing::Size(245, 500);
	this->notes2->Name = L"notes2";

	this->notes3 = (gcnew System::Windows::Forms::TextBox());
	this->notes3->Multiline = true;
	this->notes3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->notes3->Location = System::Drawing::Point(1000, 75);
	this->notes3->Size = System::Drawing::Size(245, 500);
	this->notes3->Name = L"notes3";

	this->notesPanel->Controls->Add(this->notes1);
	this->notesPanel->Controls->Add(this->notes2);
	this->notesPanel->Controls->Add(this->notes3);

	this->notesPanel->Visible = false;
}