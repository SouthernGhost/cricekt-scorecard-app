#pragma once
#include "Player.h"
#include "MdiOps.cpp"
#include "Cricket.h"
namespace OOPProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ScoreControl
	/// </summary>
	public ref class ScoreControl : public System::Windows::Forms::Form
	{
	public:
		ScoreControl(void)
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
		~ScoreControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnl_btns_inn;
	protected:

	private: System::Windows::Forms::Button^ btn_inn4;
	private: System::Windows::Forms::Button^ btn_inn3;
	private: System::Windows::Forms::Button^ btn_inn2;
	private: System::Windows::Forms::Button^ btn_inn1;




	private: System::Windows::Forms::Panel^ pnl_top;


	private: System::Windows::Forms::Panel^ pnl_bottom;
	private: System::Windows::Forms::Panel^ pnl_right;
	private: System::Windows::Forms::Button^ btn_pl1;




	private: System::Windows::Forms::Button^ btn_pl11;
	private: System::Windows::Forms::Button^ btn_pl10;
	private: System::Windows::Forms::Button^ btn_pl9;
	private: System::Windows::Forms::Button^ btn_pl8;


	private: System::Windows::Forms::Button^ btn_pl7;

	private: System::Windows::Forms::Button^ btn_pl6;

	private: System::Windows::Forms::Button^ btn_pl5;

	private: System::Windows::Forms::Button^ btn_pl4;

	private: System::Windows::Forms::Button^ btn_pl3;

	private: System::Windows::Forms::Button^ btn_pl2;
	private: System::Windows::Forms::Panel^ pnl_btns_pl;
	private: System::Windows::Forms::Panel^ pnl_mdi_pl;
	private: System::Windows::Forms::Label^ lbl_tname;
	private: System::Windows::Forms::Panel^ pnl_tname;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btn_save;

	private: System::Windows::Forms::ToolTip^ tooltip_save;
	private: System::Windows::Forms::Button^ btn_openscore;
	private: System::Windows::Forms::ToolTip^ tooltip_openfile;
	private: System::ComponentModel::IContainer^ components;
	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ScoreControl::typeid));
			this->pnl_btns_inn = (gcnew System::Windows::Forms::Panel());
			this->btn_inn4 = (gcnew System::Windows::Forms::Button());
			this->btn_inn3 = (gcnew System::Windows::Forms::Button());
			this->btn_inn2 = (gcnew System::Windows::Forms::Button());
			this->btn_inn1 = (gcnew System::Windows::Forms::Button());
			this->btn_pl11 = (gcnew System::Windows::Forms::Button());
			this->btn_pl10 = (gcnew System::Windows::Forms::Button());
			this->btn_pl9 = (gcnew System::Windows::Forms::Button());
			this->btn_pl8 = (gcnew System::Windows::Forms::Button());
			this->btn_pl7 = (gcnew System::Windows::Forms::Button());
			this->btn_pl6 = (gcnew System::Windows::Forms::Button());
			this->btn_pl5 = (gcnew System::Windows::Forms::Button());
			this->btn_pl4 = (gcnew System::Windows::Forms::Button());
			this->btn_pl3 = (gcnew System::Windows::Forms::Button());
			this->btn_pl2 = (gcnew System::Windows::Forms::Button());
			this->btn_pl1 = (gcnew System::Windows::Forms::Button());
			this->pnl_top = (gcnew System::Windows::Forms::Panel());
			this->pnl_bottom = (gcnew System::Windows::Forms::Panel());
			this->pnl_right = (gcnew System::Windows::Forms::Panel());
			this->pnl_btns_pl = (gcnew System::Windows::Forms::Panel());
			this->pnl_mdi_pl = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbl_tname = (gcnew System::Windows::Forms::Label());
			this->pnl_tname = (gcnew System::Windows::Forms::Panel());
			this->btn_openscore = (gcnew System::Windows::Forms::Button());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->tooltip_save = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tooltip_openfile = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->pnl_btns_inn->SuspendLayout();
			this->pnl_btns_pl->SuspendLayout();
			this->pnl_mdi_pl->SuspendLayout();
			this->pnl_tname->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnl_btns_inn
			// 
			this->pnl_btns_inn->Controls->Add(this->btn_inn4);
			this->pnl_btns_inn->Controls->Add(this->btn_inn3);
			this->pnl_btns_inn->Controls->Add(this->btn_inn2);
			this->pnl_btns_inn->Controls->Add(this->btn_inn1);
			this->pnl_btns_inn->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_btns_inn->Location = System::Drawing::Point(0, 0);
			this->pnl_btns_inn->Name = L"pnl_btns_inn";
			this->pnl_btns_inn->Size = System::Drawing::Size(1280, 57);
			this->pnl_btns_inn->TabIndex = 1;
			// 
			// btn_inn4
			// 
			this->btn_inn4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btn_inn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_inn4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_inn4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_inn4->Location = System::Drawing::Point(954, 0);
			this->btn_inn4->Name = L"btn_inn4";
			this->btn_inn4->Size = System::Drawing::Size(316, 57);
			this->btn_inn4->TabIndex = 3;
			this->btn_inn4->Text = L"button4";
			this->btn_inn4->UseVisualStyleBackColor = true;
			this->btn_inn4->Click += gcnew System::EventHandler(this, &ScoreControl::btn_inn4_Click);
			// 
			// btn_inn3
			// 
			this->btn_inn3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btn_inn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_inn3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_inn3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_inn3->Location = System::Drawing::Point(636, 0);
			this->btn_inn3->Name = L"btn_inn3";
			this->btn_inn3->Size = System::Drawing::Size(316, 57);
			this->btn_inn3->TabIndex = 3;
			this->btn_inn3->Text = L"button3";
			this->btn_inn3->UseVisualStyleBackColor = true;
			this->btn_inn3->Click += gcnew System::EventHandler(this, &ScoreControl::btn_inn3_Click);
			// 
			// btn_inn2
			// 
			this->btn_inn2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btn_inn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_inn2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_inn2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_inn2->Location = System::Drawing::Point(318, 0);
			this->btn_inn2->Name = L"btn_inn2";
			this->btn_inn2->Size = System::Drawing::Size(316, 57);
			this->btn_inn2->TabIndex = 3;
			this->btn_inn2->Text = L"button2";
			this->btn_inn2->UseVisualStyleBackColor = true;
			this->btn_inn2->Click += gcnew System::EventHandler(this, &ScoreControl::btn_inn2_Click);
			// 
			// btn_inn1
			// 
			this->btn_inn1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btn_inn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_inn1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_inn1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_inn1->Location = System::Drawing::Point(0, 0);
			this->btn_inn1->Name = L"btn_inn1";
			this->btn_inn1->Size = System::Drawing::Size(316, 57);
			this->btn_inn1->TabIndex = 2;
			this->btn_inn1->Text = L"button1";
			this->btn_inn1->UseVisualStyleBackColor = true;
			this->btn_inn1->Click += gcnew System::EventHandler(this, &ScoreControl::btn_inn1_Click);
			// 
			// btn_pl11
			// 
			this->btn_pl11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pl11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pl11->Location = System::Drawing::Point(3, 539);
			this->btn_pl11->Name = L"btn_pl11";
			this->btn_pl11->Size = System::Drawing::Size(81, 52);
			this->btn_pl11->TabIndex = 1;
			this->btn_pl11->Text = L"11";
			this->btn_pl11->UseVisualStyleBackColor = true;
			this->btn_pl11->Click += gcnew System::EventHandler(this, &ScoreControl::btn_pl11_Click);
			// 
			// btn_pl10
			// 
			this->btn_pl10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pl10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pl10->Location = System::Drawing::Point(3, 485);
			this->btn_pl10->Name = L"btn_pl10";
			this->btn_pl10->Size = System::Drawing::Size(81, 52);
			this->btn_pl10->TabIndex = 1;
			this->btn_pl10->Text = L"10";
			this->btn_pl10->UseVisualStyleBackColor = true;
			this->btn_pl10->Click += gcnew System::EventHandler(this, &ScoreControl::btn_pl10_Click);
			// 
			// btn_pl9
			// 
			this->btn_pl9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pl9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pl9->Location = System::Drawing::Point(3, 431);
			this->btn_pl9->Name = L"btn_pl9";
			this->btn_pl9->Size = System::Drawing::Size(81, 52);
			this->btn_pl9->TabIndex = 19;
			this->btn_pl9->Text = L"9";
			this->btn_pl9->UseVisualStyleBackColor = true;
			this->btn_pl9->Click += gcnew System::EventHandler(this, &ScoreControl::btn_pl9_Click);
			// 
			// btn_pl8
			// 
			this->btn_pl8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pl8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pl8->Location = System::Drawing::Point(3, 377);
			this->btn_pl8->Name = L"btn_pl8";
			this->btn_pl8->Size = System::Drawing::Size(81, 52);
			this->btn_pl8->TabIndex = 18;
			this->btn_pl8->Text = L"8";
			this->btn_pl8->UseVisualStyleBackColor = true;
			this->btn_pl8->Click += gcnew System::EventHandler(this, &ScoreControl::btn_p8_Click);
			// 
			// btn_pl7
			// 
			this->btn_pl7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pl7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pl7->Location = System::Drawing::Point(3, 323);
			this->btn_pl7->Name = L"btn_pl7";
			this->btn_pl7->Size = System::Drawing::Size(81, 52);
			this->btn_pl7->TabIndex = 17;
			this->btn_pl7->Text = L"7";
			this->btn_pl7->UseVisualStyleBackColor = true;
			this->btn_pl7->Click += gcnew System::EventHandler(this, &ScoreControl::btn_pl7_Click);
			// 
			// btn_pl6
			// 
			this->btn_pl6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pl6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pl6->Location = System::Drawing::Point(3, 269);
			this->btn_pl6->Name = L"btn_pl6";
			this->btn_pl6->Size = System::Drawing::Size(81, 52);
			this->btn_pl6->TabIndex = 16;
			this->btn_pl6->Text = L"6";
			this->btn_pl6->UseVisualStyleBackColor = true;
			this->btn_pl6->Click += gcnew System::EventHandler(this, &ScoreControl::btn_pl6_Click);
			// 
			// btn_pl5
			// 
			this->btn_pl5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pl5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pl5->Location = System::Drawing::Point(3, 215);
			this->btn_pl5->Name = L"btn_pl5";
			this->btn_pl5->Size = System::Drawing::Size(81, 52);
			this->btn_pl5->TabIndex = 15;
			this->btn_pl5->Text = L"5";
			this->btn_pl5->UseVisualStyleBackColor = true;
			this->btn_pl5->Click += gcnew System::EventHandler(this, &ScoreControl::btn_pl5_Click);
			// 
			// btn_pl4
			// 
			this->btn_pl4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pl4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pl4->Location = System::Drawing::Point(3, 161);
			this->btn_pl4->Name = L"btn_pl4";
			this->btn_pl4->Size = System::Drawing::Size(81, 52);
			this->btn_pl4->TabIndex = 14;
			this->btn_pl4->Text = L"4";
			this->btn_pl4->UseVisualStyleBackColor = true;
			this->btn_pl4->Click += gcnew System::EventHandler(this, &ScoreControl::btn_pl4_Click);
			// 
			// btn_pl3
			// 
			this->btn_pl3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pl3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pl3->Location = System::Drawing::Point(3, 107);
			this->btn_pl3->Name = L"btn_pl3";
			this->btn_pl3->Size = System::Drawing::Size(81, 52);
			this->btn_pl3->TabIndex = 13;
			this->btn_pl3->Text = L"3";
			this->btn_pl3->UseVisualStyleBackColor = true;
			this->btn_pl3->Click += gcnew System::EventHandler(this, &ScoreControl::btn_pl3_Click);
			// 
			// btn_pl2
			// 
			this->btn_pl2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pl2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pl2->Location = System::Drawing::Point(3, 53);
			this->btn_pl2->Name = L"btn_pl2";
			this->btn_pl2->Size = System::Drawing::Size(81, 52);
			this->btn_pl2->TabIndex = 12;
			this->btn_pl2->Text = L"2";
			this->btn_pl2->UseVisualStyleBackColor = true;
			this->btn_pl2->Click += gcnew System::EventHandler(this, &ScoreControl::btn_pl2_Click);
			// 
			// btn_pl1
			// 
			this->btn_pl1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pl1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pl1->Location = System::Drawing::Point(3, -1);
			this->btn_pl1->Name = L"btn_pl1";
			this->btn_pl1->Size = System::Drawing::Size(81, 52);
			this->btn_pl1->TabIndex = 0;
			this->btn_pl1->Text = L"1";
			this->btn_pl1->UseVisualStyleBackColor = true;
			this->btn_pl1->Click += gcnew System::EventHandler(this, &ScoreControl::btn_pl1_Click);
			// 
			// pnl_top
			// 
			this->pnl_top->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pnl_top->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_top->Location = System::Drawing::Point(0, 117);
			this->pnl_top->Name = L"pnl_top";
			this->pnl_top->Size = System::Drawing::Size(1280, 4);
			this->pnl_top->TabIndex = 0;
			// 
			// pnl_bottom
			// 
			this->pnl_bottom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pnl_bottom->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnl_bottom->Location = System::Drawing::Point(0, 707);
			this->pnl_bottom->Name = L"pnl_bottom";
			this->pnl_bottom->Size = System::Drawing::Size(1280, 4);
			this->pnl_bottom->TabIndex = 12;
			// 
			// pnl_right
			// 
			this->pnl_right->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pnl_right->Dock = System::Windows::Forms::DockStyle::Right;
			this->pnl_right->Location = System::Drawing::Point(1276, 121);
			this->pnl_right->Name = L"pnl_right";
			this->pnl_right->Size = System::Drawing::Size(4, 586);
			this->pnl_right->TabIndex = 9;
			// 
			// pnl_btns_pl
			// 
			this->pnl_btns_pl->Controls->Add(this->btn_pl11);
			this->pnl_btns_pl->Controls->Add(this->btn_pl1);
			this->pnl_btns_pl->Controls->Add(this->btn_pl10);
			this->pnl_btns_pl->Controls->Add(this->btn_pl2);
			this->pnl_btns_pl->Controls->Add(this->btn_pl6);
			this->pnl_btns_pl->Controls->Add(this->btn_pl9);
			this->pnl_btns_pl->Controls->Add(this->btn_pl5);
			this->pnl_btns_pl->Controls->Add(this->btn_pl3);
			this->pnl_btns_pl->Controls->Add(this->btn_pl7);
			this->pnl_btns_pl->Controls->Add(this->btn_pl8);
			this->pnl_btns_pl->Controls->Add(this->btn_pl4);
			this->pnl_btns_pl->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnl_btns_pl->Location = System::Drawing::Point(0, 121);
			this->pnl_btns_pl->Name = L"pnl_btns_pl";
			this->pnl_btns_pl->Size = System::Drawing::Size(87, 586);
			this->pnl_btns_pl->TabIndex = 14;
			// 
			// pnl_mdi_pl
			// 
			this->pnl_mdi_pl->Controls->Add(this->panel1);
			this->pnl_mdi_pl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_mdi_pl->Location = System::Drawing::Point(87, 121);
			this->pnl_mdi_pl->Name = L"pnl_mdi_pl";
			this->pnl_mdi_pl->Size = System::Drawing::Size(1189, 586);
			this->pnl_mdi_pl->TabIndex = 16;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(4, 586);
			this->panel1->TabIndex = 0;
			// 
			// lbl_tname
			// 
			this->lbl_tname->AutoSize = true;
			this->lbl_tname->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_tname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lbl_tname->Location = System::Drawing::Point(611, 15);
			this->lbl_tname->Name = L"lbl_tname";
			this->lbl_tname->Size = System::Drawing::Size(66, 30);
			this->lbl_tname->TabIndex = 0;
			this->lbl_tname->Text = L"label1";
			// 
			// pnl_tname
			// 
			this->pnl_tname->BackColor = System::Drawing::Color::White;
			this->pnl_tname->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pnl_tname->Controls->Add(this->btn_openscore);
			this->pnl_tname->Controls->Add(this->btn_save);
			this->pnl_tname->Controls->Add(this->lbl_tname);
			this->pnl_tname->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_tname->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnl_tname->ForeColor = System::Drawing::Color::White;
			this->pnl_tname->Location = System::Drawing::Point(0, 57);
			this->pnl_tname->Name = L"pnl_tname";
			this->pnl_tname->Size = System::Drawing::Size(1280, 60);
			this->pnl_tname->TabIndex = 5;
			// 
			// btn_openscore
			// 
			this->btn_openscore->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_openscore.BackgroundImage")));
			this->btn_openscore->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_openscore->FlatAppearance->BorderSize = 2;
			this->btn_openscore->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_openscore->ForeColor = System::Drawing::Color::Transparent;
			this->btn_openscore->Location = System::Drawing::Point(1221, 10);
			this->btn_openscore->Name = L"btn_openscore";
			this->btn_openscore->Size = System::Drawing::Size(45, 44);
			this->btn_openscore->TabIndex = 2;
			this->btn_openscore->UseVisualStyleBackColor = true;
			this->btn_openscore->Click += gcnew System::EventHandler(this, &ScoreControl::btn_openscore_Click);
			this->btn_openscore->MouseHover += gcnew System::EventHandler(this, &ScoreControl::btn_openscore_MouseHover);
			// 
			// btn_save
			// 
			this->btn_save->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_save.BackgroundImage")));
			this->btn_save->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_save->FlatAppearance->BorderSize = 2;
			this->btn_save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_save->ForeColor = System::Drawing::Color::Transparent;
			this->btn_save->Location = System::Drawing::Point(1157, 10);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(45, 44);
			this->btn_save->TabIndex = 1;
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &ScoreControl::btn_save_Click);
			this->btn_save->MouseHover += gcnew System::EventHandler(this, &ScoreControl::button1_MouseHover);
			// 
			// ScoreControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1280, 711);
			this->Controls->Add(this->pnl_mdi_pl);
			this->Controls->Add(this->pnl_btns_pl);
			this->Controls->Add(this->pnl_right);
			this->Controls->Add(this->pnl_bottom);
			this->Controls->Add(this->pnl_top);
			this->Controls->Add(this->pnl_tname);
			this->Controls->Add(this->pnl_btns_inn);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->IsMdiContainer = true;
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"ScoreControl";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Scoreboard Control";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ScoreControl::ScoreControl_FormClosing);
			this->Load += gcnew System::EventHandler(this, &ScoreControl::ScoreControl_Load);
			this->pnl_btns_inn->ResumeLayout(false);
			this->pnl_btns_pl->ResumeLayout(false);
			this->pnl_mdi_pl->ResumeLayout(false);
			this->pnl_tname->ResumeLayout(false);
			this->pnl_tname->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	//--------------Objects/Forms of class Player------------//
	
	/* These instances are created as private members of the ScoreControl class so each time innings buttons are clicked,
		a new instance isn't created.
		Each team has 11 players so 22 instances are created each referring to a player.
		First 11 are assigned to team1 and remaining 11 to team2.*/
	
