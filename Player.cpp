#include "Cricket.h"
#include "Player.h"
using namespace OOPProject;

namespace OOPProject {
	System::Void Player::btn_out_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (player::current_pl->out==true)
		{
			this->btn_one->Enabled = true;
			this->btn_two->Enabled = true;
			this->btn_three->Enabled = true;
			this->btn_four->Enabled = true;
			this->btn_six->Enabled = true;
			this->btn_dot->Enabled = true;
			this->txtbox_pl_name->Enabled = true;
			this->txtbox_pl_diss->Enabled = true;
			this->txtbox_runs->Enabled = true;
			this->txtbox_balls->Enabled = true;
			this->txtbox_ones->Enabled = true;
			this->txtbox_twos->Enabled = true;
			this->txtbox_threes->Enabled = true;
			this->txtbox_fours->Enabled = true;
			this->txtbox_sixes->Enabled = true;
			this->txtbox_dots->Enabled = true;
			player::current_pl->out = false;
		}
		else 
		{
			this->btn_one->Enabled = false;
			this->btn_two->Enabled = false;
			this->btn_three->Enabled = false;
			this->btn_four->Enabled = false;
			this->btn_six->Enabled = false;
			this->btn_dot->Enabled = false;
			this->txtbox_pl_name->Enabled = false;
			this->txtbox_pl_diss->Enabled = false;
			this->txtbox_runs->Enabled = false;
			this->txtbox_balls->Enabled = false;
			this->txtbox_ones->Enabled = false;
			this->txtbox_twos->Enabled = false;
			this->txtbox_threes->Enabled = false;
			this->txtbox_fours->Enabled = false;
			this->txtbox_sixes->Enabled = false;
			this->txtbox_dots->Enabled = false;
			player::current_pl->out = true;
		}
	}
	System::Void Player::txtbox_pl_name_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		player::current_pl->plname = this->txtbox_pl_name->Text->ToString();
	}
	System::Void Player::btn_one_Click(System::Object^ sender, System::EventArgs^ e)
	{
		player::current_pl->ones++;
		player::current_pl->balls++;
		player::current_pl->PlayerScore();
		this->txtbox_runs->Text = player::current_pl->runs.ToString();
		this->txtbox_balls->Text = player::current_pl->balls.ToString();
		this->txtbox_ones->Text = player::current_pl->ones.ToString();
		this->lbl_strike_rate->Text = player::current_pl->strike_rate.ToString();
	}
	System::Void Player::btn_two_Click(System::Object^ sender, System::EventArgs^ e)
	{
		player::current_pl->twos++;
		player::current_pl->balls++;
		player::current_pl->PlayerScore();
		this->txtbox_runs->Text = player::current_pl->runs.ToString();
		this->txtbox_balls->Text = player::current_pl->balls.ToString();
		this->txtbox_twos->Text = player::current_pl->twos.ToString();
		this->lbl_strike_rate->Text = player::current_pl->strike_rate.ToString();


	}
	System::Void Player::btn_three_Click(System::Object^ sender, System::EventArgs^ e)
	{
		player::current_pl->threes++;
		player::current_pl->balls++;
		player::current_pl->PlayerScore();
		this->txtbox_runs->Text = player::current_pl->runs.ToString();
		this->txtbox_balls->Text = player::current_pl->balls.ToString();
		this->txtbox_threes->Text = player::current_pl->threes.ToString();
		this->lbl_strike_rate->Text = player::current_pl->strike_rate.ToString();

	}
	System::Void Player::btn_four_Click(System::Object^ sender, System::EventArgs^ e)
	{
		player::current_pl->fours++;
		player::current_pl->balls++;
		player::current_pl->PlayerScore();
		this->txtbox_runs->Text = player::current_pl->runs.ToString();
		this->txtbox_balls->Text = player::current_pl->balls.ToString();
		this->txtbox_fours->Text = player::current_pl->fours.ToString();
		this->lbl_strike_rate->Text = player::current_pl->strike_rate.ToString();
	}
	System::Void Player::btn_six_Click(System::Object^ sender, System::EventArgs^ e)
	{
		player::current_pl->sixes++;
		player::current_pl->balls++;
		player::current_pl->PlayerScore();
		this->txtbox_runs->Text = player::current_pl->runs.ToString();
		this->txtbox_balls->Text = player::current_pl->balls.ToString();
		this->txtbox_sixes->Text = player::current_pl->sixes.ToString();
		this->lbl_strike_rate->Text = player::current_pl->strike_rate.ToString();
	}
	System::Void Player::btn_dot_Click(System::Object^ sender, System::EventArgs^ e)
	{
		player::current_pl->dots++;
		player::current_pl->balls++;
		player::current_pl->PlayerScore();
		this->txtbox_runs->Text = player::current_pl->runs.ToString();
		this->txtbox_balls->Text = player::current_pl->balls.ToString();
		this->txtbox_dots->Text = player::current_pl->dots.ToString();
		this->lbl_strike_rate->Text = player::current_pl->strike_rate.ToString();
	}
	System::Void Player::txtbox_pl_diss_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		player::current_pl->diss_by = this->txtbox_pl_diss->Text->ToString();
	}
	System::Void Player::txtbox_runs_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		//if (e->ToString()=="."||e->ToString()=="-")
		//{
		//	MessageBox::Show("Invalid input! Only positive integers allowed.", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//	return;
		//}
		player::current_pl->runs = Convert::ToInt64(this->txtbox_runs->Text);
	}
	System::Void Player::txtbox_balls_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		player::current_pl->balls = Convert::ToInt64(this->txtbox_balls->Text);
	}
	System::Void Player::txtbox_ones_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		player::current_pl->ones = Convert::ToInt64(this->txtbox_ones->Text);
	}
	System::Void Player::txtbox_twos_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		player::current_pl->twos = Convert::ToInt64(this->txtbox_twos->Text);
	}
	System::Void Player::txtbox_threes_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		player::current_pl->threes = Convert::ToInt64(this->txtbox_threes->Text);

	}
	System::Void Player::txtbox_fours_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		player::current_pl->fours = Convert::ToInt64(this->txtbox_fours->Text);

	}
	System::Void Player::txtbox_sixes_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		player::current_pl->sixes = Convert::ToInt64(this->txtbox_sixes->Text);

	}
}