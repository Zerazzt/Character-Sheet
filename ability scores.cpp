#include "pch.h"
#include "app.h"

void WinformsApplication::application::createAbilityScores(void)
{
	this->StrengthLabel = (gcnew System::Windows::Forms::Label()); // Create Label
	this->components->Add(this->StrengthLabel); // Add element to components
	this->StrengthLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point)); // Set font type
	this->StrengthLabel->Location = System::Drawing::Point(5, 75); // Set location from where to begin drawing the element
	this->StrengthLabel->Size = System::Drawing::Size(80, 20); // Specify the size of the element
	this->StrengthLabel->Name = L"StrengthLabel"; // Set name
	this->StrengthLabel->Text = L"Strength"; // Set text
	this->Controls->Add(this->StrengthLabel); // Add element to Controls

	this->charStrength = (gcnew System::Windows::Forms::NumericUpDown()); // Create NumericUpDown
	this->components->Add(this->charStrength); // Add element to components
	this->charStrength->Location = System::Drawing::Point(8, 100); // Set location from where to begin drawing the element
	this->charStrength->Size = System::Drawing::Size(35, 20); // Specify the size of the element
	this->charStrength->Name = L"charStrength"; // Set name
	this->charStrength->ValueChanged += gcnew System::EventHandler(this, &WinformsApplication::application::updateStrength); // Set function to be called when the value of the element is changed
	this->Controls->Add(this->charStrength); // Add element to Controls

	this->strMod = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->strMod);
	this->strMod->Font = (gcnew System::Drawing::Font("Times New Roman", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->strMod->Location = System::Drawing::Point(8, 125);
	this->strMod->Size = System::Drawing::Size(20, 20);
	this->strMod->Name = L"strMod";
	this->strMod->Text = L"-5";
	this->Controls->Add(this->strMod);

	this->DexterityLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->DexterityLabel);
	this->DexterityLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->DexterityLabel->Location = System::Drawing::Point(5, 150);
	this->DexterityLabel->Size = System::Drawing::Size(80, 20);
	this->DexterityLabel->Name = L"DexterityLabel";
	this->DexterityLabel->Text = L"Dexterity";
	this->Controls->Add(this->DexterityLabel);

	this->charDexterity = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->charDexterity);
	this->charDexterity->Location = System::Drawing::Point(8, 175);
	this->charDexterity->Size = System::Drawing::Size(35, 20);
	this->charDexterity->Name = L"charDexterity";
	this->charDexterity->ValueChanged += gcnew System::EventHandler(this, &WinformsApplication::application::updateDexterity);
	this->Controls->Add(this->charDexterity);

	this->dexMod = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->dexMod);
	this->dexMod->Font = (gcnew System::Drawing::Font("Times New Roman", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->dexMod->Location = System::Drawing::Point(8, 200);
	this->dexMod->Size = System::Drawing::Size(20, 20);
	this->dexMod->Name = L"dexMod";
	this->dexMod->Text = L"-5";
	this->Controls->Add(this->dexMod);

	this->ConstitutionLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->ConstitutionLabel);
	this->ConstitutionLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->ConstitutionLabel->Location = System::Drawing::Point(5, 225);
	this->ConstitutionLabel->Size = System::Drawing::Size(80, 20);
	this->ConstitutionLabel->Name = L"ConstitutionLabel";
	this->ConstitutionLabel->Text = L"Constitution";
	this->Controls->Add(this->ConstitutionLabel);

	this->charConstitution = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->charConstitution);
	this->charConstitution->Location = System::Drawing::Point(8, 250);
	this->charConstitution->Size = System::Drawing::Size(35, 20);
	this->charConstitution->Name = L"charConstitution";
	this->charConstitution->ValueChanged += gcnew System::EventHandler(this, &WinformsApplication::application::updateConstitution);
	this->Controls->Add(this->charConstitution);

	this->conMod = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->conMod);
	this->conMod->Font = (gcnew System::Drawing::Font("Times New Roman", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->conMod->Location = System::Drawing::Point(8, 275);
	this->conMod->Size = System::Drawing::Size(20, 20);
	this->conMod->Name = L"conMod";
	this->conMod->Text = L"-5";
	this->Controls->Add(this->conMod);

	this->IntelligenceLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->IntelligenceLabel);
	this->IntelligenceLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->IntelligenceLabel->Location = System::Drawing::Point(5, 300);
	this->IntelligenceLabel->Size = System::Drawing::Size(80, 20);
	this->IntelligenceLabel->Name = L"IntelligenceLabel";
	this->IntelligenceLabel->Text = L"Intelligence";
	this->Controls->Add(this->IntelligenceLabel);

	this->charIntelligence = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->charIntelligence);
	this->charIntelligence->Location = System::Drawing::Point(8, 325);
	this->charIntelligence->Size = System::Drawing::Size(35, 20);
	this->charIntelligence->Name = L"charIntelligence";
	this->charIntelligence->ValueChanged += gcnew System::EventHandler(this, &WinformsApplication::application::updateIntelligence);
	this->Controls->Add(this->charIntelligence);

	this->intMod = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->intMod);
	this->intMod->Font = (gcnew System::Drawing::Font("Times New Roman", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->intMod->Location = System::Drawing::Point(8, 350);
	this->intMod->Size = System::Drawing::Size(20, 20);
	this->intMod->Name = L"intMod";
	this->intMod->Text = L"-5";
	this->Controls->Add(this->intMod);

	this->WisdomLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->WisdomLabel);
	this->WisdomLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->WisdomLabel->Location = System::Drawing::Point(5, 375);
	this->WisdomLabel->Size = System::Drawing::Size(80, 20);
	this->WisdomLabel->Name = L"WisdomLabel";
	this->WisdomLabel->Text = L"Wisdom";
	this->Controls->Add(this->WisdomLabel);

	this->charWisdom = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->charWisdom);
	this->charWisdom->Location = System::Drawing::Point(8, 400);
	this->charWisdom->Size = System::Drawing::Size(35, 20);
	this->charWisdom->Name = L"charWisdom";
	this->charWisdom->ValueChanged += gcnew System::EventHandler(this, &WinformsApplication::application::updateWisdom);
	this->Controls->Add(this->charWisdom);

	this->wisMod = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->wisMod);
	this->wisMod->Font = (gcnew System::Drawing::Font("Times New Roman", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->wisMod->Location = System::Drawing::Point(8, 425);
	this->wisMod->Size = System::Drawing::Size(20, 20);
	this->wisMod->Name = L"wisMod";
	this->wisMod->Text = L"-5";
	this->Controls->Add(this->wisMod);

	this->CharismaLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->CharismaLabel);
	this->CharismaLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->CharismaLabel->Location = System::Drawing::Point(5, 450);
	this->CharismaLabel->Size = System::Drawing::Size(80, 20);
	this->CharismaLabel->Name = L"CharismaLabel";
	this->CharismaLabel->Text = L"Charisma";
	this->Controls->Add(this->CharismaLabel);

	this->charCharisma = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->charCharisma);
	this->charCharisma->Location = System::Drawing::Point(8, 475);
	this->charCharisma->Size = System::Drawing::Size(35, 20);
	this->charCharisma->Name = L"charCharisma";
	this->charCharisma->ValueChanged += gcnew System::EventHandler(this, &WinformsApplication::application::updateCharisma);
	this->Controls->Add(this->charCharisma);

	this->chaMod = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->chaMod);
	this->chaMod->Font = (gcnew System::Drawing::Font("Times New Roman", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->chaMod->Location = System::Drawing::Point(8, 500);
	this->chaMod->Size = System::Drawing::Size(20, 20);
	this->chaMod->Name = L"chaMod";
	this->chaMod->Text = L"-5";
	this->Controls->Add(this->chaMod);

	this->rollAbilityScores = (gcnew System::Windows::Forms::Button()); // Create Button
	this->components->Add(this->rollAbilityScores); // Add element to compontents
	this->rollAbilityScores->FlatStyle = System::Windows::Forms::FlatStyle::System; // Set style of button
	this->rollAbilityScores->Location = System::Drawing::Point(5, 530); // Set location from where to begin drawing the element
	this->rollAbilityScores->Size = System::Drawing::Size(65, 65); // Specify the size of the element
	this->rollAbilityScores->Name = L"rollAbilityScores"; // Set name
	this->rollAbilityScores->Text = L"Roll Ability Scores"; // Set text
	this->rollAbilityScores->Click += gcnew System::EventHandler(this, &WinformsApplication::application::generateAbilityScores); // Set function to be called when the button is pressed
	this->Controls->Add(this->rollAbilityScores); // Add element to Controls
}