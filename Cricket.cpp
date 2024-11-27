#include "Player.h"
#include "Cricket.h"

namespace OOPProject {

	//player class constructor
	player::player()
	{
		this->plname = "";
		this->diss_by = "";
		this->runs = 0;
		this->balls = 0;
		this->strike_rate = 0;
		this->ones = 0;
		this->twos = 0;
		this->threes = 0;
		this->fours = 0;
		this->sixes = 0;
		this->out = false;
		this->pl_form_inn1 = gcnew Player();
		this->pl_form_inn2 = gcnew Player();

	}

	//-----------------------Method of class player to update the score of a player-----------------------//
	void player::PlayerScore()
	{
		current_pl->runs = current_pl->ones + (2 * (current_pl->twos)) + (3 * (current_pl->threes)) + (4 * (current_pl->fours)) 
			+ (6 * (current_pl->sixes));
		current_pl->strike_rate = (static_cast<float>(current_pl->runs) / static_cast<float> (current_pl->balls)) * 100;
	}

	//Team class constructor
	Team::Team()
	{
		this->plxi_inn1 = gcnew List<player^>();
		this->plxi_inn1->Capacity = 11;
		this->plxi_inn2 = gcnew List<player^>();
		this->plxi_inn2->Capacity = 11;

	}

	//Method for saving the scorecard to a text file
	void match::Save_Score(Team^ _team1,Team^ _team2)
	{
		String^ path = Environment::GetFolderPath(Environment::SpecialFolder::MyDocuments) + "\\Cricket Matches\\";
		String^ header = _team1->tname + " vs " + _team2->tname + "\n" + match::venue + "\n";
		String^ columns = "\nName\tDismissal\t\tRuns\tBalls\tDots\tStrike Rate\t1s\t2s\t3s\t4s\t6s\n";
		String^ pl_data;
		if (!Directory::Exists(path))
		{
			Directory::CreateDirectory(path);
		}
		else
		{
			match::match_date = gcnew DateTime();
			match::match_date = match::match_date->Now;
			match::match_date = match::match_date->Date;
			String^ filename = _team1->tname + "_vs_" + _team2->tname + "_" + match::match_date->ToString("dd-MM-yyyy") + ".txt";
			StreamWriter^ sc_writer = gcnew StreamWriter(path+filename);
			sc_writer->Write(header);
			sc_writer->Write(match::match_date->ToString("dd-MM-yyyy") + "\n");

			for (int i = 0; i < 25; i++)
			{
				sc_writer->Write("-");
			}
			if (match::test_match == true) sc_writer->Write(_team1->tname + " - 1st Innings");
			else sc_writer->Write(_team1->tname);

			for (int i = 0; i < 25; i++)
			{
				sc_writer->Write("-");
			}

			sc_writer->Write("\n" + columns + "\n");

			for (int i = 0; i < 11; i++)
			{
				pl_data = (_team1->plxi_inn1[i]->plname + "\t" + _team1->plxi_inn1[i]->diss_by + "\t\t" + _team1->plxi_inn1[i]->runs + "\t"
					+ _team1->plxi_inn1[i]->balls + "\t" + _team1->plxi_inn1[i]->dots + "\t" + _team1->plxi_inn1[i]->strike_rate + "\t\t" + _team1->plxi_inn1[i]->ones
					+ "\t" + _team1->plxi_inn1[i]->twos + "\t" + _team1->plxi_inn1[i]->threes + "\t" + _team1->plxi_inn1[i]->fours + "\t"
					+ _team1->plxi_inn1[i]->sixes);
				sc_writer->Write(pl_data);
				sc_writer->Write("\n");
			}

			sc_writer->Write("\n");

			for (int i = 0; i < 25; i++)
			{
				sc_writer->Write("-");
			}

			if (match::test_match == true) sc_writer->Write(_team2->tname + " - 1st Innings");
			else sc_writer->Write(_team1->tname);

			for (int i = 0; i < 25; i++)
			{
				sc_writer->Write("-");
			}
			sc_writer->Write("\n" + columns + "\n");

			for (int i = 0; i < 11; i++)
			{
				pl_data = (_team2->plxi_inn1[i]->plname + "\t" + _team2->plxi_inn1[i]->diss_by + "\t\t" + _team2->plxi_inn1[i]->runs + "\t"
					+ _team2->plxi_inn1[i]->balls + "\t" + _team2->plxi_inn1[i]->dots + "\t" + _team2->plxi_inn1[i]->strike_rate + "\t\t" + _team2->plxi_inn1[i]->ones
					+ "\t" + _team2->plxi_inn1[i]->twos + "\t" + _team2->plxi_inn1[i]->threes + "\t" + _team2->plxi_inn1[i]->fours + "\t"
					+ _team2->plxi_inn1[i]->sixes);
				sc_writer->Write(pl_data);
				sc_writer->Write("\n");
			}

			sc_writer->Write("\n");

			if (match::test_match == true)
			{
				for (int i = 0; i < 25; i++)
				{
					sc_writer->Write("-");
				}

				sc_writer->Write(_team1->tname + " - 2nd Innings");

				for (int i = 0; i < 25; i++)
				{
					sc_writer->Write("-");
				}

				sc_writer->Write("\n" + columns + "\n");

				for (int i = 0; i < 11; i++)
				{
					pl_data = (_team1->plxi_inn2[i]->plname + "\t" + _team1->plxi_inn2[i]->diss_by + "\t\t" + _team1->plxi_inn2[i]->runs + "\t"
						+ _team1->plxi_inn2[i]->balls.ToString() + "\t" + _team1->plxi_inn2[i]->dots + "\t" + _team1->plxi_inn2[i]->strike_rate + "\t\t" + _team1->plxi_inn2[i]->ones
						+ "\t" + _team1->plxi_inn2[i]->twos + "\t" + _team1->plxi_inn2[i]->threes + "\t" + _team1->plxi_inn2[i]->fours + "\t"
						+ _team1->plxi_inn2[i]->sixes);
					sc_writer->Write(pl_data);
					sc_writer->Write("\n");
				}

				sc_writer->Write("\n");

				for (int i = 0; i < 25; i++)
				{
					sc_writer->Write("-");
				}

				sc_writer->Write(_team2->tname + " - 2nd Innings");

				for (int i = 0; i < 25; i++)
				{
					sc_writer->Write("-");
				}

				sc_writer->Write("\n" + columns + "\n");

				for (int i = 0; i < 11; i++)
				{
					pl_data = (_team2->plxi_inn2[i]->plname + "\t" + _team2->plxi_inn2[i]->diss_by + "\t\t" + _team2->plxi_inn2[i]->runs + "\t"
						+ _team2->plxi_inn2[i]->balls + "\t" + _team2->plxi_inn1[i]->dots + "\t" + _team2->plxi_inn2[i]->strike_rate + "\t\t" + _team2->plxi_inn2[i]->ones
						+ "\t" + _team2->plxi_inn2[i]->twos + "\t" + _team2->plxi_inn2[i]->threes + "\t" + _team2->plxi_inn2[i]->fours + "\t"
						+ _team2->plxi_inn2[i]->sixes);
					sc_writer->Write(pl_data);
					sc_writer->Write("\n");
				}
				sc_writer->Write("\n");

			}
			sc_writer->Flush();
			sc_writer->Close();

		}
	}

}