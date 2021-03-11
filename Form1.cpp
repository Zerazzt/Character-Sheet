#include "pch.h"
#include "Form1.h"

void CppCLRWinformsProjekt::Form1::InitializeFormBody(void)
{
	this->components = gcnew System::ComponentModel::Container();
	this->Size = System::Drawing::Size(300, 300);
	this->Text = L"Form1";
	this->Padding = System::Windows::Forms::Padding(0);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
}