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
	private: System::Windows::Forms::Button^ button1;
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeFormBody(void);
		void createLoadBar(void);
#pragma endregion
	};
}