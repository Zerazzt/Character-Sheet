#include "pch.h"
#include "app.h"

void CppCLRWinformsProjekt::application::createSkills(void)
{
	this->acrobaticsPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->acrobaticsPro);
	this->acrobaticsPro->Location = System::Drawing::Point(90, 215);
	this->acrobaticsPro->Size = System::Drawing::Size(20, 20);
	this->acrobaticsPro->TabIndex = 0;
	this->acrobaticsPro->Name = L"acrobaticsPro";
	this->Controls->Add(this->acrobaticsPro);

	this->acrobaticsExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->acrobaticsExp);
	this->acrobaticsExp->Location = System::Drawing::Point(110, 215);
	this->acrobaticsExp->Size = System::Drawing::Size(35, 20);
	this->acrobaticsExp->TabIndex = 0;
	this->acrobaticsExp->Name = L"acrobaticsExp";
	this->acrobaticsExp->Text = L"-5";
	this->Controls->Add(this->acrobaticsExp);

	this->acrobaticsLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->acrobaticsLabel);
	this->acrobaticsLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->acrobaticsLabel->Location = System::Drawing::Point(145, 215);
	this->acrobaticsLabel->Size = System::Drawing::Size(120, 20);
	this->acrobaticsLabel->TabIndex = 0;
	this->acrobaticsLabel->Name = L"acrobaticsLabel";
	this->acrobaticsLabel->Text = L"Acrobatics (Dex)";
	this->Controls->Add(this->acrobaticsLabel);

	this->animalhandlingPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->animalhandlingPro);
	this->animalhandlingPro->Location = System::Drawing::Point(90, 235);
	this->animalhandlingPro->Size = System::Drawing::Size(20, 20);
	this->animalhandlingPro->TabIndex = 0;
	this->animalhandlingPro->Name = L"animalhandlingPro";
	this->Controls->Add(this->animalhandlingPro);

	this->animalhandlingExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->animalhandlingExp);
	this->animalhandlingExp->Location = System::Drawing::Point(110, 235);
	this->animalhandlingExp->Size = System::Drawing::Size(35, 20);
	this->animalhandlingExp->TabIndex = 0;
	this->animalhandlingExp->Name = L"animalhandlingExp";
	this->animalhandlingExp->Text = L"-5";
	this->Controls->Add(this->animalhandlingExp);

	this->animalhandlingLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->animalhandlingLabel);
	this->animalhandlingLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->animalhandlingLabel->Location = System::Drawing::Point(145, 235);
	this->animalhandlingLabel->Size = System::Drawing::Size(120, 20);
	this->animalhandlingLabel->TabIndex = 0;
	this->animalhandlingLabel->Name = L"animalhandlingLabel";
	this->animalhandlingLabel->Text = L"Animal Handling (Wis)";
	this->Controls->Add(this->animalhandlingLabel);

	this->arcanaPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->arcanaPro);
	this->arcanaPro->Location = System::Drawing::Point(90, 255);
	this->arcanaPro->Size = System::Drawing::Size(20, 20);
	this->arcanaPro->TabIndex = 0;
	this->arcanaPro->Name = L"arcanaPro";
	this->Controls->Add(this->arcanaPro);

	this->arcanaExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->arcanaExp);
	this->arcanaExp->Location = System::Drawing::Point(110, 255);
	this->arcanaExp->Size = System::Drawing::Size(35, 20);
	this->arcanaExp->TabIndex = 0;
	this->arcanaExp->Name = L"arcanaExp";
	this->arcanaExp->Text = L"-5";
	this->Controls->Add(this->arcanaExp);

	this->arcanaLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->arcanaLabel);
	this->arcanaLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->arcanaLabel->Location = System::Drawing::Point(145, 255);
	this->arcanaLabel->Size = System::Drawing::Size(120, 20);
	this->arcanaLabel->TabIndex = 0;
	this->arcanaLabel->Name = L"arcanaLabel";
	this->arcanaLabel->Text = L"Arcana (Int)";
	this->Controls->Add(this->arcanaLabel);

	this->athleticsPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->athleticsPro);
	this->athleticsPro->Location = System::Drawing::Point(90, 275);
	this->athleticsPro->Size = System::Drawing::Size(20, 20);
	this->athleticsPro->TabIndex = 0;
	this->athleticsPro->Name = L"athleticsPro";
	this->Controls->Add(this->athleticsPro);

	this->athleticsExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->athleticsExp);
	this->athleticsExp->Location = System::Drawing::Point(110, 275);
	this->athleticsExp->Size = System::Drawing::Size(35, 20);
	this->athleticsExp->TabIndex = 0;
	this->athleticsExp->Name = L"athleticsExp";
	this->athleticsExp->Text = L"-5";
	this->Controls->Add(this->athleticsExp);

	this->athleticsLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->athleticsLabel);
	this->athleticsLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->athleticsLabel->Location = System::Drawing::Point(145, 275);
	this->athleticsLabel->Size = System::Drawing::Size(120, 20);
	this->athleticsLabel->TabIndex = 0;
	this->athleticsLabel->Name = L"athleticsLabel";
	this->athleticsLabel->Text = L"Athletics (Str)";
	this->Controls->Add(this->athleticsLabel);

	this->deceptionPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->deceptionPro);
	this->deceptionPro->Location = System::Drawing::Point(90, 295);
	this->deceptionPro->Size = System::Drawing::Size(20, 20);
	this->deceptionPro->TabIndex = 0;
	this->deceptionPro->Name = L"deceptionPro";
	this->Controls->Add(this->deceptionPro);

	this->deceptionExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->deceptionExp);
	this->deceptionExp->Location = System::Drawing::Point(110, 295);
	this->deceptionExp->Size = System::Drawing::Size(35, 20);
	this->deceptionExp->TabIndex = 0;
	this->deceptionExp->Name = L"deceptionExp";
	this->deceptionExp->Text = L"-5";
	this->Controls->Add(this->deceptionExp);

	this->deceptionLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->deceptionLabel);
	this->deceptionLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->deceptionLabel->Location = System::Drawing::Point(145, 295);
	this->deceptionLabel->Size = System::Drawing::Size(120, 20);
	this->deceptionLabel->TabIndex = 0;
	this->deceptionLabel->Name = L"deceptionLabel";
	this->deceptionLabel->Text = L"Deception (Cha)";
	this->Controls->Add(this->deceptionLabel);

	this->historyPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->historyPro);
	this->historyPro->Location = System::Drawing::Point(90, 315);
	this->historyPro->Size = System::Drawing::Size(20, 20);
	this->historyPro->TabIndex = 0;
	this->historyPro->Name = L"historyPro";
	this->Controls->Add(this->historyPro);

	this->historyExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->historyExp);
	this->historyExp->Location = System::Drawing::Point(110, 315);
	this->historyExp->Size = System::Drawing::Size(35, 20);
	this->historyExp->TabIndex = 0;
	this->historyExp->Name = L"historyExp";
	this->historyExp->Text = L"-5";
	this->Controls->Add(this->historyExp);

	this->historyLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->historyLabel);
	this->historyLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->historyLabel->Location = System::Drawing::Point(145, 315);
	this->historyLabel->Size = System::Drawing::Size(120, 20);
	this->historyLabel->TabIndex = 0;
	this->historyLabel->Name = L"historyLabel";
	this->historyLabel->Text = L"History (Int)";
	this->Controls->Add(this->historyLabel);

	this->insightPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->insightPro);
	this->insightPro->Location = System::Drawing::Point(90, 335);
	this->insightPro->Size = System::Drawing::Size(20, 20);
	this->insightPro->TabIndex = 0;
	this->insightPro->Name = L"insightPro";
	this->Controls->Add(this->insightPro);

	this->insightExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->insightExp);
	this->insightExp->Location = System::Drawing::Point(110, 335);
	this->insightExp->Size = System::Drawing::Size(35, 20);
	this->insightExp->TabIndex = 0;
	this->insightExp->Name = L"insightExp";
	this->insightExp->Text = L"-5";
	this->Controls->Add(this->insightExp);

	this->insightLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->insightLabel);
	this->insightLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->insightLabel->Location = System::Drawing::Point(145, 335);
	this->insightLabel->Size = System::Drawing::Size(120, 20);
	this->insightLabel->TabIndex = 0;
	this->insightLabel->Name = L"insightLabel";
	this->insightLabel->Text = L"Insight (Wis)";
	this->Controls->Add(this->insightLabel);

	this->intimidationPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->intimidationPro);
	this->intimidationPro->Location = System::Drawing::Point(90, 355);
	this->intimidationPro->Size = System::Drawing::Size(20, 20);
	this->intimidationPro->TabIndex = 0;
	this->intimidationPro->Name = L"intimidationPro";
	this->Controls->Add(this->intimidationPro);

	this->intimidationExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->intimidationExp);
	this->intimidationExp->Location = System::Drawing::Point(110, 355);
	this->intimidationExp->Size = System::Drawing::Size(35, 20);
	this->intimidationExp->TabIndex = 0;
	this->intimidationExp->Name = L"intimidationExp";
	this->intimidationExp->Text = L"-5";
	this->Controls->Add(this->intimidationExp);

	this->intimidationLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->intimidationLabel);
	this->intimidationLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->intimidationLabel->Location = System::Drawing::Point(145, 355);
	this->intimidationLabel->Size = System::Drawing::Size(120, 20);
	this->intimidationLabel->TabIndex = 0;
	this->intimidationLabel->Name = L"intimidationLabel";
	this->intimidationLabel->Text = L"Intimidation (Cha)";
	this->Controls->Add(this->intimidationLabel);

	this->investigationPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->investigationPro);
	this->investigationPro->Location = System::Drawing::Point(90, 375);
	this->investigationPro->Size = System::Drawing::Size(20, 20);
	this->investigationPro->TabIndex = 0;
	this->investigationPro->Name = L"investigationPro";
	this->Controls->Add(this->investigationPro);

	this->investigationExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->investigationExp);
	this->investigationExp->Location = System::Drawing::Point(110, 375);
	this->investigationExp->Size = System::Drawing::Size(35, 20);
	this->investigationExp->TabIndex = 0;
	this->investigationExp->Name = L"investigationExp";
	this->investigationExp->Text = L"-5";
	this->Controls->Add(this->investigationExp);

	this->investigationLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->investigationLabel);
	this->investigationLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->investigationLabel->Location = System::Drawing::Point(145, 375);
	this->investigationLabel->Size = System::Drawing::Size(120, 20);
	this->investigationLabel->TabIndex = 0;
	this->investigationLabel->Name = L"investigationLabel";
	this->investigationLabel->Text = L"Investigation (Int)";
	this->Controls->Add(this->investigationLabel);

	this->medicinePro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->medicinePro);
	this->medicinePro->Location = System::Drawing::Point(90, 395);
	this->medicinePro->Size = System::Drawing::Size(20, 20);
	this->medicinePro->TabIndex = 0;
	this->medicinePro->Name = L"medicinePro";
	this->Controls->Add(this->medicinePro);

	this->medicineExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->medicineExp);
	this->medicineExp->Location = System::Drawing::Point(110, 395);
	this->medicineExp->Size = System::Drawing::Size(35, 20);
	this->medicineExp->TabIndex = 0;
	this->medicineExp->Name = L"medicineExp";
	this->medicineExp->Text = L"-5";
	this->Controls->Add(this->medicineExp);

	this->medicineLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->medicineLabel);
	this->medicineLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->medicineLabel->Location = System::Drawing::Point(145, 395);
	this->medicineLabel->Size = System::Drawing::Size(120, 20);
	this->medicineLabel->TabIndex = 0;
	this->medicineLabel->Name = L"medicineLabel";
	this->medicineLabel->Text = L"Medicine (Wis)";
	this->Controls->Add(this->medicineLabel);

	this->naturePro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->naturePro);
	this->naturePro->Location = System::Drawing::Point(90, 415);
	this->naturePro->Size = System::Drawing::Size(20, 20);
	this->naturePro->TabIndex = 0;
	this->naturePro->Name = L"naturePro";
	this->Controls->Add(this->naturePro);

	this->natureExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->natureExp);
	this->natureExp->Location = System::Drawing::Point(110, 415);
	this->natureExp->Size = System::Drawing::Size(35, 20);
	this->natureExp->TabIndex = 0;
	this->natureExp->Name = L"natureExp";
	this->natureExp->Text = L"-5";
	this->Controls->Add(this->natureExp);

	this->natureLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->natureLabel);
	this->natureLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->natureLabel->Location = System::Drawing::Point(145, 415);
	this->natureLabel->Size = System::Drawing::Size(120, 20);
	this->natureLabel->TabIndex = 0;
	this->natureLabel->Name = L"natureLabel";
	this->natureLabel->Text = L"Nature (Int)";
	this->Controls->Add(this->natureLabel);

	this->perceptionPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->perceptionPro);
	this->perceptionPro->Location = System::Drawing::Point(90, 435);
	this->perceptionPro->Size = System::Drawing::Size(20, 20);
	this->perceptionPro->TabIndex = 0;
	this->perceptionPro->Name = L"perceptionPro";
	this->Controls->Add(this->perceptionPro);

	this->perceptionExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->perceptionExp);
	this->perceptionExp->Location = System::Drawing::Point(110, 435);
	this->perceptionExp->Size = System::Drawing::Size(35, 20);
	this->perceptionExp->TabIndex = 0;
	this->perceptionExp->Name = L"perceptionExp";
	this->perceptionExp->Text = L"-5";
	this->Controls->Add(this->perceptionExp);

	this->perceptionLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->perceptionLabel);
	this->perceptionLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->perceptionLabel->Location = System::Drawing::Point(145, 435);
	this->perceptionLabel->Size = System::Drawing::Size(120, 20);
	this->perceptionLabel->TabIndex = 0;
	this->perceptionLabel->Name = L"perceptionLabel";
	this->perceptionLabel->Text = L"Perception (Wis)";
	this->Controls->Add(this->perceptionLabel);

	this->performancePro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->performancePro);
	this->performancePro->Location = System::Drawing::Point(90, 455);
	this->performancePro->Size = System::Drawing::Size(20, 20);
	this->performancePro->TabIndex = 0;
	this->performancePro->Name = L"performancePro";
	this->Controls->Add(this->performancePro);

	this->performanceExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->performanceExp);
	this->performanceExp->Location = System::Drawing::Point(110, 455);
	this->performanceExp->Size = System::Drawing::Size(35, 20);
	this->performanceExp->TabIndex = 0;
	this->performanceExp->Name = L"performanceExp";
	this->performanceExp->Text = L"-5";
	this->Controls->Add(this->performanceExp);

	this->performanceLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->performanceLabel);
	this->performanceLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->performanceLabel->Location = System::Drawing::Point(145, 455);
	this->performanceLabel->Size = System::Drawing::Size(120, 20);
	this->performanceLabel->TabIndex = 0;
	this->performanceLabel->Name = L"performanceLabel";
	this->performanceLabel->Text = L"performance";
	this->Controls->Add(this->performanceLabel);

	this->persuasionPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->persuasionPro);
	this->persuasionPro->Location = System::Drawing::Point(90, 475);
	this->persuasionPro->Size = System::Drawing::Size(20, 20);
	this->persuasionPro->TabIndex = 0;
	this->persuasionPro->Name = L"persuasionPro";
	this->Controls->Add(this->persuasionPro);

	this->persuasionExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->persuasionExp);
	this->persuasionExp->Location = System::Drawing::Point(110, 475);
	this->persuasionExp->Size = System::Drawing::Size(35, 20);
	this->persuasionExp->TabIndex = 0;
	this->persuasionExp->Name = L"persuasionExp";
	this->persuasionExp->Text = L"-5";
	this->Controls->Add(this->persuasionExp);

	this->persuasionLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->persuasionLabel);
	this->persuasionLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->persuasionLabel->Location = System::Drawing::Point(145, 475);
	this->persuasionLabel->Size = System::Drawing::Size(120, 20);
	this->persuasionLabel->TabIndex = 0;
	this->persuasionLabel->Name = L"persuasionLabel";
	this->persuasionLabel->Text = L"Persuasion (Cha)";
	this->Controls->Add(this->persuasionLabel);

	this->religionPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->religionPro);
	this->religionPro->Location = System::Drawing::Point(90, 495);
	this->religionPro->Size = System::Drawing::Size(20, 20);
	this->religionPro->TabIndex = 0;
	this->religionPro->Name = L"religionPro";
	this->Controls->Add(this->religionPro);

	this->religionExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->religionExp);
	this->religionExp->Location = System::Drawing::Point(110, 495);
	this->religionExp->Size = System::Drawing::Size(35, 20);
	this->religionExp->TabIndex = 0;
	this->religionExp->Name = L"religionExp";
	this->religionExp->Text = L"-5";
	this->Controls->Add(this->religionExp);

	this->religionLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->religionLabel);
	this->religionLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->religionLabel->Location = System::Drawing::Point(145, 495);
	this->religionLabel->Size = System::Drawing::Size(120, 20);
	this->religionLabel->TabIndex = 0;
	this->religionLabel->Name = L"religionLabel";
	this->religionLabel->Text = L"Religion (Int)";
	this->Controls->Add(this->religionLabel);

	this->sleightofhandPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->sleightofhandPro);
	this->sleightofhandPro->Location = System::Drawing::Point(90, 515);
	this->sleightofhandPro->Size = System::Drawing::Size(20, 20);
	this->sleightofhandPro->TabIndex = 0;
	this->sleightofhandPro->Name = L"sleightofhandPro";
	this->Controls->Add(this->sleightofhandPro);

	this->sleightofhandExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->sleightofhandExp);
	this->sleightofhandExp->Location = System::Drawing::Point(110, 515);
	this->sleightofhandExp->Size = System::Drawing::Size(35, 20);
	this->sleightofhandExp->TabIndex = 0;
	this->sleightofhandExp->Name = L"sleightofhandExp";
	this->sleightofhandExp->Text = L"-5";
	this->Controls->Add(this->sleightofhandExp);

	this->sleightofhandLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->sleightofhandLabel);
	this->sleightofhandLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->sleightofhandLabel->Location = System::Drawing::Point(145, 515);
	this->sleightofhandLabel->Size = System::Drawing::Size(120, 20);
	this->sleightofhandLabel->TabIndex = 0;
	this->sleightofhandLabel->Name = L"sleightofhandLabel";
	this->sleightofhandLabel->Text = L"Sleight of Hand (Dex)";
	this->Controls->Add(this->sleightofhandLabel);

	this->stealthPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->stealthPro);
	this->stealthPro->Location = System::Drawing::Point(90, 535);
	this->stealthPro->Size = System::Drawing::Size(20, 20);
	this->stealthPro->TabIndex = 0;
	this->stealthPro->Name = L"stealthPro";
	this->Controls->Add(this->stealthPro);

	this->stealthExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->stealthExp);
	this->stealthExp->Location = System::Drawing::Point(110, 535);
	this->stealthExp->Size = System::Drawing::Size(35, 20);
	this->stealthExp->TabIndex = 0;
	this->stealthExp->Name = L"stealthExp";
	this->stealthExp->Text = L"-5";
	this->Controls->Add(this->stealthExp);

	this->stealthLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->stealthLabel);
	this->stealthLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->stealthLabel->Location = System::Drawing::Point(145, 535);
	this->stealthLabel->Size = System::Drawing::Size(120, 20);
	this->stealthLabel->TabIndex = 0;
	this->stealthLabel->Name = L"stealthLabel";
	this->stealthLabel->Text = L"Stealth (Dex)";
	this->Controls->Add(this->stealthLabel);

	this->survivalPro = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->survivalPro);
	this->survivalPro->Location = System::Drawing::Point(90, 555);
	this->survivalPro->Size = System::Drawing::Size(20, 20);
	this->survivalPro->TabIndex = 0;
	this->survivalPro->Name = L"survivalPro";
	this->Controls->Add(this->survivalPro);

	this->survivalExp = (gcnew System::Windows::Forms::CheckBox());
	this->components->Add(this->survivalExp);
	this->survivalExp->Location = System::Drawing::Point(110, 555);
	this->survivalExp->Size = System::Drawing::Size(35, 20);
	this->survivalExp->TabIndex = 0;
	this->survivalExp->Name = L"survivalExp";
	this->survivalExp->Text = L"-5";
	this->Controls->Add(this->survivalExp);

	this->survivalLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->survivalLabel);
	this->survivalLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	this->survivalLabel->Location = System::Drawing::Point(145, 555);
	this->survivalLabel->Size = System::Drawing::Size(120, 20);
	this->survivalLabel->TabIndex = 0;
	this->survivalLabel->Name = L"survivalLabel";
	this->survivalLabel->Text = L"Survival (Wis)";
	this->Controls->Add(this->survivalLabel);
}