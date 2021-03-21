#include "pch.h"
#include "app.h"

void CppCLRWinformsProjekt::application::createCombatTrackerElements(void)
{
	this->hitpointmaximumLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->hitpointmaximumLabel);
	this->hitpointmaximumLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->hitpointmaximumLabel->Location = System::Drawing::Point(300, 75);
	this->hitpointmaximumLabel->Size = System::Drawing::Size(130, 20);
	this->hitpointmaximumLabel->Name = L"hitpointmaximumLabel";
	this->hitpointmaximumLabel->Text = L"Hit Point Maximum:";
	this->Controls->Add(this->hitpointmaximumLabel);

	this->hitPointMaximum = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->hitPointMaximum);
	this->hitPointMaximum->Location = System::Drawing::Point(430, 75);
	this->hitPointMaximum->Size = System::Drawing::Size(50, 20);
	this->hitPointMaximum->Name = L"hitPointMaximum";
	this->Controls->Add(this->hitPointMaximum);

	this->currenthitpointsLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->currenthitpointsLabel);
	this->currenthitpointsLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->currenthitpointsLabel->Location = System::Drawing::Point(300, 95);
	this->currenthitpointsLabel->Size = System::Drawing::Size(130, 20);
	this->currenthitpointsLabel->Name = L"currenthitpointsLabel";
	this->currenthitpointsLabel->Text = L"Current Hit Points:";
	this->Controls->Add(this->currenthitpointsLabel);

	this->currentHitPoints = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->currentHitPoints);
	this->currentHitPoints->Location = System::Drawing::Point(430, 95);
	this->currentHitPoints->Size = System::Drawing::Size(50, 20);
	this->currentHitPoints->Name = L"currentHitPoints";
	this->Controls->Add(this->currentHitPoints);

	this->temporaryhitpointsLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->temporaryhitpointsLabel);
	this->temporaryhitpointsLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->temporaryhitpointsLabel->Location = System::Drawing::Point(300, 115);
	this->temporaryhitpointsLabel->Size = System::Drawing::Size(130, 20);
	this->temporaryhitpointsLabel->Name = L"temporaryhitpointsLabel";
	this->temporaryhitpointsLabel->Text = L"Temporary Hit Points:";
	this->Controls->Add(this->temporaryhitpointsLabel);

	this->temporaryHitPoints = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->temporaryHitPoints);
	this->temporaryHitPoints->Location = System::Drawing::Point(430, 115);
	this->temporaryHitPoints->Size = System::Drawing::Size(50, 20);
	this->temporaryHitPoints->Name = L"temporaryHitPoints";
	this->Controls->Add(this->temporaryHitPoints);

	this->armourclassLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->armourclassLabel);
	this->armourclassLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->armourclassLabel->Location = System::Drawing::Point(300, 135);
	this->armourclassLabel->Size = System::Drawing::Size(130, 20);
	this->armourclassLabel->Name = L"armourclassLabel";
	this->armourclassLabel->Text = L"Armour Class:";
	this->Controls->Add(this->armourclassLabel);

	this->armourClass = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->armourClass);
	this->armourClass->Location = System::Drawing::Point(430, 135);
	this->armourClass->Size = System::Drawing::Size(50, 20);
	this->armourClass->Name = L"armourClass";
	this->Controls->Add(this->armourClass);

	this->initiativemodifierLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->initiativemodifierLabel);
	this->initiativemodifierLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->initiativemodifierLabel->Location = System::Drawing::Point(300, 155);
	this->initiativemodifierLabel->Size = System::Drawing::Size(130, 20);
	this->initiativemodifierLabel->Name = L"initiativemodifierLabel";
	this->initiativemodifierLabel->Text = L"Initiative Modifier:";
	this->Controls->Add(this->initiativemodifierLabel);

	this->initiativeModifier = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->initiativeModifier);
	this->initiativeModifier->Location = System::Drawing::Point(430, 155);
	this->initiativeModifier->Size = System::Drawing::Size(50, 20);
	this->initiativeModifier->Name = L"initiativeModifier";
	this->Controls->Add(this->initiativeModifier);

	this->movementspeedLabel = (gcnew System::Windows::Forms::Label());
	this->components->Add(this->movementspeedLabel);
	this->movementspeedLabel->Font = (gcnew System::Drawing::Font("Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point));
	this->movementspeedLabel->Location = System::Drawing::Point(300, 175);
	this->movementspeedLabel->Size = System::Drawing::Size(130, 20);
	this->movementspeedLabel->Name = L"movementspeedLabel";
	this->movementspeedLabel->Text = L"Movement Speed:";
	this->Controls->Add(this->movementspeedLabel);

	this->movementSpeed = (gcnew System::Windows::Forms::NumericUpDown());
	this->components->Add(this->movementSpeed);
	this->movementSpeed->Location = System::Drawing::Point(430, 175);
	this->movementSpeed->Size = System::Drawing::Size(50, 20);
	this->movementSpeed->Name = L"movementSpeed";
	this->Controls->Add(this->movementSpeed);
}