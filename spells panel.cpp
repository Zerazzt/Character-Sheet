#include "pch.h"
#include "app.h"

void CppCLRWinformsProjekt::application::createSpellsPanel(void)
{
	this->spellsPanel = (gcnew System::Windows::Forms::Panel());
	this->components->Add(this->spellsPanel);
	this->spellsPanel->Location = System::Drawing::Point(0, 0);
	this->spellsPanel->Size = System::Drawing::Size(1266, 639);
	this->spellsPanel->Name = L"spellsPanel";
	this->Controls->Add(this->spellsPanel);

	this->SpellSaveLabel = (gcnew System::Windows::Forms::Label());
	this->SpellSaveLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->SpellSaveLabel->Location = System::Drawing::Point(500, 75);
	this->SpellSaveLabel->Size = System::Drawing::Size(140, 20);
	this->SpellSaveLabel->Name = L"SpellSaveLabel";
	this->SpellSaveLabel->Text = L"Spell Save DC:";

	this->spellSaveDC = (gcnew System::Windows::Forms::NumericUpDown());
	this->spellSaveDC->Location = System::Drawing::Point(640, 75);
	this->spellSaveDC->Size = System::Drawing::Size(40, 20);
	this->spellSaveDC->Name = L"spellSaveDC";

	this->SpellAttackLabel = (gcnew System::Windows::Forms::Label());
	this->SpellAttackLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->SpellAttackLabel->Location = System::Drawing::Point(500, 95);
	this->SpellAttackLabel->Size = System::Drawing::Size(140, 20);
	this->SpellAttackLabel->Name = L"SpellAttackLabel";
	this->SpellAttackLabel->Text = L"Spell Attack Modifier:";

	this->spellAttackModifier = (gcnew System::Windows::Forms::NumericUpDown());
	this->spellAttackModifier->Location = System::Drawing::Point(640, 95);
	this->spellAttackModifier->Size = System::Drawing::Size(40, 20);
	this->spellAttackModifier->Name = L"spellAttackModifier";

	this->SpellLevelLabel = (gcnew System::Windows::Forms::Label());
	this->SpellLevelLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->SpellLevelLabel->Location = System::Drawing::Point(500, 125);
	this->SpellLevelLabel->Size = System::Drawing::Size(100, 20);
	this->SpellLevelLabel->Name = L"SpelLLevelLabel";
	this->SpellLevelLabel->Text = L"Spell Slot Level";

	this->Level1Label = (gcnew System::Windows::Forms::Label());
	this->Level1Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->Level1Label->Location = System::Drawing::Point(500, 150);
	this->Level1Label->Size = System::Drawing::Size(100, 20);
	this->Level1Label->Name = L"Level1Label";
	this->Level1Label->Text = L"Level 1";

	this->Level2Label = (gcnew System::Windows::Forms::Label());
	this->Level2Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->Level2Label->Location = System::Drawing::Point(500, 175);
	this->Level2Label->Size = System::Drawing::Size(100, 20);
	this->Level2Label->Name = L"Level2Label";
	this->Level2Label->Text = L"Level 2";

	this->Level3Label = (gcnew System::Windows::Forms::Label());
	this->Level3Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->Level3Label->Location = System::Drawing::Point(500, 200);
	this->Level3Label->Size = System::Drawing::Size(100, 20);
	this->Level3Label->Name = L"Level3Label";
	this->Level3Label->Text = L"Level 3";

	this->Level4Label = (gcnew System::Windows::Forms::Label());
	this->Level4Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->Level4Label->Location = System::Drawing::Point(500, 225);
	this->Level4Label->Size = System::Drawing::Size(100, 20);
	this->Level4Label->Name = L"Level4Label";
	this->Level4Label->Text = L"Level 4";

	this->Level5Label = (gcnew System::Windows::Forms::Label());
	this->Level5Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->Level5Label->Location = System::Drawing::Point(500, 250);
	this->Level5Label->Size = System::Drawing::Size(100, 20);
	this->Level5Label->Name = L"Level5Label";
	this->Level5Label->Text = L"Level 5";

	this->Level6Label = (gcnew System::Windows::Forms::Label());
	this->Level6Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->Level6Label->Location = System::Drawing::Point(500, 275);
	this->Level6Label->Size = System::Drawing::Size(100, 20);
	this->Level6Label->Name = L"Level6Label";
	this->Level6Label->Text = L"Level 6";

	this->Level7Label = (gcnew System::Windows::Forms::Label());
	this->Level7Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->Level7Label->Location = System::Drawing::Point(500, 300);
	this->Level7Label->Size = System::Drawing::Size(100, 20);
	this->Level7Label->Name = L"Level7Label";
	this->Level7Label->Text = L"Level 7";

	this->Level8Label = (gcnew System::Windows::Forms::Label());
	this->Level8Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->Level8Label->Location = System::Drawing::Point(500, 325);
	this->Level8Label->Size = System::Drawing::Size(100, 20);
	this->Level8Label->Name = L"Level8Label";
	this->Level8Label->Text = L"Level 8";

	this->Level9Label = (gcnew System::Windows::Forms::Label());
	this->Level9Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->Level9Label->Location = System::Drawing::Point(500, 350);
	this->Level9Label->Size = System::Drawing::Size(100, 20);
	this->Level9Label->Name = L"Level9Label";
	this->Level9Label->Text = L"Level 9";

	this->TotalSlotsLabel = (gcnew System::Windows::Forms::Label());
	this->TotalSlotsLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->TotalSlotsLabel->Location = System::Drawing::Point(600, 125);
	this->TotalSlotsLabel->Size = System::Drawing::Size(40, 20);
	this->TotalSlotsLabel->Name = L"TotalSlotsLabel";
	this->TotalSlotsLabel->Text = L"Total";

	this->level1TotalSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level1TotalSlots->Location = System::Drawing::Point(600, 150);
	this->level1TotalSlots->Size = System::Drawing::Size(40, 20);
	this->level1TotalSlots->Name = L"level1TotalSlots";

	this->level2TotalSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level2TotalSlots->Location = System::Drawing::Point(600, 175);
	this->level2TotalSlots->Size = System::Drawing::Size(40, 20);
	this->level2TotalSlots->Name = L"level2TotalSlots";

	this->level3TotalSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level3TotalSlots->Location = System::Drawing::Point(600, 200);
	this->level3TotalSlots->Size = System::Drawing::Size(40, 20);
	this->level3TotalSlots->Name = L"level3TotalSlots";

	this->level4TotalSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level4TotalSlots->Location = System::Drawing::Point(600, 225);
	this->level4TotalSlots->Size = System::Drawing::Size(40, 20);
	this->level4TotalSlots->Name = L"level4TotalSlots";

	this->level5TotalSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level5TotalSlots->Location = System::Drawing::Point(600, 250);
	this->level5TotalSlots->Size = System::Drawing::Size(40, 20);
	this->level5TotalSlots->Name = L"level5TotalSlots";

	this->level6TotalSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level6TotalSlots->Location = System::Drawing::Point(600, 275);
	this->level6TotalSlots->Size = System::Drawing::Size(40, 20);
	this->level6TotalSlots->Name = L"level6TotalSlots";

	this->level7TotalSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level7TotalSlots->Location = System::Drawing::Point(600, 300);
	this->level7TotalSlots->Size = System::Drawing::Size(40, 20);
	this->level7TotalSlots->Name = L"level7TotalSlots";

	this->level8TotalSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level8TotalSlots->Location = System::Drawing::Point(600, 325);
	this->level8TotalSlots->Size = System::Drawing::Size(40, 20);
	this->level8TotalSlots->Name = L"level8TotalSlots";

	this->level9TotalSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level9TotalSlots->Location = System::Drawing::Point(600, 350);
	this->level9TotalSlots->Size = System::Drawing::Size(40, 20);
	this->level9TotalSlots->Name = L"level9TotalSlots";

	this->UsedSlotsLabel = (gcnew System::Windows::Forms::Label());
	this->UsedSlotsLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->UsedSlotsLabel->Location = System::Drawing::Point(640, 125);
	this->UsedSlotsLabel->Size = System::Drawing::Size(40, 20);
	this->UsedSlotsLabel->Name = L"UsedSlotsLabel";
	this->UsedSlotsLabel->Text = L"Used";

	this->level1UsedSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level1UsedSlots->Location = System::Drawing::Point(640, 150);
	this->level1UsedSlots->Size = System::Drawing::Size(40, 20);
	this->level1UsedSlots->Name = L"level1UsedSlots";

	this->level2UsedSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level2UsedSlots->Location = System::Drawing::Point(640, 175);
	this->level2UsedSlots->Size = System::Drawing::Size(40, 20);
	this->level2UsedSlots->Name = L"level2UsedSlots";

	this->level3UsedSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level3UsedSlots->Location = System::Drawing::Point(640, 200);
	this->level3UsedSlots->Size = System::Drawing::Size(40, 20);
	this->level3UsedSlots->Name = L"level3UsedSlots";

	this->level4UsedSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level4UsedSlots->Location = System::Drawing::Point(640, 225);
	this->level4UsedSlots->Size = System::Drawing::Size(40, 20);
	this->level4UsedSlots->Name = L"level4UsedSlots";

	this->level5UsedSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level5UsedSlots->Location = System::Drawing::Point(640, 250);
	this->level5UsedSlots->Size = System::Drawing::Size(40, 20);
	this->level5UsedSlots->Name = L"level5UsedSlots";

	this->level6UsedSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level6UsedSlots->Location = System::Drawing::Point(640, 275);
	this->level6UsedSlots->Size = System::Drawing::Size(40, 20);
	this->level6UsedSlots->Name = L"level6UsedSlots";

	this->level7UsedSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level7UsedSlots->Location = System::Drawing::Point(640, 300);
	this->level7UsedSlots->Size = System::Drawing::Size(40, 20);
	this->level7UsedSlots->Name = L"level7UsedSlots";

	this->level8UsedSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level8UsedSlots->Location = System::Drawing::Point(640, 325);
	this->level8UsedSlots->Size = System::Drawing::Size(40, 20);
	this->level8UsedSlots->Name = L"level8UsedSlots";

	this->level9UsedSlots = (gcnew System::Windows::Forms::NumericUpDown());
	this->level9UsedSlots->Location = System::Drawing::Point(640, 350);
	this->level9UsedSlots->Size = System::Drawing::Size(40, 20);
	this->level9UsedSlots->Name = L"level9UsedSlots";

	this->cantripsKnown = (gcnew System::Windows::Forms::TextBox());
	this->cantripsKnown->Multiline = true;
	this->cantripsKnown->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->cantripsKnown->Location = System::Drawing::Point(500, 375);
	this->cantripsKnown->Size = System::Drawing::Size(180, 195);
	this->cantripsKnown->Name = L"cantripsKnown";

	this->spellsKnown = (gcnew System::Windows::Forms::TextBox());
	this->spellsKnown->Multiline = true;
	this->spellsKnown->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->spellsKnown->Location = System::Drawing::Point(700, 75);
	this->spellsKnown->Size = System::Drawing::Size(270, 500);
	this->spellsKnown->Name = L"spellsKnown";

	this->spellComponents = (gcnew System::Windows::Forms::TextBox());
	this->spellComponents->Multiline = true;
	this->spellComponents->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->spellComponents->Location = System::Drawing::Point(975, 75);
	this->spellComponents->Size = System::Drawing::Size(270, 500);
	this->spellComponents->Name = L"spellComponents";

	this->spellsPanel->Controls->Add(this->SpellSaveLabel);
	this->spellsPanel->Controls->Add(this->spellSaveDC);
	this->spellsPanel->Controls->Add(this->SpellAttackLabel);
	this->spellsPanel->Controls->Add(this->spellAttackModifier);
	this->spellsPanel->Controls->Add(this->SpellLevelLabel);
	this->spellsPanel->Controls->Add(this->Level1Label);
	this->spellsPanel->Controls->Add(this->Level2Label);
	this->spellsPanel->Controls->Add(this->Level3Label);
	this->spellsPanel->Controls->Add(this->Level4Label);
	this->spellsPanel->Controls->Add(this->Level5Label);
	this->spellsPanel->Controls->Add(this->Level6Label);
	this->spellsPanel->Controls->Add(this->Level7Label);
	this->spellsPanel->Controls->Add(this->Level8Label);
	this->spellsPanel->Controls->Add(this->Level9Label);
	this->spellsPanel->Controls->Add(this->TotalSlotsLabel);
	this->spellsPanel->Controls->Add(this->level1TotalSlots);
	this->spellsPanel->Controls->Add(this->level2TotalSlots);
	this->spellsPanel->Controls->Add(this->level3TotalSlots);
	this->spellsPanel->Controls->Add(this->level4TotalSlots);
	this->spellsPanel->Controls->Add(this->level5TotalSlots);
	this->spellsPanel->Controls->Add(this->level6TotalSlots);
	this->spellsPanel->Controls->Add(this->level7TotalSlots);
	this->spellsPanel->Controls->Add(this->level8TotalSlots);
	this->spellsPanel->Controls->Add(this->level9TotalSlots);
	this->spellsPanel->Controls->Add(this->UsedSlotsLabel);
	this->spellsPanel->Controls->Add(this->level1UsedSlots);
	this->spellsPanel->Controls->Add(this->level2UsedSlots);
	this->spellsPanel->Controls->Add(this->level3UsedSlots);
	this->spellsPanel->Controls->Add(this->level4UsedSlots);
	this->spellsPanel->Controls->Add(this->level5UsedSlots);
	this->spellsPanel->Controls->Add(this->level6UsedSlots);
	this->spellsPanel->Controls->Add(this->level7UsedSlots);
	this->spellsPanel->Controls->Add(this->level8UsedSlots);
	this->spellsPanel->Controls->Add(this->level9UsedSlots);
	this->spellsPanel->Controls->Add(this->cantripsKnown);
	this->spellsPanel->Controls->Add(this->spellsKnown);
	this->spellsPanel->Controls->Add(this->spellComponents);

	this->spellsPanel->Visible = false;
}