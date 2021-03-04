#pragma once


#include "MsgBox.h"
#include <string>
#include "Variables.h"


namespace NewBox
{
	struct ShowBox
	{
		enum Styles
		{
			MsgBox

		};
		
	public:
		

		void ShowBox::show(System::String^ lbl, System::String^ mes, System::Object^ 
			Obj, bool btnYesNo = false) {
				NewMessageBox::MsgBox^ frm = gcnew NewMessageBox::MsgBox;
				frm->lblMsg->Text = "\0";
				frm->msgTitle->Text = "\0";
				frm->TopLevel = true;
				frm->TopMost = true;
				frm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				frm->Dock = System::Windows::Forms::DockStyle::Fill;
				frm->lblMsg->Text = mes;
				frm->msgTitle->Text = lbl ;
				frm->BringToFront();
				Variable::Variables^ v = gcnew Variable::Variables;
				//v->IsUsingYesNo = btnYesNo ;
				if (btnYesNo == false)
				{

					frm->btnNo->Visible = 0;
					v->DlgResult = 1;
					frm->btnYes->Text = "Ok";
				}
				frm->ShowDialog();
				//delete mes,lbl
		}
	};
}