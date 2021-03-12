#include "pch.h"
#include "Form1.h"

void CppCLRWinformsProjekt::Form1::InitializeFormBody(void)
{
	this->components = gcnew System::ComponentModel::Container();
	this->Size = System::Drawing::Size(300, 300);
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
	this->SuspendLayout();
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->components->Add(button1);
	this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
	this->button1->Location = System::Drawing::Point(835, 5);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(150, 20);
	this->button1->TabIndex = 9;
	this->button1->Text = L"Button 1";
	this->Controls->Add(this->button1);
}