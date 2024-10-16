#include "MainScreen.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false); // Correct Text Rendering
	Application::EnableVisualStyles();
	CustomChessWinForms::MainScreen mscreen;
	Application::Run(% mscreen);
}
