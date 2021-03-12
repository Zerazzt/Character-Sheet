#include "pch.h"
#include "Form1.h"

void CppCLRWinformsProjekt::Form1::InitializeFormBody(void)
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
}

void CppCLRWinformsProjekt::Form1::createLoadBar(void) {
	this->RandomizeAll = (gcnew System::Windows::Forms::Button());
	this->RandomizeBackground = (gcnew System::Windows::Forms::Button());
	this->RandomizeClass = (gcnew System::Windows::Forms::Button());
	this->RandomizeRace = (gcnew System::Windows::Forms::Button());
	this->Save = (gcnew System::Windows::Forms::Button());
	this->Load = (gcnew System::Windows::Forms::Button());

	this->components->Add(RandomizeAll);
	this->components->Add(RandomizeBackground);
	this->components->Add(RandomizeClass);
	this->components->Add(RandomizeRace);
	this->components->Add(Save);
	this->components->Add(Load);

	this->RandomizeAll->FlatStyle = System::Windows::Forms::FlatStyle::System;
	this->RandomizeBackground->FlatStyle = System::Windows::Forms::FlatStyle::System;
	this->RandomizeClass->FlatStyle = System::Windows::Forms::FlatStyle::System;
	this->RandomizeRace->FlatStyle = System::Windows::Forms::FlatStyle::System;
	this->Save->FlatStyle = System::Windows::Forms::FlatStyle::System;
	this->Load->FlatStyle = System::Windows::Forms::FlatStyle::System;

	this->RandomizeAll->Location = System::Drawing::Point(835, 5);
	this->RandomizeBackground->Location = System::Drawing::Point(835, 30);
	this->RandomizeClass->Location = System::Drawing::Point(990, 5);
	this->RandomizeRace->Location = System::Drawing::Point(990, 30);
	this->Save->Location = System::Drawing::Point(1145, 5);
	this->Load->Location = System::Drawing::Point(1145, 30);

	this->RandomizeAll->Size = System::Drawing::Size(150, 20);
	this->RandomizeBackground->Size = System::Drawing::Size(150, 20);
	this->RandomizeClass->Size = System::Drawing::Size(150, 20);
	this->RandomizeRace->Size = System::Drawing::Size(150, 20);
	this->Save->Size = System::Drawing::Size(100, 20);
	this->Load->Size = System::Drawing::Size(100, 20);

	this->RandomizeAll->TabIndex = 0;
	this->RandomizeBackground->TabIndex = 0;
	this->RandomizeClass->TabIndex = 0;
	this->RandomizeRace->TabIndex = 0;
	this->Save->TabIndex = 0;
	this->Load->TabIndex = 0;

	this->RandomizeAll->Name = L"RandomizeAll";
	this->RandomizeAll->Text = L"Randomize All";
	this->RandomizeBackground->Name = L"RandomizeBackground";
	this->RandomizeBackground->Text = L"Randomize Background";
	this->RandomizeClass->Name = L"RandomizeClass";
	this->RandomizeClass->Text = L"Randomize Class";
	this->RandomizeRace->Name = L"RandomizeRace";
	this->RandomizeRace->Text = L"Randomize Race";
	this->Save->Name = L"Save";
	this->Save->Text = L"Save";
	this->Load->Name = L"Load";
	this->Load->Text = L"Load";

	this->Controls->Add(this->RandomizeAll);
	this->Controls->Add(this->RandomizeBackground);
	this->Controls->Add(this->RandomizeClass);
	this->Controls->Add(this->RandomizeRace);
	this->Controls->Add(this->Save);
	this->Controls->Add(this->Load);
}