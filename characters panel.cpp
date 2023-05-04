#include "pch.h"
#include "app.h"

void WinformsApplication::application::createCharactersPanel(void)
{
	this->charactersPanel = (gcnew System::Windows::Forms::Panel()); // Create Panel
	this->components->Add(this->charactersPanel); // Add element to components
	this->charactersPanel->Location = System::Drawing::Point(0, 0); // Set location from where to begin drawing the element
	this->charactersPanel->Size = System::Drawing::Size(1266, 639); // Specify the size of the element
	this->charactersPanel->Name = L"charactersPanel"; // Set name
	this->Controls->Add(this->charactersPanel); // Add element to Controls

	this->characterList = (gcnew System::Windows::Forms::ComboBox()); // Create ComboBox
	this->components->Add(this->characterList); // Add elemenet to components
	this->characterList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::Simple; // Set style of ComboBox
	this->characterList->Location = System::Drawing::Point(500, 75); // Set location from where to begin drawing the element
	this->characterList->Size = System::Drawing::Size(600, 500); // Specify the size of the element
	this->characterList->Name = L"characterList"; // Set name
	this->Controls->Add(this->characterList); // Add element to Controls

	this->openButton = (gcnew System::Windows::Forms::Button()); // Create Button
	this->components->Add(this->openButton); // Add element to components
	this->openButton->Location = System::Drawing::Point(1105, 75); // Set location from where to begin drawing the element
	this->openButton->Size = System::Drawing::Size(100, 20); // Specify the size of the element
	this->openButton->Name = L"openButton"; // Set name
	this->openButton->Text = L"Open"; // Set text
	this->openButton->Click += gcnew System::EventHandler(this, &WinformsApplication::application::open); // Set function to be called when Button is pressed
	this->Controls->Add(this->openButton); // Add element to Controls
	
	this->deleteButton = (gcnew System::Windows::Forms::Button());
	this->components->Add(this->deleteButton);
	this->deleteButton->Location = System::Drawing::Point(1105, 100);
	this->deleteButton->Size = System::Drawing::Size(100, 20);
	this->deleteButton->Name = L"deleteButton";
	this->deleteButton->Text = L"Delete";
	this->deleteButton->Click += gcnew System::EventHandler(this, &WinformsApplication::application::deleteCharacter);
	this->Controls->Add(this->deleteButton);

	this->charactersPanel->Controls->Add(this->characterList); // Add element to Controls of specific Panel
	this->charactersPanel->Controls->Add(this->openButton);
	this->charactersPanel->Controls->Add(this->deleteButton);

	this->charactersPanel->Visible = false; // Make the panel not show
}