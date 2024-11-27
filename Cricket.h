//Header file for main classes
#pragma once
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::IO;	

namespace OOPProject {
	typedef unsigned long long uint;	//Custom typename for 64 bit unsigned integer
	
	ref class Player;				//Forward declaration of Player form so its objects can be declared in player class
	
	//Class for a player
	public ref class player
	{
	public:
		player();
		String^ plname;
		String^ diss_by;
		uint runs;
		uint balls;
		uint dots;
		float strike_rate;
		uint ones;
		uint twos;
		uint threes;
		uint fours;
		uint sixes;
		bool out;
		Player^ pl_form_inn1;
		Player^ pl_form_inn2;
		static player^ current_pl;

		void static PlayerScore(); //Method to calculate the runs and strike rate of the batsman
	};

	//Class for creation of two teams
	public ref class Team
	{
	public:
		Team();
		
		String^ tname;				//String for team name
		
		List<player^>^ plxi_inn1;	//List to store the data of 11 players for 1st innings
		List<player^>^ plxi_inn2;	//List to store the data for 11 players for 2nd innings in case of a test match

		static String^ temp_tname1; //Strings to temporarily store the names of the to teams so that they're assigned to the teams
		static String^ temp_tname2; //when they're created upon loading an instance of ScoreControl form
	};

	//A simple class for specifying match type and saving the scorecard
	public ref class match
	{
	public:
		bool static test_match;			//Boolean to check if the match being created is a test match
		static String^ venue;			//String for storing the name of the venue of match
		static DateTime^ match_date;	//DateTime object for storing the date of match
		void static Save_Score(Team^ _team1, Team^ _team2); //Method to save the scorecard to a text file
	};
}