public:
	
	Team^ team1, ^ team2;
	/*When the ScoreControl form loads for the first time, it creates an instance of the Innings class and assigns it 
	as first innings */
	
private: System::Void ScoreControl_Load(System::Object^ sender, System::EventArgs^ e) {
	team1 = gcnew Team();
	team2 = gcnew Team();
	
	team1->tname = Team::temp_tname1;
	team2->tname = Team::temp_tname2;

	for (int i=0;i<11;i++)
	{
		team1->plxi_inn1->Add(gcnew player());
		team2->plxi_inn1->Add(gcnew player());
		if (match::test_match==true)
		{
			team1->plxi_inn2->Add(gcnew player());
			team2->plxi_inn2->Add(gcnew player());
		}
	}
	
	MdiOps::openchildform(this, team1->plxi_inn1[0]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn1);
	MdiOps::btnActive_Player(pnl_btns_pl, btn_pl1);
	player::current_pl = team1->plxi_inn1[0];
	btn_inn1->Text = Team::temp_tname1;
	btn_inn2->Text = Team::temp_tname2;
	if (match::test_match==true)
	{
		lbl_tname->Text = team1->tname + " - 1st Innings";
		btn_inn3->Enabled = true;
		btn_inn4->Enabled = true;
		btn_inn3->Text = Team::temp_tname1;
		btn_inn4->Text = Team::temp_tname2;
	}
	else 
	{
		lbl_tname->Text = team1->tname;
		btn_inn3->Enabled = false;
		btn_inn4->Enabled = false;
		btn_inn3->Text = "-";
		btn_inn4->Text = "-";
	}
}		

