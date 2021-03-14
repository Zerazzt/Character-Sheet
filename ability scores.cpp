#include "pch.h"
#include "app.h"

void CppCLRWinformsProjekt::application::createAbilityScores(void)
{
	this->StrengthLabel = (gcnew System::Windows::Forms::Label());
	this->StrengthLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->StrengthLabel->Location = System::Drawing::Point(5, 75);
	this->StrengthLabel->Size = System::Drawing::Size(80, 20);
	this->StrengthLabel->Name = L"StrengthLabel";
	this->StrengthLabel->Text = L"Strength";
	this->TabIndex = 0;
	this->Controls->Add(this->StrengthLabel);

	this->charStrength = (gcnew System::Windows::Forms::NumericUpDown());
	this->charStrength->Location = System::Drawing::Point(8, 100);
	this->charStrength->Size = System::Drawing::Size(35, 20);
	this->charStrength->Name = L"charStrength";
	this->charStrength->TabIndex = 0;
	this->Controls->Add(this->charStrength);

	this->strMod = (gcnew System::Windows::Forms::Label());
	this->strMod->Font = (gcnew System::Drawing::Font("Times New Roman", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->strMod->Location = System::Drawing::Point(8, 125);
	this->strMod->Size = System::Drawing::Size(20, 20);
	this->strMod->Name = L"strMod";
	this->strMod->Text = L"-5";
	this->Controls->Add(this->strMod);

	this->DexterityLabel = (gcnew System::Windows::Forms::Label());
	this->DexterityLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->DexterityLabel->Location = System::Drawing::Point(5, 150);
	this->DexterityLabel->Size = System::Drawing::Size(80, 20);
	this->DexterityLabel->Name = L"DexterityLabel";
	this->DexterityLabel->Text = L"Dexterity";
	this->TabIndex = 0;
	this->Controls->Add(this->DexterityLabel);

	this->charDexterity = (gcnew System::Windows::Forms::NumericUpDown());
	this->charDexterity->Location = System::Drawing::Point(8, 175);
	this->charDexterity->Size = System::Drawing::Size(35, 20);
	this->charDexterity->Name = L"charDexterity";
	this->charDexterity->TabIndex = 0;
	this->Controls->Add(this->charDexterity);

	this->dexMod = (gcnew System::Windows::Forms::Label());
	this->dexMod->Font = (gcnew System::Drawing::Font("Times New Roman", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->dexMod->Location = System::Drawing::Point(8, 200);
	this->dexMod->Size = System::Drawing::Size(20, 20);
	this->dexMod->Name = L"dexMod";
	this->dexMod->Text = L"-5";
	this->Controls->Add(this->dexMod);

	this->ConstitutionLabel = (gcnew System::Windows::Forms::Label());
	this->ConstitutionLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->ConstitutionLabel->Location = System::Drawing::Point(5, 225);
	this->ConstitutionLabel->Size = System::Drawing::Size(80, 20);
	this->ConstitutionLabel->Name = L"ConstitutionLabel";
	this->ConstitutionLabel->Text = L"Constitution";
	this->TabIndex = 0;
	this->Controls->Add(this->ConstitutionLabel);

	this->charConstitution = (gcnew System::Windows::Forms::NumericUpDown());
	this->charConstitution->Location = System::Drawing::Point(8, 250);
	this->charConstitution->Size = System::Drawing::Size(35, 20);
	this->charConstitution->Name = L"charConstitution";
	this->charConstitution->TabIndex = 0;
	this->Controls->Add(this->charConstitution);

	this->conMod = (gcnew System::Windows::Forms::Label());
	this->conMod->Font = (gcnew System::Drawing::Font("Times New Roman", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->conMod->Location = System::Drawing::Point(8, 275);
	this->conMod->Size = System::Drawing::Size(20, 20);
	this->conMod->Name = L"conMod";
	this->conMod->Text = L"-5";
	this->Controls->Add(this->conMod);

	this->IntelligenceLabel = (gcnew System::Windows::Forms::Label());
	this->IntelligenceLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->IntelligenceLabel->Location = System::Drawing::Point(5, 300);
	this->IntelligenceLabel->Size = System::Drawing::Size(80, 20);
	this->IntelligenceLabel->Name = L"IntelligenceLabel";
	this->IntelligenceLabel->Text = L"Intelligence";
	this->TabIndex = 0;
	this->Controls->Add(this->IntelligenceLabel);

	this->charIntelligence = (gcnew System::Windows::Forms::NumericUpDown());
	this->charIntelligence->Location = System::Drawing::Point(8, 325);
	this->charIntelligence->Size = System::Drawing::Size(35, 20);
	this->charIntelligence->Name = L"charIntelligence";
	this->charIntelligence->TabIndex = 0;
	this->Controls->Add(this->charIntelligence);

	this->intMod = (gcnew System::Windows::Forms::Label());
	this->intMod->Font = (gcnew System::Drawing::Font("Times New Roman", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->intMod->Location = System::Drawing::Point(8, 350);
	this->intMod->Size = System::Drawing::Size(20, 20);
	this->intMod->Name = L"intMod";
	this->intMod->Text = L"-5";
	this->Controls->Add(this->intMod);

	this->WisdomLabel = (gcnew System::Windows::Forms::Label());
	this->WisdomLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->WisdomLabel->Location = System::Drawing::Point(5, 375);
	this->WisdomLabel->Size = System::Drawing::Size(80, 20);
	this->WisdomLabel->Name = L"WisdomLabel";
	this->WisdomLabel->Text = L"Wisdom";
	this->TabIndex = 0;
	this->Controls->Add(this->WisdomLabel);

	this->charWisdom = (gcnew System::Windows::Forms::NumericUpDown());
	this->charWisdom->Location = System::Drawing::Point(8, 400);
	this->charWisdom->Size = System::Drawing::Size(35, 20);
	this->charWisdom->Name = L"charWisdom";
	this->charWisdom->TabIndex = 0;
	this->Controls->Add(this->charWisdom);

	this->wisMod = (gcnew System::Windows::Forms::Label());
	this->wisMod->Font = (gcnew System::Drawing::Font("Times New Roman", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->wisMod->Location = System::Drawing::Point(8, 425);
	this->wisMod->Size = System::Drawing::Size(20, 20);
	this->wisMod->Name = L"wisMod";
	this->wisMod->Text = L"-5";
	this->Controls->Add(this->wisMod);

	this->CharismaLabel = (gcnew System::Windows::Forms::Label());
	this->CharismaLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->CharismaLabel->Location = System::Drawing::Point(5, 450);
	this->CharismaLabel->Size = System::Drawing::Size(80, 20);
	this->CharismaLabel->Name = L"CharismaLabel";
	this->CharismaLabel->Text = L"Charisma";
	this->TabIndex = 0;
	this->Controls->Add(this->CharismaLabel);

	this->charCharisma = (gcnew System::Windows::Forms::NumericUpDown());
	this->charCharisma->Location = System::Drawing::Point(8, 475);
	this->charCharisma->Size = System::Drawing::Size(35, 20);
	this->charCharisma->Name = L"charCharisma";
	this->charCharisma->TabIndex = 0;
	this->Controls->Add(this->charCharisma);

	this->chaMod = (gcnew System::Windows::Forms::Label());
	this->chaMod->Font = (gcnew System::Drawing::Font("Times New Roman", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->chaMod->Location = System::Drawing::Point(8, 500);
	this->chaMod->Size = System::Drawing::Size(20, 20);
	this->chaMod->Name = L"chaMod";
	this->chaMod->Text = L"-5";
	this->Controls->Add(this->chaMod);
}