#pragma once

namespace CppCLRWinformsProjekt {
	public ref class application : public System::Windows::Forms::Form
	{
	public:
		application(void)
		{
			InitializeFormBody();
			createLoadBar();
		}
	// Loading bar stuff
	private: System::Windows::Forms::Label^ NameLabel;
	private: System::Windows::Forms::Label^ LevelLabel;
	private: System::Windows::Forms::Label^ BackgroundLabel;
	private: System::Windows::Forms::Label^ AlignmentLabel;
	private: System::Windows::Forms::Label^ ClassLabel;
	private: System::Windows::Forms::Label^ SubclassLabel;
	private: System::Windows::Forms::Label^ RaceLabel;
	private: System::Windows::Forms::Label^ SubraceLabel;
	private: System::Windows::Forms::TextBox^ charName;
	private: System::Windows::Forms::NumericUpDown^ charLevel;
	private: System::Windows::Forms::ComboBox^ charBackground;
	private: System::Windows::Forms::ComboBox^ charAlignment;
	private: System::Windows::Forms::ComboBox^ charClass;
	private: System::Windows::Forms::ComboBox^ charSubclass;
	private: System::Windows::Forms::ComboBox^ charRace;
	private: System::Windows::Forms::ComboBox^ charSubrace;
	private: System::Windows::Forms::Button^ RandomizeAll;
	private: System::Windows::Forms::Button^ RandomizeClass;
	private: System::Windows::Forms::Button^ RandomizeBackground;
	private: System::Windows::Forms::Button^ RandomizeRace;
	private: System::Windows::Forms::Button^ Save;
	private: System::Windows::Forms::Button^ Load;
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
#pragma endregion
	};
}