private: System::Void btn_inn1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (MdiOps::btn_current_inn == (Button^)sender) return;
	MdiOps::openchildform(this, team1->plxi_inn1[0]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn1);
	MdiOps::btnActive_Player(pnl_btns_pl, btn_pl1);
	player::current_pl = team1->plxi_inn1[0];
	if (match::test_match == true) lbl_tname->Text = team1->tname + " - 1st Innings";
	else lbl_tname->Text = team1->tname;

}

private: System::Void btn_inn2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (MdiOps::btn_current_inn == (Button^)sender) return;
	MdiOps::openchildform(this, team2->plxi_inn1[0]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn2);
	MdiOps::btnActive_Player(pnl_btns_pl, btn_pl1);
	player::current_pl = team2->plxi_inn1[0];
	if (match::test_match == true) lbl_tname->Text = team2->tname + " - 1st Innings";
	else lbl_tname->Text = team2->tname;
}

private: System::Void btn_inn3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MdiOps::btn_current_inn == (Button^)sender) return;
	MdiOps::openchildform(this, team1->plxi_inn2[0]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn3);
	MdiOps::btnActive_Player(pnl_btns_pl, btn_pl1);
	player::current_pl = team1->plxi_inn2[0];
	lbl_tname->Text = team1->tname + " - 2nd Innings";
}

