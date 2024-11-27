#pragma once
#include "Player.h"
using namespace OOPProject;
using namespace System::Drawing;
using namespace System::Windows::Forms;

public ref class MdiOps
{
public:

	static Form^ active_form;
	static Button^ btn_current_inn;
	static Button^ btn_current_pl;

	//----------------Method for opening the childform in the MDI Form----------------//

	void static openchildform(Form^ _parent ,Form^ _childform, Panel^ _panel, Panel^ _panel_btns,Object^ _sender)
	{
		btnActive_Inn(_panel_btns,_sender);
		if (_childform == nullptr) _childform = gcnew Player();
		if (active_form != nullptr) active_form->Hide();
		active_form = _childform;
		_childform->MdiParent = _parent;
		_panel->Controls->Add(_childform);
		_childform->Dock = DockStyle::Fill;
		_childform->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		_childform->TopLevel = false;
		_panel->Tag = _childform;
		_childform->Show();
	}

	//----------------Method for activating a button----------------//

	void static btnActive_Inn(Panel^ _panel, Object^ _sender)
	{

		if (btn_current_inn != (Button^)_sender)
		{
			btnInactive(_panel);
			btn_current_inn = (Button^)_sender;
			btn_current_inn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			btn_current_inn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			btn_current_inn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			btn_current_inn->FlatAppearance->BorderSize = 4;

		}
	}

	void static btnActive_Player(Panel^ _panel, Object^ _sender)
	{
		if (btn_current_pl != (Button^)_sender)
		{
			btnInactive(_panel);
			btn_current_pl = (Button^)_sender;
			btn_current_pl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			btn_current_pl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			btn_current_pl->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			btn_current_pl->FlatAppearance->BorderSize = 4;

		}


	}


	//----------------Method for deactivating a button----------------//

	void static btnInactive(Panel^ _panel)
	{
		for each (Button ^ btn in _panel->Controls)
		{
			btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			btn->FlatAppearance->BorderSize = 2;
		}

	}

};