#pragma once
#include "Variables.h"
namespace NewMessageBox {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// —водка дл€ MsgBox
	/// </summary>
	public ref class MsgBox : public System::Windows::Forms::Form
	{
	public:
		MsgBox(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MsgBox()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:

	public: System::Windows::Forms::Label^ lblMsg;

	public: System::Windows::Forms::Button^ btnYes;
	public: System::Windows::Forms::Button^ btnNo;
	private: System::Windows::Forms::Panel^ panel1;
	public: System::Windows::Forms::Label^ msgTitle;







	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
	public:
		void InitializeComponent(void)
		{
			this->lblMsg = (gcnew System::Windows::Forms::Label());
			this->btnYes = (gcnew System::Windows::Forms::Button());
			this->btnNo = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->msgTitle = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblMsg
			// 
			this->lblMsg->AutoSize = true;
			this->lblMsg->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->lblMsg->Location = System::Drawing::Point(7, 49);
			this->lblMsg->Name = L"lblMsg";
			this->lblMsg->Size = System::Drawing::Size(56, 23);
			this->lblMsg->TabIndex = 1;
			this->lblMsg->Text = L"sdfsdf";
			this->lblMsg->Click += gcnew System::EventHandler(this, &MsgBox::label2_Click);
			// 
			// btnYes
			// 
			this->btnYes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->btnYes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnYes->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnYes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->btnYes->Location = System::Drawing::Point(168, 118);
			this->btnYes->Name = L"btnYes";
			this->btnYes->Size = System::Drawing::Size(69, 30);
			this->btnYes->TabIndex = 2;
			this->btnYes->TabStop = false;
			this->btnYes->Text = L"Yes";
			this->btnYes->UseVisualStyleBackColor = false;
			this->btnYes->Click += gcnew System::EventHandler(this, &MsgBox::btnYes_Click);
			// 
			// btnNo
			// 
			this->btnNo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->btnNo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNo->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->btnNo->Location = System::Drawing::Point(275, 116);
			this->btnNo->Name = L"btnNo";
			this->btnNo->Size = System::Drawing::Size(64, 32);
			this->btnNo->TabIndex = 3;
			this->btnNo->TabStop = false;
			this->btnNo->Text = L"No";
			this->btnNo->UseVisualStyleBackColor = false;
			this->btnNo->Click += gcnew System::EventHandler(this, &MsgBox::btnNo_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->panel1->Controls->Add(this->msgTitle);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(352, 46);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MsgBox::panel1_Paint);
			// 
			// msgTitle
			// 
			this->msgTitle->AutoSize = true;
			this->msgTitle->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->msgTitle->Location = System::Drawing::Point(17, 9);
			this->msgTitle->Name = L"msgTitle";
			this->msgTitle->Size = System::Drawing::Size(46, 23);
			this->msgTitle->TabIndex = 0;
			this->msgTitle->Text = L"Test";
			this->msgTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MsgBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->ClientSize = System::Drawing::Size(351, 162);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnNo);
			this->Controls->Add(this->btnYes);
			this->Controls->Add(this->lblMsg);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MsgBox";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"\\";
			this->Load += gcnew System::EventHandler(this, &MsgBox::MsgBox_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MsgBox_Load(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btnYes_Click(System::Object^ sender, System::EventArgs^ e){
		this->Hide();
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void btnNo_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