private: System::Void btn_inn4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MdiOps::btn_current_inn == (Button^)sender) return;
	MdiOps::openchildform(this, team2->plxi_inn2[0]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn4);
	MdiOps::btnActive_Player(pnl_btns_pl, btn_pl1);
	player::current_pl = team2->plxi_inn2[0];
	lbl_tname->Text = team2->tname + " - 2nd Innings";
}

private: System::Void btn_pl1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MdiOps::btn_current_inn == btn_inn1) 
	{
		MdiOps::openchildform(this, team1->plxi_inn1[0]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn1);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl1);
		player::current_pl = team1->plxi_inn1[0];
	}
	else if (MdiOps::btn_current_inn == btn_inn2) 
	{
		MdiOps::openchildform(this, team2->plxi_inn1[0]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn2);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl1);
		player::current_pl = team2->plxi_inn1[0];
	}
	else if (MdiOps::btn_current_inn==btn_inn3)
	{
		MdiOps::openchildform(this, team1->plxi_inn2[0]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn3);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl1);
		player::current_pl = team1->plxi_inn2[0];
	}
	else if (MdiOps::btn_current_inn == btn_inn4)
	{
		MdiOps::openchildform(this, team2->plxi_inn2[0]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn4);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl1);
		player::current_pl = team1->plxi_inn2[0];
	}
}
private: System::Void btn_pl2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MdiOps::btn_current_inn == btn_inn1)
	{
		MdiOps::openchildform(this, team1->plxi_inn1[1]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn1);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl2);
		player::current_pl = team1->plxi_inn1[1];
	}
	else if (MdiOps::btn_current_inn == btn_inn2)
	{
		MdiOps::openchildform(this, team2->plxi_inn1[1]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn2);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl2);
		player::current_pl = team2->plxi_inn1[1];
	}
	else if (MdiOps::btn_current_inn == btn_inn3)
	{
		MdiOps::openchildform(this, team1->plxi_inn2[1]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn3);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl2);
		player::current_pl = team1->plxi_inn2[1];
	}
	else if (MdiOps::btn_current_inn == btn_inn4)
	{
		MdiOps::openchildform(this, team2->plxi_inn2[1]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn4);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl2);
		player::current_pl = team2->plxi_inn2[1];
	}
}

