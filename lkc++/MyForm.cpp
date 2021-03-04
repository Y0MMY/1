#pragma once
#include "MyForm.h"
#include "MsgBox.cpp"
using namespace System;
using namespace System::Windows::Forms;


 [STAThread]
 void main(array<String^>^ args)
 {
	 Application::EnableVisualStyles;
	 Application::SetCompatibleTextRenderingDefault(false);
	 lkc::MyForm form;
	 Application::Run(% form);

	 
 }