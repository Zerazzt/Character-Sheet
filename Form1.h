#pragma once

namespace CppCLRWinformsProjekt {
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeFormBody();
			createLoadBar();
		}

	protected:
	private: System::Windows::Forms::Button^ RandomizeAll;
	private: System::Windows::Forms::Button^ RandomizeClass;
	private: System::Windows::Forms::Button^ RandomizeBackground;
	private: System::Windows::Forms::Button^ RandomizeRace;
	private: System::Windows::Forms::Button^ Save;
	private: System::Windows::Forms::Button^ Load;
		~Form1()
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