private: System::Void btn_pl3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MdiOps::btn_current_inn == btn_inn1)
	{
		MdiOps::openchildform(this, team1->plxi_inn1[2]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn1);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl3);
		player::current_pl = team1->plxi_inn1[0];
	}
	else if (MdiOps::btn_current_inn == btn_inn2)
	{
		MdiOps::openchildform(this, team2->plxi_inn1[2]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn2);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl3);
		player::current_pl = team2->plxi_inn1[2];
	}
	else if (MdiOps::btn_current_inn == btn_inn3)
	{
		MdiOps::openchildform(this, team1->plxi_inn2[2]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn3);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl3);
		player::current_pl = team1->plxi_inn2[2];
	}
	else if (MdiOps::btn_current_inn == btn_inn4)
	{
		MdiOps::openchildform(this, team2->plxi_inn2[2]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn4);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl3);
		player::current_pl = team2->plxi_inn2[2];
	}
}

private: System::Void btn_pl4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MdiOps::btn_current_inn == btn_inn1)
	{
		MdiOps::openchildform(this, team1->plxi_inn1[3]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn1);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl4);
		player::current_pl = team1->plxi_inn1[3];
	}
	else if (MdiOps::btn_current_inn == btn_inn2)
	{
		MdiOps::openchildform(this, team2->plxi_inn1[3]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn2);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl4);
		player::current_pl = team2->plxi_inn1[3];
	}
	else if (MdiOps::btn_current_inn == btn_inn3)
	{
		MdiOps::openchildform(this, team1->plxi_inn2[3]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn3);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl4);
		player::current_pl = team1->plxi_inn2[3];
	}
	else if (MdiOps::btn_current_inn == btn_inn4)
	{
		MdiOps::openchildform(this, team2->plxi_inn2[3]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn4);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl4);
		player::current_pl = team2->plxi_inn2[3];
	}
}

