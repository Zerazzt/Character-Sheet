#include "pch.h"
#include "app.h"
#include <fstream>

void CppCLRWinformsProjekt::application::setRace(System::Object^ send, System::EventArgs^ e)
{
	std::string line;
	std::ifstream subraceFile;
	subraceFile.open("Data/Input/RaceInfo/" + this->systostr(this->charRace->Text)+"Subraces.txt");
	if (subraceFile.fail())
	{
		this->notes1->Text += "Failed to open subrace file.";
	}
	this->charSubrace->Items->Clear();
	while (!subraceFile.eof())
	{
		while (getline(subraceFile, line))
		{
			this->charSubrace->Items->Add(this->strtosys(line));
		}
		subraceFile.close();
	}
}