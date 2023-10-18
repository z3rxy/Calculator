#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {   //^^-автоматическая отчистка памяти
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	firstApp::MyForm form;

	Application::Run(% form); //% передача по ссылке
}