private: System::Void btn_pl5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MdiOps::btn_current_inn == btn_inn1)
	{
		MdiOps::openchildform(this, team1->plxi_inn1[4]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn1);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl5);
		player::current_pl = team1->plxi_inn1[4];
	}
	else if (MdiOps::btn_current_inn == btn_inn2)
	{
		MdiOps::openchildform(this, team2->plxi_inn1[4]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn2);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl5);
		player::current_pl = team2->plxi_inn1[4];
	}
	else if (MdiOps::btn_current_inn == btn_inn3)
	{
		MdiOps::openchildform(this, team1->plxi_inn2[4]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn3);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl5);
		player::current_pl = team1->plxi_inn2[4];
	}
	else if (MdiOps::btn_current_inn == btn_inn4)
	{
		MdiOps::openchildform(this, team2->plxi_inn2[4]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn4);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl5);
		player::current_pl = team2->plxi_inn2[4];
	}
}

private: System::Void btn_pl6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MdiOps::btn_current_inn == btn_inn1)
	{
		MdiOps::openchildform(this, team1->plxi_inn1[5]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn1);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl6);
		player::current_pl = team1->plxi_inn1[5];
	}
	else if (MdiOps::btn_current_inn == btn_inn2)
	{
		MdiOps::openchildform(this, team2->plxi_inn1[5]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn2);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl6);
		player::current_pl = team2->plxi_inn1[5];
	}
	else if (MdiOps::btn_current_inn == btn_inn3)
	{
		MdiOps::openchildform(this, team1->plxi_inn2[5]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn3);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl6);
		player::current_pl = team1->plxi_inn2[5];
	}
	else if (MdiOps::btn_current_inn == btn_inn4)
	{
		MdiOps::openchildform(this, team2->plxi_inn2[5]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn4);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl6);
		player::current_pl = team2->plxi_inn2[5];
	}
}

