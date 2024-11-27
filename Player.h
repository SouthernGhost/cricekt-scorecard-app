#pragma once

namespace OOPProject {
	using namespace System;
	using namespace System::Text::RegularExpressions;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Player
	/// </summary>
	public ref class Player : public System::Windows::Forms::Form
	{
	public:
		Player(void)
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
		~Player()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ lbl_name_pl;
	private: System::Windows::Forms::TextBox^ txtbox_pl_name;
	private: System::Windows::Forms::TextBox^ txtbox_pl_diss;
	private: System::Windows::Forms::TextBox^ txtbox_runs;
	private: System::Windows::Forms::TextBox^ txtbox_balls;
	private: System::Windows::Forms::TextBox^ txtbox_ones;
	private: System::Windows::Forms::TextBox^ txtbox_twos;
	private: System::Windows::Forms::TextBox^ txtbox_sixes;
	private: System::Windows::Forms::TextBox^ txtbox_fours;
	private: System::Windows::Forms::Button^ btn_one;
	private: System::Windows::Forms::Button^ btn_two;
	private: System::Windows::Forms::Button^ btn_three;
	private: System::Windows::Forms::Button^ btn_six;
	private: System::Windows::Forms::Button^ btn_four;
	private: System::Windows::Forms::Button^ btn_out;
	private: System::Windows::Forms::TextBox^ txtbox_threes;
	private: System::Windows::Forms::Button^ btn_dot;
	private: System::Windows::Forms::Label^ lbl_strike_rate;
	private: System::Windows::Forms::TextBox^ txtbox_dots;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Player::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lbl_name_pl = (gcnew System::Windows::Forms::Label());
			this->txtbox_pl_name = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_pl_diss = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_runs = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_balls = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_ones = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_twos = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_sixes = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_fours = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_threes = (gcnew System::Windows::Forms::TextBox());
			this->btn_one = (gcnew System::Windows::Forms::Button());
			this->btn_two = (gcnew System::Windows::Forms::Button());
			this->btn_three = (gcnew System::Windows::Forms::Button());
			this->btn_six = (gcnew System::Windows::Forms::Button());
			this->btn_four = (gcnew System::Windows::Forms::Button());
			this->btn_out = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->lbl_strike_rate = (gcnew System::Windows::Forms::Label());
			this->txtbox_dots = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(58, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 25);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Dismissal";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(58, 539);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(31, 25);
			this->label19->TabIndex = 42;
			this->label19->Text = L"6s";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(58, 439);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(31, 25);
			this->label18->TabIndex = 41;
			this->label18->Text = L"3s";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(58, 489);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(31, 25);
			this->label17->TabIndex = 40;
			this->label17->Text = L"4s";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(58, 389);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(31, 25);
			this->label16->TabIndex = 39;
			this->label16->Text = L"2s";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(58, 339);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(28, 25);
			this->label15->TabIndex = 38;
			this->label15->Text = L"1s";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(58, 186);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(51, 25);
			this->label14->TabIndex = 37;
			this->label14->Text = L"Balls";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(58, 289);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 25);
			this->label13->TabIndex = 36;
			this->label13->Text = L"SR";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(58, 136);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 25);
			this->label12->TabIndex = 35;
			this->label12->Text = L"Runs";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_name_pl
			// 
			this->lbl_name_pl->AutoSize = true;
			this->lbl_name_pl->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_name_pl->Location = System::Drawing::Point(58, 31);
			this->lbl_name_pl->Name = L"lbl_name_pl";
			this->lbl_name_pl->Size = System::Drawing::Size(64, 25);
			this->lbl_name_pl->TabIndex = 34;
			this->lbl_name_pl->Text = L"Name";
			// 
			// txtbox_pl_name
			// 
			this->txtbox_pl_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtbox_pl_name->Location = System::Drawing::Point(258, 27);
			this->txtbox_pl_name->Name = L"txtbox_pl_name";
			this->txtbox_pl_name->Size = System::Drawing::Size(234, 29);
			this->txtbox_pl_name->TabIndex = 44;
			this->txtbox_pl_name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtbox_pl_name->TextChanged += gcnew System::EventHandler(this, &Player::txtbox_pl_name_TextChanged);
			// 
			// txtbox_pl_diss
			// 
			this->txtbox_pl_diss->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtbox_pl_diss->Location = System::Drawing::Point(258, 82);
			this->txtbox_pl_diss->Name = L"txtbox_pl_diss";
			this->txtbox_pl_diss->Size = System::Drawing::Size(234, 29);
			this->txtbox_pl_diss->TabIndex = 45;
			this->txtbox_pl_diss->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtbox_pl_diss->TextChanged += gcnew System::EventHandler(this, &Player::txtbox_pl_diss_TextChanged);
			// 
			// txtbox_runs
			// 
			this->txtbox_runs->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtbox_runs->Location = System::Drawing::Point(258, 132);
			this->txtbox_runs->Name = L"txtbox_runs";
			this->txtbox_runs->Size = System::Drawing::Size(82, 29);
			this->txtbox_runs->TabIndex = 46;
			this->txtbox_runs->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtbox_runs->TextChanged += gcnew System::EventHandler(this, &Player::txtbox_runs_TextChanged);
			// 
			// txtbox_balls
			// 
			this->txtbox_balls->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtbox_balls->Location = System::Drawing::Point(258, 182);
			this->txtbox_balls->Name = L"txtbox_balls";
			this->txtbox_balls->Size = System::Drawing::Size(82, 29);
			this->txtbox_balls->TabIndex = 47;
			this->txtbox_balls->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtbox_balls->TextChanged += gcnew System::EventHandler(this, &Player::txtbox_balls_TextChanged);
			// 
			// txtbox_ones
			// 
			this->txtbox_ones->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtbox_ones->Location = System::Drawing::Point(258, 335);
			this->txtbox_ones->Name = L"txtbox_ones";
			this->txtbox_ones->Size = System::Drawing::Size(82, 29);
			this->txtbox_ones->TabIndex = 49;
			this->txtbox_ones->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtbox_ones->TextChanged += gcnew System::EventHandler(this, &Player::txtbox_ones_TextChanged);
			// 
			// txtbox_twos
			// 
			this->txtbox_twos->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtbox_twos->Location = System::Drawing::Point(258, 385);
			this->txtbox_twos->Name = L"txtbox_twos";
			this->txtbox_twos->Size = System::Drawing::Size(82, 29);
			this->txtbox_twos->TabIndex = 50;
			this->txtbox_twos->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtbox_twos->TextChanged += gcnew System::EventHandler(this, &Player::txtbox_twos_TextChanged);
			// 
			// txtbox_sixes
			// 
			this->txtbox_sixes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtbox_sixes->Location = System::Drawing::Point(258, 535);
			this->txtbox_sixes->Name = L"txtbox_sixes";
			this->txtbox_sixes->Size = System::Drawing::Size(82, 29);
			this->txtbox_sixes->TabIndex = 51;
			this->txtbox_sixes->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtbox_sixes->TextChanged += gcnew System::EventHandler(this, &Player::txtbox_sixes_TextChanged);
			// 
			// txtbox_fours
			// 
			this->txtbox_fours->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtbox_fours->Location = System::Drawing::Point(258, 485);
			this->txtbox_fours->Name = L"txtbox_fours";
			this->txtbox_fours->Size = System::Drawing::Size(82, 29);
			this->txtbox_fours->TabIndex = 52;
			this->txtbox_fours->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtbox_fours->TextChanged += gcnew System::EventHandler(this, &Player::txtbox_fours_TextChanged);
			// 
			// txtbox_threes
			// 
			this->txtbox_threes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtbox_threes->Location = System::Drawing::Point(258, 435);
			this->txtbox_threes->Name = L"txtbox_threes";
			this->txtbox_threes->Size = System::Drawing::Size(82, 29);
			this->txtbox_threes->TabIndex = 53;
			this->txtbox_threes->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtbox_threes->TextChanged += gcnew System::EventHandler(this, &Player::txtbox_threes_TextChanged);
			// 
			// btn_one
			// 
			this->btn_one->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btn_one->FlatAppearance->BorderSize = 2;
			this->btn_one->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_one->Location = System::Drawing::Point(572, 529);
			this->btn_one->Name = L"btn_one";
			this->btn_one->Size = System::Drawing::Size(45, 45);
			this->btn_one->TabIndex = 54;
			this->btn_one->Text = L"1";
			this->btn_one->UseVisualStyleBackColor = true;
			this->btn_one->Click += gcnew System::EventHandler(this, &Player::btn_one_Click);
			// 
			// btn_two
			// 
			this->btn_two->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btn_two->FlatAppearance->BorderSize = 2;
			this->btn_two->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_two->Location = System::Drawing::Point(623, 529);
			this->btn_two->Name = L"btn_two";
			this->btn_two->Size = System::Drawing::Size(45, 45);
			this->btn_two->TabIndex = 55;
			this->btn_two->Text = L"2";
			this->btn_two->UseVisualStyleBackColor = true;
			this->btn_two->Click += gcnew System::EventHandler(this, &Player::btn_two_Click);
			// 
			// btn_three
			// 
			this->btn_three->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btn_three->FlatAppearance->BorderSize = 2;
			this->btn_three->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_three->Location = System::Drawing::Point(674, 529);
			this->btn_three->Name = L"btn_three";
			this->btn_three->Size = System::Drawing::Size(45, 45);
			this->btn_three->TabIndex = 56;
			this->btn_three->Text = L"3";
			this->btn_three->UseVisualStyleBackColor = true;
			this->btn_three->Click += gcnew System::EventHandler(this, &Player::btn_three_Click);
			// 
			// btn_six
			// 
			this->btn_six->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btn_six->FlatAppearance->BorderSize = 2;
			this->btn_six->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_six->Location = System::Drawing::Point(776, 529);
			this->btn_six->Name = L"btn_six";
			this->btn_six->Size = System::Drawing::Size(45, 45);
			this->btn_six->TabIndex = 57;
			this->btn_six->Text = L"6";
			this->btn_six->UseVisualStyleBackColor = true;
			this->btn_six->Click += gcnew System::EventHandler(this, &Player::btn_six_Click);
			// 
			// btn_four
			// 
			this->btn_four->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btn_four->FlatAppearance->BorderSize = 2;
			this->btn_four->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_four->Location = System::Drawing::Point(725, 529);
			this->btn_four->Name = L"btn_four";
			this->btn_four->Size = System::Drawing::Size(45, 45);
			this->btn_four->TabIndex = 58;
			this->btn_four->Text = L"4";
			this->btn_four->UseVisualStyleBackColor = true;
			this->btn_four->Click += gcnew System::EventHandler(this, &Player::btn_four_Click);
			// 
			// btn_out
			// 
			this->btn_out->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btn_out->BackColor = System::Drawing::Color::Transparent;
			this->btn_out->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_out.BackgroundImage")));
			this->btn_out->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_out->FlatAppearance->BorderSize = 2;
			this->btn_out->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_out->Location = System::Drawing::Point(878, 529);
			this->btn_out->Name = L"btn_out";
			this->btn_out->Size = System::Drawing::Size(45, 45);
			this->btn_out->TabIndex = 59;
			this->btn_out->UseVisualStyleBackColor = false;
			this->btn_out->Click += gcnew System::EventHandler(this, &Player::btn_out_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btn_dot->BackColor = System::Drawing::Color::Transparent;
			this->btn_dot->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_dot.BackgroundImage")));
			this->btn_dot->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_dot->FlatAppearance->BorderSize = 2;
			this->btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_dot->Location = System::Drawing::Point(827, 529);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(45, 45);
			this->btn_dot->TabIndex = 60;
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &Player::btn_dot_Click);
			// 
			// lbl_strike_rate
			// 
			this->lbl_strike_rate->AutoSize = true;
			this->lbl_strike_rate->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_strike_rate->Location = System::Drawing::Point(253, 289);
			this->lbl_strike_rate->Name = L"lbl_strike_rate";
			this->lbl_strike_rate->Size = System::Drawing::Size(20, 25);
			this->lbl_strike_rate->TabIndex = 69;
			this->lbl_strike_rate->Text = L"-";
			this->lbl_strike_rate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtbox_dots
			// 
			this->txtbox_dots->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtbox_dots->Location = System::Drawing::Point(258, 232);
			this->txtbox_dots->Name = L"txtbox_dots";
			this->txtbox_dots->Size = System::Drawing::Size(82, 29);
			this->txtbox_dots->TabIndex = 71;
			this->txtbox_dots->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(58, 236);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 25);
			this->label1->TabIndex = 70;
			this->label1->Text = L"Dots";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Player
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(991, 625);
			this->ControlBox = false;
			this->Controls->Add(this->txtbox_dots);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl_strike_rate);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->btn_out);
			this->Controls->Add(this->btn_four);
			this->Controls->Add(this->btn_six);
			this->Controls->Add(this->btn_three);
			this->Controls->Add(this->btn_two);
			this->Controls->Add(this->btn_one);
			this->Controls->Add(this->txtbox_threes);
			this->Controls->Add(this->txtbox_fours);
			this->Controls->Add(this->txtbox_sixes);
			this->Controls->Add(this->txtbox_twos);
			this->Controls->Add(this->txtbox_ones);
			this->Controls->Add(this->txtbox_balls);
			this->Controls->Add(this->txtbox_runs);
			this->Controls->Add(this->txtbox_pl_diss);
			this->Controls->Add(this->txtbox_pl_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->lbl_name_pl);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Player";
			this->ShowInTaskbar = false;
			this->Text = L"Player";
			this->Load += gcnew System::EventHandler(this, &Player::Player_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Player_Load(System::Object^ sender, System::EventArgs^ e) {
	}
public: 
	System::Void btn_out_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void txtbox_pl_name_TextChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void btn_one_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btn_two_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btn_three_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btn_four_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btn_six_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void txtbox_pl_diss_TextChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void txtbox_runs_TextChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void txtbox_balls_TextChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void txtbox_ones_TextChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void txtbox_twos_TextChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void txtbox_threes_TextChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void txtbox_fours_TextChanged(System::Object^ sender, System::EventArgs^ e);
	System::Void txtbox_sixes_TextChanged(System::Object^ sender, System::EventArgs^ e);
};

}

