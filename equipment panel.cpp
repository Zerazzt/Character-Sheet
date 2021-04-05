#include "pch.h"
#include "app.h"

void CppCLRWinformsProjekt::application::createEquipmentPanel(void)
{
	this->equipmentPanel = (gcnew System::Windows::Forms::Panel());
	this->components->Add(this->equipmentPanel);
	this->equipmentPanel->Location = System::Drawing::Point(0, 0);
	this->equipmentPanel->Size = System::Drawing::Size(1266, 639);
	this->equipmentPanel->Name = L"equipmentPanel";
	this->Controls->Add(this->equipmentPanel);

	this->CPLabel = (gcnew System::Windows::Forms::Label());
	this->CPLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->CPLabel->Location = System::Drawing::Point(500, 75);
	this->CPLabel->Size = System::Drawing::Size(30, 20);
	this->CPLabel->Name = L"CPLabel";
	this->CPLabel->Text = L"CP:";

	this->CP = (gcnew System::Windows::Forms::NumericUpDown());
	this->CP->Location = System::Drawing::Point(530, 75);
	this->CP->Size = System::Drawing::Size(100, 20);
	this->CP->Name = L"CP";
	this->CP->Maximum = 1000000;

	this->SPLabel = (gcnew System::Windows::Forms::Label());
	this->SPLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->SPLabel->Location = System::Drawing::Point(500, 95);
	this->SPLabel->Size = System::Drawing::Size(30, 20);
	this->SPLabel->Name = L"SPLabel";
	this->SPLabel->Text = L"SP:";

	this->SP = (gcnew System::Windows::Forms::NumericUpDown());
	this->SP->Location = System::Drawing::Point(530, 95);
	this->SP->Size = System::Drawing::Size(100, 20);
	this->SP->Name = L"SP";
	this->SP->Maximum = 1000000;

	this->EPLabel = (gcnew System::Windows::Forms::Label());
	this->EPLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->EPLabel->Location = System::Drawing::Point(500, 115);
	this->EPLabel->Size = System::Drawing::Size(30, 20);
	this->EPLabel->Name = L"EPLabel";
	this->EPLabel->Text = L"EP:";

	this->EP = (gcnew System::Windows::Forms::NumericUpDown());
	this->EP->Location = System::Drawing::Point(530, 115);
	this->EP->Size = System::Drawing::Size(100, 20);
	this->EP->Name = L"EP";
	this->EP->Maximum = 1000000;

	this->GPLabel = (gcnew System::Windows::Forms::Label());
	this->GPLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->GPLabel->Location = System::Drawing::Point(500, 135);
	this->GPLabel->Size = System::Drawing::Size(30, 20);
	this->GPLabel->Name = L"GPLabel";
	this->GPLabel->Text = L"GP:";

	this->GP = (gcnew System::Windows::Forms::NumericUpDown());
	this->GP->Location = System::Drawing::Point(530, 135);
	this->GP->Size = System::Drawing::Size(100, 20);
	this->GP->Name = L"GP";
	this->GP->Maximum = 1000000

	this->PPLabel = (gcnew System::Windows::Forms::Label());
	this->PPLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->PPLabel->Location = System::Drawing::Point(500, 155);
	this->PPLabel->Size = System::Drawing::Size(30, 20);
	this->PPLabel->Name = L"PPLabel";
	this->PPLabel->Text = L"PP:";

	this->PP = (gcnew System::Windows::Forms::NumericUpDown());
	this->PP->Location = System::Drawing::Point(530, 155);
	this->PP->Size = System::Drawing::Size(100, 20);
	this->PP->Name = L"PP";
	this->PP->Maximum = 1000000;

	this->gems = (gcnew System::Windows::Forms::TextBox());
	this->gems->Multiline = true;
	this->gems->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->gems->Location = System::Drawing::Point(500, 180);
	this->gems->Size = System::Drawing::Size(130, 395);
	this->gems->Name = L"gems";

	this->weapons = (gcnew System::Windows::Forms::TextBox());
	this->weapons->Multiline = true;
	this->weapons->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->weapons->Location = System::Drawing::Point(635, 75);
	this->weapons->Size = System::Drawing::Size(300, 500);
	this->weapons->Name = L"weapons";

	this->misc = (gcnew System::Windows::Forms::TextBox());
	this->misc->Multiline = true;
	this->misc->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->misc->Location = System::Drawing::Point(940, 75);
	this->misc->Size = System::Drawing::Size(300, 500);
	this->misc->Name = L"misc";

	this->equipmentPanel->Controls->Add(this->CPLabel);
	this->equipmentPanel->Controls->Add(this->CP);
	this->equipmentPanel->Controls->Add(this->SPLabel);
	this->equipmentPanel->Controls->Add(this->SP);
	this->equipmentPanel->Controls->Add(this->EPLabel);
	this->equipmentPanel->Controls->Add(this->EP);
	this->equipmentPanel->Controls->Add(this->GPLabel);
	this->equipmentPanel->Controls->Add(this->GP);
	this->equipmentPanel->Controls->Add(this->PPLabel);
	this->equipmentPanel->Controls->Add(this->PP);
	this->equipmentPanel->Controls->Add(this->gems);
	this->equipmentPanel->Controls->Add(this->weapons);
	this->equipmentPanel->Controls->Add(this->misc);

	this->equipmentPanel->Visible = false;
}