private: System::Void btn_pl7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MdiOps::btn_current_inn == btn_inn1)
	{
		MdiOps::openchildform(this, team1->plxi_inn1[6]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn1);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl7);
		player::current_pl = team1->plxi_inn1[6];
	}
	else if (MdiOps::btn_current_inn == btn_inn2)
	{
		MdiOps::openchildform(this, team2->plxi_inn1[6]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn2);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl7);
		player::current_pl = team2->plxi_inn1[6];
	}
	else if (MdiOps::btn_current_inn == btn_inn3)
	{
		MdiOps::openchildform(this, team1->plxi_inn2[6]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn3);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl7);
		player::current_pl = team1->plxi_inn2[6];
	}
	else if (MdiOps::btn_current_inn == btn_inn4)
	{
		MdiOps::openchildform(this, team2->plxi_inn2[6]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn4);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl7);
		player::current_pl = team2->plxi_inn2[6];
	}
}

private: System::Void btn_p8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MdiOps::btn_current_inn == btn_inn1)
	{
		MdiOps::openchildform(this, team1->plxi_inn1[7]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn1);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl8);
		player::current_pl = team1->plxi_inn1[7];
	}
	else if (MdiOps::btn_current_inn == btn_inn2)
	{
		MdiOps::openchildform(this, team2->plxi_inn1[7]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn2);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl8);
		player::current_pl = team2->plxi_inn1[7];
	}
	else if (MdiOps::btn_current_inn == btn_inn3)
	{
		MdiOps::openchildform(this, team1->plxi_inn2[7]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn3);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl8);
		player::current_pl = team1->plxi_inn2[7];
	}
	else if (MdiOps::btn_current_inn == btn_inn4)
	{
		MdiOps::openchildform(this, team2->plxi_inn2[7]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn4);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl8);
		player::current_pl = team2->plxi_inn2[7];
	}
}


