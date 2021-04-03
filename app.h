#pragma once
#include <string>
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
	// Loading bar elements
	private: System::Windows::Forms::Label^ NameLabel;
	private: System::Windows::Forms::TextBox^ charName;
	private: System::Windows::Forms::Label^ LevelLabel;
	private: System::Windows::Forms::NumericUpDown^ charLevel;
	private: System::Windows::Forms::Label^ BackgroundLabel;
	private: System::Windows::Forms::ComboBox^ charBackground;
	private: System::Windows::Forms::Label^ AlignmentLabel;
	private: System::Windows::Forms::ComboBox^ charAlignment;
	private: System::Windows::Forms::Label^ ClassLabel;
	private: System::Windows::Forms::ComboBox^ charClass;
	private: System::Windows::Forms::Label^ SubclassLabel;
	private: System::Windows::Forms::ComboBox^ charSubclass;
	private: System::Windows::Forms::Label^ RaceLabel;
	private: System::Windows::Forms::ComboBox^ charRace;
	private: System::Windows::Forms::Label^ SubraceLabel;
	private: System::Windows::Forms::ComboBox^ charSubrace;
	private: System::Windows::Forms::Button^ RandomizeAll;
	private: System::Windows::Forms::Button^ RandomizeClass;
	private: System::Windows::Forms::Button^ RandomizeBackground;
	private: System::Windows::Forms::Button^ RandomizeRace;
	private: System::Windows::Forms::Button^ SaveButton;
	private: System::Windows::Forms::Button^ LoadButton;

	// Ability score elements
	private: System::Windows::Forms::Label^ StrengthLabel;
	private: System::Windows::Forms::NumericUpDown^ charStrength;
	private: System::Windows::Forms::Label^ strMod;
	private: System::Windows::Forms::Label^ DexterityLabel;
	private: System::Windows::Forms::NumericUpDown^ charDexterity;
	private: System::Windows::Forms::Label^ dexMod;
	private: System::Windows::Forms::Label^ ConstitutionLabel;
	private: System::Windows::Forms::NumericUpDown^ charConstitution;
	private: System::Windows::Forms::Label^ conMod;
	private: System::Windows::Forms::Label^ IntelligenceLabel;
	private: System::Windows::Forms::NumericUpDown^ charIntelligence;
	private: System::Windows::Forms::Label^ intMod;
	private: System::Windows::Forms::Label^ WisdomLabel;
	private: System::Windows::Forms::NumericUpDown^ charWisdom;
	private: System::Windows::Forms::Label^ wisMod;
	private: System::Windows::Forms::Label^ CharismaLabel;
	private: System::Windows::Forms::NumericUpDown^ charCharisma;
	private: System::Windows::Forms::Label^ chaMod;
	private: System::Windows::Forms::Button^ rollAbilityScores;

	// Saving throw elements
	private: System::Windows::Forms::Label^ probonLabel;
	private: System::Windows::Forms::Label^ probonValue;
	private: System::Windows::Forms::CheckBox^ strST;
	private: System::Windows::Forms::Label^ strSTLabel;
	private: System::Windows::Forms::CheckBox^ dexST;
	private: System::Windows::Forms::Label^ dexSTLabel;
	private: System::Windows::Forms::CheckBox^ conST;
	private: System::Windows::Forms::Label^ conSTLabel;
	private: System::Windows::Forms::CheckBox^ intST;
	private: System::Windows::Forms::Label^ intSTLabel;
	private: System::Windows::Forms::CheckBox^ wisST;
	private: System::Windows::Forms::Label^ wisSTLabel;
	private: System::Windows::Forms::CheckBox^ chaST;
	private: System::Windows::Forms::Label^ chaSTLabel;

	// Skill elements
	private: System::Windows::Forms::CheckBox^ acrobaticsPro;
	private: System::Windows::Forms::CheckBox^ acrobaticsExp;
	private: System::Windows::Forms::Label^ acrobaticsLabel;
	private: System::Windows::Forms::CheckBox^ animalhandlingPro;
	private: System::Windows::Forms::CheckBox^ animalhandlingExp;
	private: System::Windows::Forms::Label^ animalhandlingLabel;
	private: System::Windows::Forms::CheckBox^ arcanaPro;
	private: System::Windows::Forms::CheckBox^ arcanaExp;
	private: System::Windows::Forms::Label^ arcanaLabel;
	private: System::Windows::Forms::CheckBox^ athleticsPro;
	private: System::Windows::Forms::CheckBox^ athleticsExp;
	private: System::Windows::Forms::Label^ athleticsLabel;
	private: System::Windows::Forms::CheckBox^ deceptionPro;
	private: System::Windows::Forms::CheckBox^ deceptionExp;
	private: System::Windows::Forms::Label^ deceptionLabel;
	private: System::Windows::Forms::CheckBox^ historyPro;
	private: System::Windows::Forms::CheckBox^ historyExp;
	private: System::Windows::Forms::Label^ historyLabel;
	private: System::Windows::Forms::CheckBox^ insightPro;
	private: System::Windows::Forms::CheckBox^ insightExp;
	private: System::Windows::Forms::Label^ insightLabel;
	private: System::Windows::Forms::CheckBox^ intimidationPro;
	private: System::Windows::Forms::CheckBox^ intimidationExp;
	private: System::Windows::Forms::Label^ intimidationLabel;
	private: System::Windows::Forms::CheckBox^ investigationPro;
	private: System::Windows::Forms::CheckBox^ investigationExp;
	private: System::Windows::Forms::Label^ investigationLabel;
	private: System::Windows::Forms::CheckBox^ medicinePro;
	private: System::Windows::Forms::CheckBox^ medicineExp;
	private: System::Windows::Forms::Label^ medicineLabel;
	private: System::Windows::Forms::CheckBox^ naturePro;
	private: System::Windows::Forms::CheckBox^ natureExp;
	private: System::Windows::Forms::Label^ natureLabel;
	private: System::Windows::Forms::CheckBox^ perceptionPro;
	private: System::Windows::Forms::CheckBox^ perceptionExp;
	private: System::Windows::Forms::Label^ perceptionLabel;
	private: System::Windows::Forms::CheckBox^ performancePro;
	private: System::Windows::Forms::CheckBox^ performanceExp;
	private: System::Windows::Forms::Label^ performanceLabel;
	private: System::Windows::Forms::CheckBox^ persuasionPro;
	private: System::Windows::Forms::CheckBox^ persuasionExp;
	private: System::Windows::Forms::Label^ persuasionLabel;
	private: System::Windows::Forms::CheckBox^ religionPro;
	private: System::Windows::Forms::CheckBox^ religionExp;
	private: System::Windows::Forms::Label^ religionLabel;
	private: System::Windows::Forms::CheckBox^ sleightofhandPro;
	private: System::Windows::Forms::CheckBox^ sleightofhandExp;
	private: System::Windows::Forms::Label^ sleightofhandLabel;
	private: System::Windows::Forms::CheckBox^ stealthPro;
	private: System::Windows::Forms::CheckBox^ stealthExp;
	private: System::Windows::Forms::Label^ stealthLabel;
	private: System::Windows::Forms::CheckBox^ survivalPro;
	private: System::Windows::Forms::CheckBox^ survivalExp;
	private: System::Windows::Forms::Label^ survivalLabel;

	// Combat tracker elements
	private: System::Windows::Forms::Label^ hitpointmaximumLabel;
	private: System::Windows::Forms::NumericUpDown^ hitPointMaximum;
	private: System::Windows::Forms::Label^ currenthitpointsLabel;
	private: System::Windows::Forms::NumericUpDown^ currentHitPoints;
	private: System::Windows::Forms::Label^ temporaryhitpointsLabel;
	private: System::Windows::Forms::NumericUpDown^ temporaryHitPoints;
	private: System::Windows::Forms::Label^ armourclassLabel;
	private: System::Windows::Forms::NumericUpDown^ armourClass;
	private: System::Windows::Forms::Label^ initiativemodifierLabel;
	private: System::Windows::Forms::NumericUpDown^ initiativeModifier;
	private: System::Windows::Forms::Label^ movementspeedLabel;
	private: System::Windows::Forms::NumericUpDown^ movementSpeed;

	// Dice elements
	private: System::Windows::Forms::NumericUpDown^ nd4;
	private: System::Windows::Forms::Label^ d4Label;
	private: System::Windows::Forms::Button^ d4Roll;
	private: System::Windows::Forms::Label^ d4Result;
	private: System::Windows::Forms::NumericUpDown^ nd6;
	private: System::Windows::Forms::Label^ d6Label;
	private: System::Windows::Forms::Button^ d6Roll;
	private: System::Windows::Forms::Label^ d6Result;
	private: System::Windows::Forms::NumericUpDown^ nd8;
	private: System::Windows::Forms::Label^ d8Label;
	private: System::Windows::Forms::Button^ d8Roll;
	private: System::Windows::Forms::Label^ d8Result;
	private: System::Windows::Forms::NumericUpDown^ nd10;
	private: System::Windows::Forms::Label^ d10Label;
	private: System::Windows::Forms::Button^ d10Roll;
	private: System::Windows::Forms::Label^ d10Result;
	private: System::Windows::Forms::NumericUpDown^ nd12;
	private: System::Windows::Forms::Label^ d12Label;
	private: System::Windows::Forms::Button^ d12Roll;
	private: System::Windows::Forms::Label^ d12Result;
	private: System::Windows::Forms::NumericUpDown^ nd20;
	private: System::Windows::Forms::Label^ d20Label;
	private: System::Windows::Forms::Button^ d20Roll;
	private: System::Windows::Forms::Label^ d20Result;
	private: System::Windows::Forms::NumericUpDown^ nd100;
	private: System::Windows::Forms::Label^ d100Label;
	private: System::Windows::Forms::Button^ d100Roll;
	private: System::Windows::Forms::Label^ d100Result;
	private: System::Windows::Forms::NumericUpDown^ ndX;
	private: System::Windows::Forms::NumericUpDown^ dXValue;
	private: System::Windows::Forms::Button^ dXRoll;
	private: System::Windows::Forms::Label^ dXResult;
	private: System::Windows::Forms::TextBox^ diceResults;

	// Panel button elements
	private: System::Windows::Forms::Button^ noneButton;
	private: System::Windows::Forms::Button^ equipmentButton;
	private: System::Windows::Forms::Button^ featuresButton;
	private: System::Windows::Forms::Button^ spellsButton;
	private: System::Windows::Forms::Button^ notesButton;

	// Panels
	private: System::Windows::Forms::Panel^ equipmentPanel;
	private: System::Windows::Forms::Panel^ featuresPanel;
	private: System::Windows::Forms::Panel^ spellsPanel;
	private: System::Windows::Forms::Panel^ notesPanel;

	// Equipment panel elements
	private: System::Windows::Forms::Label^ CPLabel;
	private: System::Windows::Forms::NumericUpDown^ CP;
	private: System::Windows::Forms::Label^ SPLabel;
	private: System::Windows::Forms::NumericUpDown^ SP;
	private: System::Windows::Forms::Label^ EPLabel;
	private: System::Windows::Forms::NumericUpDown^ EP;
	private: System::Windows::Forms::Label^ GPLabel;
	private: System::Windows::Forms::NumericUpDown^ GP;
	private: System::Windows::Forms::Label^ PPLabel;
	private: System::Windows::Forms::NumericUpDown^ PP;
	private: System::Windows::Forms::TextBox^ gems;
	private: System::Windows::Forms::TextBox^ weapons;
	private: System::Windows::Forms::TextBox^ misc;

	// Features panel elements
	private: System::Windows::Forms::TextBox^ backgroundFeatures;
	private: System::Windows::Forms::TextBox^ raceFeatures;
	private: System::Windows::Forms::TextBox^ classFeatures;
	private: System::Windows::Forms::TextBox^ otherFeatures;

	// Spells panel elements
	private: System::Windows::Forms::Label^ SpellSaveLabel;
	private: System::Windows::Forms::NumericUpDown^ spellSaveDC;
	private: System::Windows::Forms::Label^ SpellAttackLabel;
	private: System::Windows::Forms::NumericUpDown^ spellAttackModifier;
	private: System::Windows::Forms::Label^ SpellLevelLabel;
	private: System::Windows::Forms::Label^ Level1Label;
	private: System::Windows::Forms::Label^ Level2Label;
	private: System::Windows::Forms::Label^ Level3Label;
	private: System::Windows::Forms::Label^ Level4Label;
	private: System::Windows::Forms::Label^ Level5Label;
	private: System::Windows::Forms::Label^ Level6Label;
	private: System::Windows::Forms::Label^ Level7Label;
	private: System::Windows::Forms::Label^ Level8Label;
	private: System::Windows::Forms::Label^ Level9Label;
	private: System::Windows::Forms::Label^ TotalSlotsLabel;
	private: System::Windows::Forms::NumericUpDown^ level1TotalSlots;
	private: System::Windows::Forms::NumericUpDown^ level2TotalSlots;
	private: System::Windows::Forms::NumericUpDown^ level3TotalSlots;
	private: System::Windows::Forms::NumericUpDown^ level4TotalSlots;
	private: System::Windows::Forms::NumericUpDown^ level5TotalSlots;
	private: System::Windows::Forms::NumericUpDown^ level6TotalSlots;
	private: System::Windows::Forms::NumericUpDown^ level7TotalSlots;
	private: System::Windows::Forms::NumericUpDown^ level8TotalSlots;
	private: System::Windows::Forms::NumericUpDown^ level9TotalSlots;
	private: System::Windows::Forms::Label^ UsedSlotsLabel;
	private: System::Windows::Forms::NumericUpDown^ level1UsedSlots;
	private: System::Windows::Forms::NumericUpDown^ level2UsedSlots;
	private: System::Windows::Forms::NumericUpDown^ level3UsedSlots;
	private: System::Windows::Forms::NumericUpDown^ level4UsedSlots;
	private: System::Windows::Forms::NumericUpDown^ level5UsedSlots;
	private: System::Windows::Forms::NumericUpDown^ level6UsedSlots;
	private: System::Windows::Forms::NumericUpDown^ level7UsedSlots;
	private: System::Windows::Forms::NumericUpDown^ level8UsedSlots;
	private: System::Windows::Forms::NumericUpDown^ level9UsedSlots;
	private: System::Windows::Forms::TextBox^ cantripsKnown;
	private: System::Windows::Forms::TextBox^ spellsKnown;
	private: System::Windows::Forms::TextBox^ spellComponents;

	// Notes panel elements
	private: System::Windows::Forms::TextBox^ notes1;
	private: System::Windows::Forms::TextBox^ notes2;
	private: System::Windows::Forms::TextBox^ notes3;

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

		void setBackground(System::Object^ send, System::EventArgs^ e);
		void setClass(System::Object^ send, System::EventArgs^ e);
		void setSubclass(System::Object^ send, System::EventArgs^ e);
		void setRace(System::Object^ send, System::EventArgs^ e);
		void setSubrace(System::Object^ send, System::EventArgs^ e);
		void randomizeAll(System::Object^ send, System::EventArgs^ e);
		void randomizeBackground(System::Object^ send, System::EventArgs^ e);
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