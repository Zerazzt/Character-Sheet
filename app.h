#pragma once
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
	private: System::Windows::Forms::Button^ Save;
	private: System::Windows::Forms::Button^ Load;

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
		void InitializeFormBody(void);
		void createLoadBar(void);
		void createAbilityScores(void);
		void createSavingThrows(void);

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
#pragma endregion
	};
}