#pragma once
#include "InputScreen.h" 
namespace OOPProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_start;

	private: System::Windows::Forms::Label^ lbl_new_match;

	private: System::Windows::Forms::RadioButton^ rbtn_test;
	private: System::Windows::Forms::RadioButton^ rbtn_t20;

	private: System::Windows::Forms::RadioButton^ rbtn_odi;




	protected:

	protected:

	protected:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_start = (gcnew System::Windows::Forms::Button());
			this->lbl_new_match = (gcnew System::Windows::Forms::Label());
			this->rbtn_test = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn_t20 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn_odi = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(448, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(324, 390);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(46, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(306, 45);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Cricket Scoreboard";
			// 
			// btn_start
			// 
			this->btn_start->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_start->FlatAppearance->BorderSize = 2;
			this->btn_start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_start->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_start->Location = System::Drawing::Point(200, 200);
			this->btn_start->Name = L"btn_start";
			this->btn_start->Size = System::Drawing::Size(75, 33);
			this->btn_start->TabIndex = 2;
			this->btn_start->Text = L"Start";
			this->btn_start->UseVisualStyleBackColor = true;
			this->btn_start->Click += gcnew System::EventHandler(this, &Home::btn_start_Click);
			// 
			// lbl_new_match
			// 
			this->lbl_new_match->AutoSize = true;
			this->lbl_new_match->BackColor = System::Drawing::Color::Transparent;
			this->lbl_new_match->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_new_match->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_new_match->Location = System::Drawing::Point(49, 124);
			this->lbl_new_match->Name = L"lbl_new_match";
			this->lbl_new_match->Size = System::Drawing::Size(122, 30);
			this->lbl_new_match->TabIndex = 5;
			this->lbl_new_match->Text = L"New Match";
			// 
			// rbtn_test
			// 
			this->rbtn_test->AutoSize = true;
			this->rbtn_test->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtn_test->Location = System::Drawing::Point(54, 157);
			this->rbtn_test->Name = L"rbtn_test";
			this->rbtn_test->Size = System::Drawing::Size(57, 25);
			this->rbtn_test->TabIndex = 6;
			this->rbtn_test->TabStop = true;
			this->rbtn_test->Text = L"Test";
			this->rbtn_test->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->rbtn_test->UseVisualStyleBackColor = true;
			// 
			// rbtn_t20
			// 
			this->rbtn_t20->AutoSize = true;
			this->rbtn_t20->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtn_t20->Location = System::Drawing::Point(214, 157);
			this->rbtn_t20->Name = L"rbtn_t20";
			this->rbtn_t20->Size = System::Drawing::Size(61, 25);
			this->rbtn_t20->TabIndex = 7;
			this->rbtn_t20->TabStop = true;
			this->rbtn_t20->Text = L"T-20";
			this->rbtn_t20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->rbtn_t20->UseVisualStyleBackColor = true;
			// 
			// rbtn_odi
			// 
			this->rbtn_odi->AutoSize = true;
			this->rbtn_odi->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtn_odi->Location = System::Drawing::Point(117, 157);
			this->rbtn_odi->Name = L"rbtn_odi";
			this->rbtn_odi->Size = System::Drawing::Size(91, 25);
			this->rbtn_odi->TabIndex = 8;
			this->rbtn_odi->TabStop = true;
			this->rbtn_odi->Text = L"One-Day";
			this->rbtn_odi->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->rbtn_odi->UseVisualStyleBackColor = true;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->rbtn_odi);
			this->Controls->Add(this->rbtn_t20);
			this->Controls->Add(this->rbtn_test);
			this->Controls->Add(this->lbl_new_match);
			this->Controls->Add(this->btn_start);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_start_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (rbtn_odi->Checked==false && rbtn_t20->Checked==false && rbtn_test->Checked==false)
		{
			MessageBox::Show("Please select a match type.", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (rbtn_test->Checked == true) match::test_match = true;
		else if (rbtn_odi->Checked == true || rbtn_t20->Checked == true) match::test_match = false;
		
		InputScreen^ newmatch = gcnew InputScreen();
		newmatch->Show();
		this->Hide();
	}
};
}
