#include "pch.h"
#include "app.h"

void CppCLRWinformsProjekt::application::createDiceElements(void)
{
	this->nd4 = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->nd4);
	this->nd4->Location = System::Drawing::Point(300, 215);
	this->nd4->Size = System::Drawing::Size(40, 20);
	this->nd4->Name = L"nd4";
	this->Controls->Add(this->nd4);

	this->d4Label = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->d4Label);
	this->d4Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->d4Label->Location = System::Drawing::Point(340, 215);
	this->d4Label->Size = System::Drawing::Size(40, 20);
	this->d4Label->Name = L"d4Label";
	this->d4Label->Text = L"d4";
	this->Controls->Add(this->d4Label);

	this->d4Roll = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->d4Roll);
	this->d4Roll->Location = System::Drawing::Point(385, 215);
	this->d4Roll->Size = System::Drawing::Size(55, 20);
	this->d4Roll->Name = L"d4Roll";
	this->d4Roll->Text = L"Roll";
	this->Controls->Add(this->d4Roll);

	this->d4Result = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->d4Result);
	this->d4Result->Location = System::Drawing::Point(440, 215);
	this->d4Result->Size = System::Drawing::Size(40, 20);
	this->d4Result->Name = L"d4Result";
	this->d4Result->Text = L"";
	this->Controls->Add(this->d4Result);

	this->nd6 = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->nd6);
	this->nd6->Location = System::Drawing::Point(300, 235);
	this->nd6->Size = System::Drawing::Size(40, 20);
	this->nd6->Name = L"nd6";
	this->Controls->Add(this->nd6);

	this->d6Label = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->d6Label);
	this->d6Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->d6Label->Location = System::Drawing::Point(340, 235);
	this->d6Label->Size = System::Drawing::Size(40, 20);
	this->d6Label->Name = L"d6Label";
	this->d6Label->Text = L"d6";
	this->Controls->Add(this->d6Label);

	this->d6Roll = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->d6Roll);
	this->d6Roll->Location = System::Drawing::Point(385, 235);
	this->d6Roll->Size = System::Drawing::Size(55, 20);
	this->d6Roll->Name = L"d6Roll";
	this->d6Roll->Text = L"Roll";
	this->Controls->Add(this->d6Roll);

	this->d6Result = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->d6Result);
	this->d6Result->Location = System::Drawing::Point(440, 235);
	this->d6Result->Size = System::Drawing::Size(40, 20);
	this->d6Result->Name = L"d6Result";
	this->d6Result->Text = L"";
	this->Controls->Add(this->d6Result);

	this->nd8 = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->nd8);
	this->nd8->Location = System::Drawing::Point(300, 255);
	this->nd8->Size = System::Drawing::Size(40, 20);
	this->nd8->Name = L"nd8";
	this->Controls->Add(this->nd8);

	this->d8Label = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->d8Label);
	this->d8Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->d8Label->Location = System::Drawing::Point(340, 255);
	this->d8Label->Size = System::Drawing::Size(40, 20);
	this->d8Label->Name = L"d8Label";
	this->d8Label->Text = L"d8";
	this->Controls->Add(this->d8Label);

	this->d8Roll = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->d8Roll);
	this->d8Roll->Location = System::Drawing::Point(385, 255);
	this->d8Roll->Size = System::Drawing::Size(55, 20);
	this->d8Roll->Name = L"d8Roll";
	this->d8Roll->Text = L"Roll";
	this->Controls->Add(this->d8Roll);

	this->d8Result = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->d8Result);
	this->d8Result->Location = System::Drawing::Point(440, 255);
	this->d8Result->Size = System::Drawing::Size(40, 20);
	this->d8Result->Name = L"d8Result";
	this->d8Result->Text = L"";
	this->Controls->Add(this->d8Result);

	this->nd10 = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->nd10);
	this->nd10->Location = System::Drawing::Point(300, 275);
	this->nd10->Size = System::Drawing::Size(40, 20);
	this->nd10->Name = L"nd10";
	this->Controls->Add(this->nd10);

	this->d10Label = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->d10Label);
	this->d10Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->d10Label->Location = System::Drawing::Point(340, 275);
	this->d10Label->Size = System::Drawing::Size(40, 20);
	this->d10Label->Name = L"d10Label";
	this->d10Label->Text = L"d10";
	this->Controls->Add(this->d10Label);

	this->d10Roll = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->d10Roll);
	this->d10Roll->Location = System::Drawing::Point(385, 275);
	this->d10Roll->Size = System::Drawing::Size(55, 20);
	this->d10Roll->Name = L"d10Roll";
	this->d10Roll->Text = L"Roll";
	this->Controls->Add(this->d10Roll);

	this->d10Result = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->d10Result);
	this->d10Result->Location = System::Drawing::Point(440, 275);
	this->d10Result->Size = System::Drawing::Size(40, 20);
	this->d10Result->Name = L"d10Result";
	this->d10Result->Text = L"";
	this->Controls->Add(this->d10Result);

	this->nd12 = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->nd12);
	this->nd12->Location = System::Drawing::Point(300, 295);
	this->nd12->Size = System::Drawing::Size(40, 20);
	this->nd12->Name = L"nd12";
	this->Controls->Add(this->nd12);

	this->d12Label = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->d12Label);
	this->d12Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->d12Label->Location = System::Drawing::Point(340, 295);
	this->d12Label->Size = System::Drawing::Size(40, 20);
	this->d12Label->Name = L"d12Label";
	this->d12Label->Text = L"d12";
	this->Controls->Add(this->d12Label);

	this->d12Roll = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->d12Roll);
	this->d12Roll->Location = System::Drawing::Point(385, 295);
	this->d12Roll->Size = System::Drawing::Size(55, 20);
	this->d12Roll->Name = L"d12Roll";
	this->d12Roll->Text = L"Roll";
	this->Controls->Add(this->d12Roll);

	this->d12Result = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->d12Result);
	this->d12Result->Location = System::Drawing::Point(440, 295);
	this->d12Result->Size = System::Drawing::Size(40, 20);
	this->d12Result->Name = L"d12Result";
	this->d12Result->Text = L"";
	this->Controls->Add(this->d12Result);

	this->nd20 = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->nd20);
	this->nd20->Location = System::Drawing::Point(300, 315);
	this->nd20->Size = System::Drawing::Size(40, 20);
	this->nd20->Name = L"nd20";
	this->Controls->Add(this->nd20);

	this->d20Label = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->d20Label);
	this->d20Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->d20Label->Location = System::Drawing::Point(340, 315);
	this->d20Label->Size = System::Drawing::Size(40, 20);
	this->d20Label->Name = L"d20Label";
	this->d20Label->Text = L"d20";
	this->Controls->Add(this->d20Label);

	this->d20Roll = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->d20Roll);
	this->d20Roll->Location = System::Drawing::Point(385, 315);
	this->d20Roll->Size = System::Drawing::Size(55, 20);
	this->d20Roll->Name = L"d20Roll";
	this->d20Roll->Text = L"Roll";
	this->Controls->Add(this->d20Roll);

	this->d20Result = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->d20Result);
	this->d20Result->Location = System::Drawing::Point(440, 315);
	this->d20Result->Size = System::Drawing::Size(40, 20);
	this->d20Result->Name = L"d20Result";
	this->d20Result->Text = L"";
	this->Controls->Add(this->d20Result);

	this->nd100 = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->nd100);
	this->nd100->Location = System::Drawing::Point(300, 335);
	this->nd100->Size = System::Drawing::Size(40, 20);
	this->nd100->Name = L"nd100";
	this->Controls->Add(this->nd100);

	this->d100Label = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->d100Label);
	this->d100Label->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->d100Label->Location = System::Drawing::Point(340, 335);
	this->d100Label->Size = System::Drawing::Size(40, 20);
	this->d100Label->Name = L"d100Label";
	this->d100Label->Text = L"d100";
	this->Controls->Add(this->d100Label);

	this->d100Roll = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->d100Roll);
	this->d100Roll->Location = System::Drawing::Point(385, 335);
	this->d100Roll->Size = System::Drawing::Size(55, 20);
	this->d100Roll->Name = L"d100Roll";
	this->d100Roll->Text = L"Roll";
	this->Controls->Add(this->d100Roll);

	this->d100Result = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->d100Result);
	this->d100Result->Location = System::Drawing::Point(440, 335);
	this->d100Result->Size = System::Drawing::Size(40, 20);
	this->d100Result->Name = L"d100Result";
	this->d100Result->Text = L"";
	this->Controls->Add(this->d100Result);

	this->ndX = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->ndX);
	this->ndX->Location = System::Drawing::Point(300, 355);
	this->ndX->Size = System::Drawing::Size(40, 20);
	this->ndX->Name = L"ndX";
	this->Controls->Add(this->ndX);

	this->dXValue = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->dXValue);
	this->dXValue->Location = System::Drawing::Point(340, 355);
	this->dXValue->Size = System::Drawing::Size(40, 20);
	this->dXValue->Name = L"dXValue";
	this->Controls->Add(this->dXValue);

	this->dXRoll = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->dXRoll);
	this->dXRoll->Location = System::Drawing::Point(385, 355);
	this->dXRoll->Size = System::Drawing::Size(55, 20);
	this->dXRoll->Name = L"dXRoll";
	this->dXRoll->Text = L"Roll";
	this->Controls->Add(this->dXRoll);

	this->dXResult = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->dXResult);
	this->dXResult->Location = System::Drawing::Point(440, 355);
	this->dXResult->Size = System::Drawing::Size(40, 20);
	this->dXResult->Name = L"dXResult";
	this->dXResult->Text = L"";
	this->Controls->Add(this->dXResult);

	this->diceResults = (gcnew System::Windows::Forms::TextBox());
	this->components->Add(this->diceResults);
	this->diceResults->Multiline = true;
	this->diceResults->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->diceResults->Location = System::Drawing::Point(300, 400);
	this->diceResults->Size = System::Drawing::Size(180, 180);
	this->diceResults->Name = L"diceResults";
	this->Controls->Add(this->diceResults);
}