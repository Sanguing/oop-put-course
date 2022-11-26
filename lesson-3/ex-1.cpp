#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class names {
public: string name_s;

public:
	names()
	{
		name_s = "Default Movie";
	}

	void display()
	{
		cout << "Name of the movie is: " << name_s << endl;
	}

};

class years {
public: 
	int years_s;

	years()
	{
		years_s = 1990;
	}

	void display()
	{
		cout << "Year of production is: " << years_s << endl;
	}
};


class scores {
public:
	float scores_s;

	scores()
	{
		scores_s = rand() % 101;
		scores_s /= 10;
	}

	void display() {

		cout << "The score of the movie is " << scores_s << endl;
	
	}

	string is_movie_any_good(float score) {

		cout << "Is movie any good?" << endl;
		string s;



		if (score < 5)
			s = "NO!!!";
		else
			s = "YES!!!";

		return s;
			
	}
};


class movie {
public:

	names name;
	years year;
	scores score;

public:
	movie()
	{
		names();
		years();
		scores();
	}

	movie(string name_1, int year_1, float score_1)
	{
		name.name_s = name_1;
		year.years_s = year_1;
		score.scores_s = score_1;
	}

	void display_all() {

		name.display();
		year.display();
		score.display();
		cout << score.is_movie_any_good(score.scores_s) << endl << endl << endl;

	}

};



int main()
{

	srand((unsigned int)time(NULL));
	movie movie_1;
	movie movie_2("Lord of The Rings: Fellowship of the Ring", 2002, 9.7);

	movie_1.display_all();
	movie_2.display_all();
}
