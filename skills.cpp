#include "pch.h"
#include "app.h"

void CppCLRWinformsProjekt::application::createSkills(void)
{
	this->acrobaticsPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->acrobaticsPro);
	this->acrobaticsPro->Location = System::Drawing::Point(90, 215);
	this->acrobaticsPro->Size = System::Drawing::Size(20, 20);
	this->acrobaticsPro->TabIndex = 0;
	this->acrobaticsPro->Name = L"acrobaticsPro";
	this->Controls->Add(this->acrobaticsPro);

	this->acrobaticsExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->acrobaticsExp);
	this->acrobaticsExp->Location = System::Drawing::Point(110, 215);
	this->acrobaticsExp->Size = System::Drawing::Size(35, 20);
	this->acrobaticsExp->TabIndex = 0;
	this->acrobaticsExp->Name = L"acrobaticsExp";
	this->acrobaticsExp->Text = L"-5";
	this->Controls->Add(this->acrobaticsExp);

	this->acrobaticsLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->acrobaticsLabel);
	this->acrobaticsLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->acrobaticsLabel->Location = System::Drawing::Point(145, 215);
	this->acrobaticsLabel->Size = System::Drawing::Size(120, 20);
	this->acrobaticsLabel->TabIndex = 0;
	this->acrobaticsLabel->Name = L"acrobaticsLabel";
	this->acrobaticsLabel->Text = L"Acrobatics (Dex)";
	this->Controls->Add(this->acrobaticsLabel);
}