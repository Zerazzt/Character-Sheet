#include "pch.h"
#include "app.h"

void WinformsApplication::application::createLoadBar(void)
{
	this->NameLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(NameLabel);
	this->NameLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->NameLabel->Location = System::Drawing::Point(5, 5);
	this->NameLabel->Size = System::Drawing::Size(50, 20);
	this->NameLabel->Name = L"nameLabel";
	this->NameLabel->Text = L"Name:";
	this->Controls->Add(this->NameLabel);

	this->charName = (gcnew System::Windows::Forms::TextBox());
	this->charName->BackColor = System::Drawing::SystemColors::MenuBar;
	this->charName->Location = System::Drawing::Point(60, 5);
	this->charName->Name = L"charName";
	this->charName->Size = System::Drawing::Size(120, 20);
	this->Controls->Add(this->charName);

	this->LevelLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(LevelLabel);
	this->LevelLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->LevelLabel->Location = System::Drawing::Point(5, 30);
	this->LevelLabel->Size = System::Drawing::Size(50, 20);
	this->LevelLabel->Name = L"LevelLabel";
	this->LevelLabel->Text = L"Level:";
	this->Controls->Add(this->LevelLabel);

	this->charLevel = (gcnew System::Windows::Forms::NumericUpDown());
	this->charLevel->Location = System::Drawing::Point(60, 30);
	this->charLevel->Name = L"level";
	this->charLevel->Size = System::Drawing::Size(120, 20);
	this->charLevel->ValueChanged += gcnew System::EventHandler(this, &WinformsApplication::application::setLevel);
	this->Controls->Add(this->charLevel);

	this->BackgroundLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(BackgroundLabel);
	this->BackgroundLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->BackgroundLabel->Location = System::Drawing::Point(185, 5);
	this->BackgroundLabel->Size = System::Drawing::Size(85, 20);
	this->BackgroundLabel->Name = L"BackgroundLabel";
	this->BackgroundLabel->Text = L"Background:";
	this->Controls->Add(this->BackgroundLabel);

	this->charBackground = (gcnew System::Windows::Forms::ComboBox());
	this->charBackground->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->charBackground->FormattingEnabled = true;
	this->charBackground->Location = System::Drawing::Point(275, 5);
	this->charBackground->Name = L"charBackground";
	this->charBackground->Size = System::Drawing::Size(120, 21);
	this->Controls->Add(this->charBackground);

	this->AlignmentLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(AlignmentLabel);
	this->AlignmentLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->AlignmentLabel->Location = System::Drawing::Point(185, 30);
	this->AlignmentLabel->Size = System::Drawing::Size(85, 20);
	this->AlignmentLabel->Name = L"AlignmentLabel";
	this->AlignmentLabel->Text = L"Alignment:";
	this->Controls->Add(this->AlignmentLabel);

	this->charAlignment = (gcnew System::Windows::Forms::ComboBox());
	this->charAlignment->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->charAlignment->FormattingEnabled = true;
	this->charAlignment->Location = System::Drawing::Point(275, 30);
	this->charAlignment->Name = L"charAlignment";
	this->charAlignment->Size = System::Drawing::Size(120, 21);
	this->Controls->Add(this->charAlignment);

	this->ClassLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(ClassLabel);
	this->ClassLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->ClassLabel->Location = System::Drawing::Point(400, 5);
	this->ClassLabel->Size = System::Drawing::Size(65, 20);
	this->ClassLabel->Name = L"ClassLabel";
	this->ClassLabel->Text = L"Class:";
	this->Controls->Add(this->ClassLabel);
	
	this->charClass = (gcnew System::Windows::Forms::ComboBox());
	this->charClass->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->charClass->FormattingEnabled = true;
	this->charClass->Location = System::Drawing::Point(470, 5);
	this->charClass->Name = L"charClass";
	this->charClass->Size = System::Drawing::Size(120, 21);
	this->charClass->SelectedIndexChanged += gcnew System::EventHandler(this, &WinformsApplication::application::setClass);
	this->Controls->Add(this->charClass);

	this->SubclassLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(SubclassLabel);
	this->SubclassLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->SubclassLabel->Location = System::Drawing::Point(400, 30);
	this->SubclassLabel->Size = System::Drawing::Size(65, 20);
	this->SubclassLabel->Name = L"SubclassLabel";
	this->SubclassLabel->Text = L"Subclass:";
	this->Controls->Add(this->SubclassLabel);

	this->charSubclass = (gcnew System::Windows::Forms::ComboBox());
	this->charSubclass->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->charSubclass->FormattingEnabled = true;
	this->charSubclass->Location = System::Drawing::Point(470, 30);
	this->charSubclass->Name = L"charSubclass";
	this->charSubclass->Size = System::Drawing::Size(120, 21);
	this->Controls->Add(this->charSubclass);
	
	this->RaceLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(RaceLabel);
	this->RaceLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->RaceLabel->Location = System::Drawing::Point(595, 5);
	this->RaceLabel->Size = System::Drawing::Size(60, 20);
	this->RaceLabel->Name = L"RaceLabel";
	this->RaceLabel->Text = L"Race:";
	this->Controls->Add(this->RaceLabel);

	this->charRace = (gcnew System::Windows::Forms::ComboBox());
	this->charRace->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->charRace->FormattingEnabled = true;
	this->charRace->Location = System::Drawing::Point(660, 5);
	this->charRace->Name = L"charRace";
	this->charRace->Size = System::Drawing::Size(120, 21);
	this->charRace->SelectedIndexChanged += gcnew System::EventHandler(this, &WinformsApplication::application::setRace);
	this->Controls->Add(this->charRace);

	this->SubraceLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(SubraceLabel);
	this->SubraceLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->SubraceLabel->Location = System::Drawing::Point(595, 30);
	this->SubraceLabel->Size = System::Drawing::Size(60, 20);
	this->SubraceLabel->Name = L"SubraceLabel";
	this->SubraceLabel->Text = L"Subrace:";
	this->Controls->Add(this->SubraceLabel);

	this->charSubrace = (gcnew System::Windows::Forms::ComboBox());
	this->charSubrace->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->charSubrace->FormattingEnabled = true;
	this->charSubrace->Location = System::Drawing::Point(660, 30);
	this->charSubrace->Name = L"charSubrace";
	this->charSubrace->Size = System::Drawing::Size(120, 21);
	this->Controls->Add(this->charSubrace);

	this->RandomizeAll = (gcnew System::Windows::Forms::Button());
	this->components->Add(RandomizeAll);
	this->RandomizeAll->FlatStyle = System::Windows::Forms::FlatStyle::System;
	this->RandomizeAll->Location = System::Drawing::Point(835, 5);
	this->RandomizeAll->Size = System::Drawing::Size(150, 20);
	this->RandomizeAll->Name = L"RandomizeAll";
	this->RandomizeAll->Text = L"Randomize All";
	this->RandomizeAll->Click += gcnew System::EventHandler(this, &WinformsApplication::application::randomizeAll);
	this->Controls->Add(this->RandomizeAll);

	this->RandomizeBackground = (gcnew System::Windows::Forms::Button());
	this->components->Add(RandomizeBackground);
	this->RandomizeBackground->FlatStyle = System::Windows::Forms::FlatStyle::System;
	this->RandomizeBackground->Location = System::Drawing::Point(835, 30);
	this->RandomizeBackground->Size = System::Drawing::Size(150, 20);
	this->RandomizeBackground->Name = L"RandomizeBackground";
	this->RandomizeBackground->Text = L"Randomize Background";
	this->RandomizeBackground->Click += gcnew System::EventHandler(this, &WinformsApplication::application::randomizeBackground);
	this->Controls->Add(this->RandomizeBackground);

	this->RandomizeClass = (gcnew System::Windows::Forms::Button());
	this->components->Add(RandomizeClass);
	this->RandomizeClass->FlatStyle = System::Windows::Forms::FlatStyle::System;
	this->RandomizeClass->Location = System::Drawing::Point(990, 5);
	this->RandomizeClass->Size = System::Drawing::Size(150, 20);
	this->RandomizeClass->Name = L"RandomizeClass";
	this->RandomizeClass->Text = L"Randomize Class";
	this->RandomizeClass->Click += gcnew System::EventHandler(this, &WinformsApplication::application::randomizeClass);
	this->Controls->Add(this->RandomizeClass);

	this->RandomizeRace = (gcnew System::Windows::Forms::Button());
	this->components->Add(RandomizeRace);
	this->RandomizeRace->FlatStyle = System::Windows::Forms::FlatStyle::System;
	this->RandomizeRace->Location = System::Drawing::Point(990, 30);
	this->RandomizeRace->Size = System::Drawing::Size(150, 20);
	this->RandomizeRace->Name = L"RandomizeRace";
	this->RandomizeRace->Text = L"Randomize Race";
	this->RandomizeRace->Click += gcnew System::EventHandler(this, &WinformsApplication::application::randomizeRace);
	this->Controls->Add(this->RandomizeRace);

	this->SaveButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(SaveButton);
	this->SaveButton->FlatStyle = System::Windows::Forms::FlatStyle::System;
	this->SaveButton->Location = System::Drawing::Point(1145, 5);
	this->SaveButton->Size = System::Drawing::Size(100, 20);
	this->SaveButton->Name = L"Save";
	this->SaveButton->Text = L"Save";
	this->SaveButton->Click += gcnew System::EventHandler(this, &WinformsApplication::application::saveCharacter);
	this->Controls->Add(this->SaveButton);

	this->LoadButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(LoadButton);
	this->LoadButton->FlatStyle = System::Windows::Forms::FlatStyle::System;
	this->LoadButton->Location = System::Drawing::Point(1145, 30);
	this->LoadButton->Size = System::Drawing::Size(100, 20);
	this->LoadButton->Name = L"Load";
	this->LoadButton->Text = L"Load";
	this->LoadButton->Click += gcnew System::EventHandler(this, &WinformsApplication::application::load);
	this->Controls->Add(this->LoadButton);
}