private: System::Void btn_pl9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MdiOps::btn_current_inn == btn_inn1)
	{
		MdiOps::openchildform(this, team1->plxi_inn1[8]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn1);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl9);
		player::current_pl = team1->plxi_inn1[8];
	}
	else if (MdiOps::btn_current_inn == btn_inn2)
	{
		MdiOps::openchildform(this, team2->plxi_inn1[8]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn2);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl9);
		player::current_pl = team2->plxi_inn1[8];
	}
	else if (MdiOps::btn_current_inn == btn_inn3)
	{
		MdiOps::openchildform(this, team1->plxi_inn2[8]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn3);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl9);
		player::current_pl = team1->plxi_inn2[8];
	}
	else if (MdiOps::btn_current_inn == btn_inn4)
	{
		MdiOps::openchildform(this, team2->plxi_inn2[8]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn4);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl9);
		player::current_pl = team2->plxi_inn2[8];
	}
}

private: System::Void btn_pl10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MdiOps::btn_current_inn == btn_inn1)
	{
		MdiOps::openchildform(this, team1->plxi_inn1[9]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn1);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl10);
		player::current_pl = team1->plxi_inn1[9];
	}
	else if (MdiOps::btn_current_inn == btn_inn2)
	{
		MdiOps::openchildform(this, team2->plxi_inn1[9]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn2);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl10);
		player::current_pl = team2->plxi_inn1[9];
	}
	else if (MdiOps::btn_current_inn == btn_inn3)
	{
		MdiOps::openchildform(this, team1->plxi_inn2[9]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn3);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl10);
		player::current_pl = team1->plxi_inn2[9];
	}
	else if (MdiOps::btn_current_inn == btn_inn4)
	{
		MdiOps::openchildform(this, team2->plxi_inn2[9]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn4);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl10);
		player::current_pl = team2->plxi_inn1[9];
	}
}
private: System::Void btn_pl11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MdiOps::btn_current_inn == btn_inn1)
	{
		MdiOps::openchildform(this, team1->plxi_inn1[10]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn1);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl11);
		player::current_pl = team1->plxi_inn1[10];
	}
	else if (MdiOps::btn_current_inn == btn_inn2)
	{
		MdiOps::openchildform(this, team2->plxi_inn1[10]->pl_form_inn1, pnl_mdi_pl, pnl_btns_inn, btn_inn2);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl11);
		player::current_pl = team2->plxi_inn1[10];
	}
	else if (MdiOps::btn_current_inn == btn_inn3)
	{
		MdiOps::openchildform(this, team1->plxi_inn2[10]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn3);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl11);
		player::current_pl = team1->plxi_inn2[10];
	}
	else if (MdiOps::btn_current_inn == btn_inn4)
	{
		MdiOps::openchildform(this, team2->plxi_inn2[10]->pl_form_inn2, pnl_mdi_pl, pnl_btns_inn, btn_inn4);
		MdiOps::btnActive_Player(pnl_btns_pl, btn_pl11);
		player::current_pl = team2->plxi_inn2[10];
	}
}

private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e) {
	match::Save_Score(team1,team2);
	MessageBox::Show("Scorecard saved to text file. Scorecards are saved at Documents\\Cricket Matches.\n"+
		" You can also open the scorecard for current match by clicking the Open Score button.", "", 
		MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	tooltip_save->SetToolTip(btn_save, "Click to save the scorecard to a text file");
}
private: System::Void btn_openscore_Click(System::Object^ sender, System::EventArgs^ e) {
	if (match::match_date==nullptr)
	{
		MessageBox::Show("File does not exist! Please save the scorecard first!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	String^ filename = team1->tname + "_vs_" + team2->tname + "_" + match::match_date->ToString("dd-MM-yyyy") + ".txt";
	String^ path = Environment::GetFolderPath(Environment::SpecialFolder::MyDocuments) + "\\Cricket Matches\\" + filename;
	if (!File::Exists(path))
	{
		MessageBox::Show("File does not exist! Please save the scorecard first!", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	System::Diagnostics::Process::Start(path);
}
private: System::Void btn_openscore_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	tooltip_openfile->SetToolTip(btn_openscore, "Click to open the scorecard file");
}
private: System::Void ScoreControl_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
};
}
