#pragma once
#include <string>
#include <time.h>

namespace CppCLRWinformsProjekt {
	public ref class application : public System::Windows::Forms::Form
	{
	public:
		application(void)
		{
			InitializeFormBody();
			createLoadBar();
			createAbilityScores();
			createSavingThrows();
			createSkills();
			createCombatTrackerElements();
			createDiceElements();
			createPanelButtons();
			createEquipmentPanel();
			createFeaturesPanel();
			createSpellsPanel();
			createNotesPanel();
		}
	private:
		// Loading bar elements
		System::Windows::Forms::Label^ NameLabel;
		System::Windows::Forms::TextBox^ charName;
		System::Windows::Forms::Label^ LevelLabel;
		System::Windows::Forms::NumericUpDown^ charLevel;
		System::Windows::Forms::Label^ BackgroundLabel;
		System::Windows::Forms::ComboBox^ charBackground;
		System::Windows::Forms::Label^ AlignmentLabel;
		System::Windows::Forms::ComboBox^ charAlignment;
		System::Windows::Forms::Label^ ClassLabel;
		System::Windows::Forms::ComboBox^ charClass;
		System::Windows::Forms::Label^ SubclassLabel;
		System::Windows::Forms::ComboBox^ charSubclass;
		System::Windows::Forms::Label^ RaceLabel;
		System::Windows::Forms::ComboBox^ charRace;
		System::Windows::Forms::Label^ SubraceLabel;
		System::Windows::Forms::ComboBox^ charSubrace;
		System::Windows::Forms::Button^ RandomizeAll;
		System::Windows::Forms::Button^ RandomizeClass;
		System::Windows::Forms::Button^ RandomizeBackground;
		System::Windows::Forms::Button^ RandomizeRace;
		System::Windows::Forms::Button^ SaveButton;
		System::Windows::Forms::Button^ LoadButton;
		// Ability score elements.
		System::Windows::Forms::Label^ StrengthLabel;
		System::Windows::Forms::NumericUpDown^ charStrength;
		System::Windows::Forms::Label^ strMod;
		System::Windows::Forms::Label^ DexterityLabel;
		System::Windows::Forms::NumericUpDown^ charDexterity;
		System::Windows::Forms::Label^ dexMod;
		System::Windows::Forms::Label^ ConstitutionLabel;
		System::Windows::Forms::NumericUpDown^ charConstitution;
		System::Windows::Forms::Label^ conMod;
		System::Windows::Forms::Label^ IntelligenceLabel;
		System::Windows::Forms::NumericUpDown^ charIntelligence;
		System::Windows::Forms::Label^ intMod;
		System::Windows::Forms::Label^ WisdomLabel;
		System::Windows::Forms::NumericUpDown^ charWisdom;
		System::Windows::Forms::Label^ wisMod;
		System::Windows::Forms::Label^ CharismaLabel;
		System::Windows::Forms::NumericUpDown^ charCharisma;
		System::Windows::Forms::Label^ chaMod;
		System::Windows::Forms::Button^ rollAbilityScores;
		// Saving throw elements
		System::Windows::Forms::Label^ probonLabel;
		System::Windows::Forms::Label^ probonValue;
		System::Windows::Forms::CheckBox^ strST;
		System::Windows::Forms::Label^ strSTLabel;
		System::Windows::Forms::CheckBox^ dexST;
		System::Windows::Forms::Label^ dexSTLabel;
		System::Windows::Forms::CheckBox^ conST;
		System::Windows::Forms::Label^ conSTLabel;
		System::Windows::Forms::CheckBox^ intST;
		System::Windows::Forms::Label^ intSTLabel;
		System::Windows::Forms::CheckBox^ wisST;
		System::Windows::Forms::Label^ wisSTLabel;
		System::Windows::Forms::CheckBox^ chaST;
		System::Windows::Forms::Label^ chaSTLabel;
		// Skill elements
		System::Windows::Forms::CheckBox^ acrobaticsPro;
		System::Windows::Forms::CheckBox^ acrobaticsExp;
		System::Windows::Forms::Label^ acrobaticsLabel;
		System::Windows::Forms::CheckBox^ animalhandlingPro;
		System::Windows::Forms::CheckBox^ animalhandlingExp;
		System::Windows::Forms::Label^ animalhandlingLabel;
		System::Windows::Forms::CheckBox^ arcanaPro;
		System::Windows::Forms::CheckBox^ arcanaExp;
		System::Windows::Forms::Label^ arcanaLabel;
		System::Windows::Forms::CheckBox^ athleticsPro;
		System::Windows::Forms::CheckBox^ athleticsExp;
		System::Windows::Forms::Label^ athleticsLabel;
		System::Windows::Forms::CheckBox^ deceptionPro;
		System::Windows::Forms::CheckBox^ deceptionExp;
		System::Windows::Forms::Label^ deceptionLabel;
		System::Windows::Forms::CheckBox^ historyPro;
		System::Windows::Forms::CheckBox^ historyExp;
		System::Windows::Forms::Label^ historyLabel;
		System::Windows::Forms::CheckBox^ insightPro;
		System::Windows::Forms::CheckBox^ insightExp;
		System::Windows::Forms::Label^ insightLabel;
		System::Windows::Forms::CheckBox^ intimidationPro;
		System::Windows::Forms::CheckBox^ intimidationExp;
		System::Windows::Forms::Label^ intimidationLabel;
		System::Windows::Forms::CheckBox^ investigationPro;
		System::Windows::Forms::CheckBox^ investigationExp;
		System::Windows::Forms::Label^ investigationLabel;
		System::Windows::Forms::CheckBox^ medicinePro;
		System::Windows::Forms::CheckBox^ medicineExp;
		System::Windows::Forms::Label^ medicineLabel;
		System::Windows::Forms::CheckBox^ naturePro;
		System::Windows::Forms::CheckBox^ natureExp;
		System::Windows::Forms::Label^ natureLabel;
		System::Windows::Forms::CheckBox^ perceptionPro;
		System::Windows::Forms::CheckBox^ perceptionExp;
		System::Windows::Forms::Label^ perceptionLabel;
		System::Windows::Forms::CheckBox^ performancePro;
		System::Windows::Forms::CheckBox^ performanceExp;
		System::Windows::Forms::Label^ performanceLabel;
		System::Windows::Forms::CheckBox^ persuasionPro;
		System::Windows::Forms::CheckBox^ persuasionExp;
		System::Windows::Forms::Label^ persuasionLabel;
		System::Windows::Forms::CheckBox^ religionPro;
		System::Windows::Forms::CheckBox^ religionExp;
		System::Windows::Forms::Label^ religionLabel;
		System::Windows::Forms::CheckBox^ sleightofhandPro;
		System::Windows::Forms::CheckBox^ sleightofhandExp;
		System::Windows::Forms::Label^ sleightofhandLabel;
		System::Windows::Forms::CheckBox^ stealthPro;
		System::Windows::Forms::CheckBox^ stealthExp;
		System::Windows::Forms::Label^ stealthLabel;
		System::Windows::Forms::CheckBox^ survivalPro;
		System::Windows::Forms::CheckBox^ survivalExp;
		System::Windows::Forms::Label^ survivalLabel;
		// Combat tracker elements
		System::Windows::Forms::Label^ hitpointmaximumLabel;
		System::Windows::Forms::NumericUpDown^ hitPointMaximum;
		System::Windows::Forms::Label^ currenthitpointsLabel;
		System::Windows::Forms::NumericUpDown^ currentHitPoints;
		System::Windows::Forms::Label^ temporaryhitpointsLabel;
		System::Windows::Forms::NumericUpDown^ temporaryHitPoints;
		System::Windows::Forms::Label^ armourclassLabel;
		System::Windows::Forms::NumericUpDown^ armourClass;
		System::Windows::Forms::Label^ initiativemodifierLabel;
		System::Windows::Forms::NumericUpDown^ initiativeModifier;
		System::Windows::Forms::Label^ movementspeedLabel;
		System::Windows::Forms::NumericUpDown^ movementSpeed;
		// Dice elements
		System::Windows::Forms::NumericUpDown^ nd4;
		System::Windows::Forms::Label^ d4Label;
		System::Windows::Forms::Button^ d4Roll;
		System::Windows::Forms::Label^ d4Result;
		System::Windows::Forms::NumericUpDown^ nd6;
		System::Windows::Forms::Label^ d6Label;
		System::Windows::Forms::Button^ d6Roll;
		System::Windows::Forms::Label^ d6Result;
		System::Windows::Forms::NumericUpDown^ nd8;
		System::Windows::Forms::Label^ d8Label;
		System::Windows::Forms::Button^ d8Roll;
		System::Windows::Forms::Label^ d8Result;
		System::Windows::Forms::NumericUpDown^ nd10;
		System::Windows::Forms::Label^ d10Label;
		System::Windows::Forms::Button^ d10Roll;
		System::Windows::Forms::Label^ d10Result;
		System::Windows::Forms::NumericUpDown^ nd12;
		System::Windows::Forms::Label^ d12Label;
		System::Windows::Forms::Button^ d12Roll;
		System::Windows::Forms::Label^ d12Result;
		System::Windows::Forms::NumericUpDown^ nd20;
		System::Windows::Forms::Label^ d20Label;
		System::Windows::Forms::Button^ d20Roll;
		System::Windows::Forms::Label^ d20Result;
		System::Windows::Forms::NumericUpDown^ nd100;
		System::Windows::Forms::Label^ d100Label;
		System::Windows::Forms::Button^ d100Roll;
		System::Windows::Forms::Label^ d100Result;
		System::Windows::Forms::NumericUpDown^ ndX;
		System::Windows::Forms::NumericUpDown^ dXValue;
		System::Windows::Forms::Button^ dXRoll;
		System::Windows::Forms::Label^ dXResult;
		System::Windows::Forms::TextBox^ diceResults;
		System::Windows::Forms::Button^ clearButton;
		// Panel button elements
		System::Windows::Forms::Button^ noneButton;
		System::Windows::Forms::Button^ equipmentButton;
		System::Windows::Forms::Button^ featuresButton;
		System::Windows::Forms::Button^ spellsButton;
		System::Windows::Forms::Button^ notesButton;
		// Panels
		System::Windows::Forms::Panel^ equipmentPanel;
		System::Windows::Forms::Panel^ featuresPanel;
		System::Windows::Forms::Panel^ spellsPanel;
		System::Windows::Forms::Panel^ notesPanel;
		// Equipment panel elements
		System::Windows::Forms::Label^ CPLabel;
		System::Windows::Forms::NumericUpDown^ CP;
		System::Windows::Forms::Label^ SPLabel;
		System::Windows::Forms::NumericUpDown^ SP;
		System::Windows::Forms::Label^ EPLabel;
		System::Windows::Forms::NumericUpDown^ EP;
		System::Windows::Forms::Label^ GPLabel;
		System::Windows::Forms::NumericUpDown^ GP;
		System::Windows::Forms::Label^ PPLabel;
		System::Windows::Forms::NumericUpDown^ PP;
		System::Windows::Forms::TextBox^ gems;
		System::Windows::Forms::TextBox^ weapons;
		System::Windows::Forms::TextBox^ misc;
		// Features panel elements
		System::Windows::Forms::TextBox^ backgroundFeatures;
		System::Windows::Forms::TextBox^ raceFeatures;
		System::Windows::Forms::TextBox^ classFeatures;
		System::Windows::Forms::TextBox^ otherFeatures;
		// Spells panel elements
		System::Windows::Forms::Label^ SpellSaveLabel;
		System::Windows::Forms::NumericUpDown^ spellSaveDC;
		System::Windows::Forms::Label^ SpellAttackLabel;
		System::Windows::Forms::NumericUpDown^ spellAttackModifier;
		System::Windows::Forms::Label^ SpellLevelLabel;
		System::Windows::Forms::Label^ Level1Label;
		System::Windows::Forms::Label^ Level2Label;
		System::Windows::Forms::Label^ Level3Label;
		System::Windows::Forms::Label^ Level4Label;
		System::Windows::Forms::Label^ Level5Label;
		System::Windows::Forms::Label^ Level6Label;
		System::Windows::Forms::Label^ Level7Label;
		System::Windows::Forms::Label^ Level8Label;
		System::Windows::Forms::Label^ Level9Label;
		System::Windows::Forms::Label^ TotalSlotsLabel;
		System::Windows::Forms::NumericUpDown^ level1TotalSlots;
		System::Windows::Forms::NumericUpDown^ level2TotalSlots;
		System::Windows::Forms::NumericUpDown^ level3TotalSlots;
		System::Windows::Forms::NumericUpDown^ level4TotalSlots;
		System::Windows::Forms::NumericUpDown^ level5TotalSlots;
		System::Windows::Forms::NumericUpDown^ level6TotalSlots;
		System::Windows::Forms::NumericUpDown^ level7TotalSlots;
		System::Windows::Forms::NumericUpDown^ level8TotalSlots;
		System::Windows::Forms::NumericUpDown^ level9TotalSlots;
		System::Windows::Forms::Label^ UsedSlotsLabel;
		System::Windows::Forms::NumericUpDown^ level1UsedSlots;
		System::Windows::Forms::NumericUpDown^ level2UsedSlots;
		System::Windows::Forms::NumericUpDown^ level3UsedSlots;
		System::Windows::Forms::NumericUpDown^ level4UsedSlots;
		System::Windows::Forms::NumericUpDown^ level5UsedSlots;
		System::Windows::Forms::NumericUpDown^ level6UsedSlots;
		System::Windows::Forms::NumericUpDown^ level7UsedSlots;
		System::Windows::Forms::NumericUpDown^ level8UsedSlots;
		System::Windows::Forms::NumericUpDown^ level9UsedSlots;
		System::Windows::Forms::TextBox^ cantripsKnown;
		System::Windows::Forms::TextBox^ spellsKnown;
		System::Windows::Forms::TextBox^ spellComponents;
		// Notes panel elements
		System::Windows::Forms::TextBox^ notes1;
		System::Windows::Forms::TextBox^ notes2;
		System::Windows::Forms::TextBox^ notes3;

	~application()
	{
		if (components)
		{
			delete components;
		}
	}

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void onFormLoad(System::Object^ send, System::EventArgs^ e);
		void InitializeFormBody(void);
		void createLoadBar(void);
		void createAbilityScores(void);
		void createSavingThrows(void);
		void createSkills(void);
		void createCombatTrackerElements(void);
		void createDiceElements(void);
		void createPanelButtons(void);
		void createEquipmentPanel(void);
		void createFeaturesPanel(void);
		void createSpellsPanel(void);
		void createNotesPanel(void);

		void setLevel(System::Object^ send, System::EventArgs^ e);
		void setClass(System::Object^ send, System::EventArgs^ e);
		void setRace(System::Object^ send, System::EventArgs^ e);
		void randomizeAll(System::Object^ send, System::EventArgs^ e);
		void randomizeBackground(System::Object^ send, System::EventArgs^ e);
		void randomizeAlignment(System::Object^ send, System::EventArgs^ e);
		void randomizeClass(System::Object^ send, System::EventArgs^ e);
		void randomizeRace(System::Object^ send, System::EventArgs^ e);
		void saveCharacter(System::Object^ send, System::EventArgs^ e);
		void loadCharacter(System::Object^ send, System::EventArgs^ e);
		void updateStrength(System::Object^ send, System::EventArgs^ e);
		void updateDexterity(System::Object^ send, System::EventArgs^ e);
		void updateConstitution(System::Object^ send, System::EventArgs^ e);
		void updateIntelligence(System::Object^ send, System::EventArgs^ e);
		void updateWisdom(System::Object^ send, System::EventArgs^ e);
		void updateCharisma(System::Object^ send, System::EventArgs^ e);
		void generateAbilityScores(System::Object^ send, System::EventArgs^ e);
		void setPanelNone(System::Object^ send, System::EventArgs^ e);
		void setPanelEquipment(System::Object^ send, System::EventArgs^ e);
		void setPanelFeatures(System::Object^ send, System::EventArgs^ e);
		void setPanelSpells(System::Object^ send, System::EventArgs^ e);
		void setPanelNotes(System::Object^ send, System::EventArgs^ e);

		void rolld4(System::Object^ send, System::EventArgs^ e);
		void rolld6(System::Object^ send, System::EventArgs^ e);
		void rolld8(System::Object^ send, System::EventArgs^ e);
		void rolld10(System::Object^ send, System::EventArgs^ e);
		void rolld12(System::Object^ send, System::EventArgs^ e);
		void rolld20(System::Object^ send, System::EventArgs^ e);
		void rolld100(System::Object^ send, System::EventArgs^ e);
		void rolldX(System::Object^ send, System::EventArgs^ e);
		void clear(System::Object^ send, System::EventArgs^ e);

#pragma endregion
		std::string systostr(System::String^ s)
		{
			const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(s)).ToPointer();
			std::string os = chars;
			System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr((void*)chars));
			return os;
		}

		System::String^ strtosys(std::string s)
		{
			return gcnew System::String(s.c_str());
		}
	};
}