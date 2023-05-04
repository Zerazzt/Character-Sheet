#include "pch.h"
#include "app.h"

void WinformsApplication::application::createSavingThrows(void)
{
	this->probonLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->probonLabel);
	this->probonLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->probonLabel->Location = System::Drawing::Point(85, 75);
	this->probonLabel->Size = System::Drawing::Size(120, 20);
	this->probonLabel->Name = L"probonLabel";
	this->probonLabel->Text = L"Proficiency Bonus:";
	this->Controls->Add(this->probonLabel);

	this->probonValue = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->probonValue);
	this->probonValue->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->probonValue->Location = System::Drawing::Point(205, 75);
	this->probonValue->Size = System::Drawing::Size(10, 20);
	this->probonValue->Name = L"probonValue";
	this->probonValue->Text = L"0";
	this->Controls->Add(this->probonValue);

	this->strST = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->strST);
	this->strST->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->strST->Location = System::Drawing::Point(90, 95);
	this->strST->Size = System::Drawing::Size(45, 20);
	this->strST->Name = L"strST";
	this->strST->Text = L"-5";
	this->strST->CheckStateChanged += gcnew System::EventHandler(this, &WinformsApplication::application::updateStrength);
	this->Controls->Add(this->strST);

	this->strSTLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->strSTLabel);
	this->strSTLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->strSTLabel->Location = System::Drawing::Point(135, 95);
	this->strSTLabel->Size = System::Drawing::Size(60, 20);
	this->strSTLabel->Name = L"strSTLabel";
	this->strSTLabel->Text = L"Strength";
	this->Controls->Add(this->strSTLabel);

	this->dexST = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->dexST);
	this->dexST->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->dexST->Location = System::Drawing::Point(90, 112);
	this->dexST->Size = System::Drawing::Size(45, 20);
	this->dexST->Name = L"dexST";
	this->dexST->Text = L"-5";
	this->dexST->CheckStateChanged += gcnew System::EventHandler(this, &WinformsApplication::application::updateDexterity);
	this->Controls->Add(this->dexST);

	this->dexSTLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->dexSTLabel);
	this->dexSTLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->dexSTLabel->Location = System::Drawing::Point(135, 112);
	this->dexSTLabel->Size = System::Drawing::Size(70, 20);
	this->dexSTLabel->Name = L"dexSTLabel";
	this->dexSTLabel->Text = L"Dexterity";
	this->Controls->Add(this->dexSTLabel);

	this->conST = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->conST);
	this->conST->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->conST->Location = System::Drawing::Point(90, 129);
	this->conST->Size = System::Drawing::Size(45, 20);
	this->conST->Name = L"conST";
	this->conST->Text = L"-5";
	this->conST->CheckStateChanged += gcnew System::EventHandler(this, &WinformsApplication::application::updateConstitution);
	this->Controls->Add(this->conST);

	this->conSTLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->conSTLabel);
	this->conSTLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->conSTLabel->Location = System::Drawing::Point(135, 129);
	this->conSTLabel->Size = System::Drawing::Size(80, 20);
	this->conSTLabel->Name = L"conSTLabel";
	this->conSTLabel->Text = L"Constitution";
	this->Controls->Add(this->conSTLabel);

	this->intST = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->intST);
	this->intST->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->intST->Location = System::Drawing::Point(90, 146);
	this->intST->Size = System::Drawing::Size(45, 20);
	this->intST->Name = L"intST";
	this->intST->Text = L"-5";
	this->intST->CheckStateChanged += gcnew System::EventHandler(this, &WinformsApplication::application::updateIntelligence);
	this->Controls->Add(this->intST);

	this->intSTLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->intSTLabel);
	this->intSTLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->intSTLabel->Location = System::Drawing::Point(135, 146);
	this->intSTLabel->Size = System::Drawing::Size(80, 20);
	this->intSTLabel->Name = L"intSTLabel";
	this->intSTLabel->Text = L"Intelligence";
	this->Controls->Add(this->intSTLabel);

	this->wisST = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->wisST);
	this->wisST->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->wisST->Location = System::Drawing::Point(90, 163);
	this->wisST->Size = System::Drawing::Size(45, 20);
	this->wisST->Name = L"wisST";
	this->wisST->Text = L"-5";
	this->wisST->CheckStateChanged += gcnew System::EventHandler(this, &WinformsApplication::application::updateWisdom);
	this->Controls->Add(this->wisST);

	this->wisSTLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->wisSTLabel);
	this->wisSTLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->wisSTLabel->Location = System::Drawing::Point(135, 163);
	this->wisSTLabel->Size = System::Drawing::Size(60, 20);
	this->wisSTLabel->Name = L"wisSTLabel";
	this->wisSTLabel->Text = L"Wisdom";
	this->Controls->Add(this->wisSTLabel);

	this->chaST = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->chaST);
	this->chaST->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->chaST->Location = System::Drawing::Point(90, 180);
	this->chaST->Size = System::Drawing::Size(45, 20);
	this->chaST->Name = L"chaST";
	this->chaST->Text = L"-5";
	this->chaST->CheckStateChanged += gcnew System::EventHandler(this, &WinformsApplication::application::updateCharisma);
	this->Controls->Add(this->chaST);

	this->chaSTLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->chaSTLabel);
	this->chaSTLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->chaSTLabel->Location = System::Drawing::Point(135, 180);
	this->chaSTLabel->Size = System::Drawing::Size(70, 20);
	this->chaSTLabel->Name = L"chaSTLabel";
	this->chaSTLabel->Text = L"Charisma";
	this->Controls->Add(this->chaSTLabel);
}