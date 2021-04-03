#include "pch.h"
#include "app.h"

void CppCLRWinformsProjekt::application::createFeaturesPanel(void)
{
	this->featuresPanel = (gcnew System::Windows::Forms::Panel());
	this->components->Add(this->featuresPanel);
	this->featuresPanel->Location = System::Drawing::Point(0, 0);
	this->featuresPanel->Size = System::Drawing::Size(1266, 639);
	this->featuresPanel->Name = L"featuresPanel";
	this->Controls->Add(this->featuresPanel);

	this->backgroundFeatures = (gcnew System::Windows::Forms::TextBox());
	this->backgroundFeatures->Multiline = true;
	this->backgroundFeatures->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->backgroundFeatures->Location = System::Drawing::Point(500, 75);
	this->backgroundFeatures->Size = System::Drawing::Size(245, 247);
	this->backgroundFeatures->Name = L"backgroundFeatures";

	this->raceFeatures = (gcnew System::Windows::Forms::TextBox());
	this->raceFeatures->Multiline = true;
	this->raceFeatures->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->raceFeatures->Location = System::Drawing::Point(500, 327);
	this->raceFeatures->Size = System::Drawing::Size(245, 248);
	this->raceFeatures->Name = L"raceFeatures";

	this->classFeatures = (gcnew System::Windows::Forms::TextBox());
	this->classFeatures->Multiline = true;
	this->classFeatures->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->classFeatures->Location = System::Drawing::Point(750, 75);
	this->classFeatures->Size = System::Drawing::Size(245, 500);
	this->classFeatures->Name = L"classFeatures";

	this->otherFeatures = (gcnew System::Windows::Forms::TextBox());
	this->otherFeatures->Multiline = true;
	this->otherFeatures->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
	this->otherFeatures->Location = System::Drawing::Point(1000, 75);
	this->otherFeatures->Size = System::Drawing::Size(245, 500);
	this->otherFeatures->Name = L"otherFeatures";

	this->featuresPanel->Controls->Add(this->backgroundFeatures);
	this->featuresPanel->Controls->Add(this->raceFeatures);
	this->featuresPanel->Controls->Add(this->classFeatures);
	this->featuresPanel->Controls->Add(this->otherFeatures);

	this->featuresPanel->Visible = false;
}