#pragma once
#include "ScoreControl.h"
#include "Cricket.h"
namespace OOPProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InputScreen
	/// </summary>
	public ref class InputScreen : public System::Windows::Forms::Form
	{


	public:

		InputScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InputScreen()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::ToolTip^ tooltip_back;

    private: System::Windows::Forms::TextBox^ txtbox_team1;
    private: System::Windows::Forms::TextBox^ txtbox_team2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ lbl_team2;

    private: System::Windows::Forms::Button^ btn_proceed;
	private: System::Windows::Forms::PictureBox^ picbox_XI;


	private: System::Windows::Forms::TextBox^ txtbox_venue;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::ComponentModel::IContainer^ components;
		
		   /// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InputScreen::typeid));
			this->tooltip_back = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->txtbox_team1 = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_team2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_team2 = (gcnew System::Windows::Forms::Label());
			this->btn_proceed = (gcnew System::Windows::Forms::Button());
			this->picbox_XI = (gcnew System::Windows::Forms::PictureBox());
			this->txtbox_venue = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbox_XI))->BeginInit();
			this->SuspendLayout();
			// 
			// txtbox_team1
			// 
			this->txtbox_team1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbox_team1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtbox_team1->Location = System::Drawing::Point(127, 87);
			this->txtbox_team1->Name = L"txtbox_team1";
			this->txtbox_team1->Size = System::Drawing::Size(144, 29);
			this->txtbox_team1->TabIndex = 3;
			// 
			// txtbox_team2
			// 
			this->txtbox_team2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbox_team2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtbox_team2->Location = System::Drawing::Point(575, 86);
			this->txtbox_team2->Name = L"txtbox_team2";
			this->txtbox_team2->Size = System::Drawing::Size(144, 29);
			this->txtbox_team2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 21);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Team 1 Name";
			// 
			// lbl_team2
			// 
			this->lbl_team2->AutoSize = true;
			this->lbl_team2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_team2->Location = System::Drawing::Point(461, 94);
			this->lbl_team2->Name = L"lbl_team2";
			this->lbl_team2->Size = System::Drawing::Size(108, 21);
			this->lbl_team2->TabIndex = 30;
			this->lbl_team2->Text = L"Team 2 Name";
			// 
			// btn_proceed
			// 
			this->btn_proceed->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btn_proceed->BackColor = System::Drawing::Color::Transparent;
			this->btn_proceed->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_proceed->FlatAppearance->BorderSize = 2;
			this->btn_proceed->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_proceed->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_proceed->Location = System::Drawing::Point(938, 591);
			this->btn_proceed->Name = L"btn_proceed";
			this->btn_proceed->Size = System::Drawing::Size(85, 36);
			this->btn_proceed->TabIndex = 38;
			this->btn_proceed->Text = L"Proceed";
			this->btn_proceed->UseVisualStyleBackColor = false;
			this->btn_proceed->Click += gcnew System::EventHandler(this, &InputScreen::btn_proceed_Click);
			// 
			// picbox_XI
			// 
			this->picbox_XI->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->picbox_XI->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picbox_XI.Image")));
			this->picbox_XI->Location = System::Drawing::Point(761, 86);
			this->picbox_XI->Name = L"picbox_XI";
			this->picbox_XI->Size = System::Drawing::Size(293, 279);
			this->picbox_XI->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picbox_XI->TabIndex = 62;
			this->picbox_XI->TabStop = false;
			// 
			// txtbox_venue
			// 
			this->txtbox_venue->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbox_venue->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtbox_venue->Location = System::Drawing::Point(127, 161);
			this->txtbox_venue->Name = L"txtbox_venue";
			this->txtbox_venue->Size = System::Drawing::Size(442, 29);
			this->txtbox_venue->TabIndex = 63;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(66, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 21);
			this->label2->TabIndex = 64;
			this->label2->Text = L"Venue";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(16, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(233, 30);
			this->label3->TabIndex = 65;
			this->label3->Text = L"Enter Names of Teams";
			// 
			// InputScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1054, 662);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtbox_venue);
			this->Controls->Add(this->picbox_XI);
			this->Controls->Add(this->btn_proceed);
			this->Controls->Add(this->lbl_team2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtbox_team2);
			this->Controls->Add(this->txtbox_team1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"InputScreen";
			this->Text = L"Team Setup";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &InputScreen::InputScreen_FormClosing);
			this->Load += gcnew System::EventHandler(this, &InputScreen::InputScreen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picbox_XI))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InputScreen_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void btn_proceed_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Clicking on the Proceed button will store the typed text in team 1 and team 2 in Team::teamp_tname1 and 
	temp_tname2 respectively. If any of the textboxes is left empty the program won't let the user go forward 
	to ScoreControl screen.*/

	if(txtbox_team1->Text=="" || txtbox_team2->Text=="")
	{
		MessageBox::Show("Please enter the name(s) of the team(s).", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (txtbox_venue->Text=="")
	{
		MessageBox::Show("Please enter the venue of the match.", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	Team::temp_tname1 = txtbox_team1->Text->ToString();
	Team::temp_tname2 = txtbox_team2->Text->ToString();
	match::venue = txtbox_venue->Text->ToString();
	ScoreControl^ scontrol = gcnew ScoreControl();
	scontrol->Show();
	this->Hide();
}


private: System::Void button1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cmbox_toss_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void InputScreen_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
};
}
