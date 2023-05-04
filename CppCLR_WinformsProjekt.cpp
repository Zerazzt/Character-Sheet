#include "pch.h"
#include "app.h"

[System::STAThread]
int main() {
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	System::Windows::Forms::Application::Run(gcnew WinformsApplication::application()); 
	return 0;
}