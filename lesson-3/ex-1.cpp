#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class names {

private: string name;

public:
	names()
	{
		name = "Default Movie";
	}

	names(string name)
	{
		this->name = name;
	}

	void display()
	{
		cout << "Name of the movie is: " << name << endl;
	}

};

class years {
private:
	int year;

public:
	years()
	{
		year = 1990;
	}
	years(int year)
	{
		this->year = year;
	}

	void display()
	{
		cout << "Year of production is: " << year << endl;
	}
};


class scores {
private:
	double score;

public:
	scores()
	{
		score = rand() % 101;
		score /= 10;
	}

	scores(double score)
	{
		this -> score = score;
	}

	void display() {

		cout << "The score of the movie is " << score << endl;

	}

	string is_movie_any_good() {

		double score;
		string s;
		score = this->score;


		if (score < 5)
			s = "NO!!!";
		else
			s = "YES!!!";

		return 	"Is movie any good? " + '\n' + s;

	}
};


class movie {

private:

	names name;
	years year;
	scores score;

public:

	movie()
	{
		this->name = names();
		this->year = years();
		this->score = scores();
	}

	movie(string name_movie, int year_movie, double score_movie)
	{
		this->name = names(name_movie);
		this->year = years(year_movie);
		this->score = scores(score_movie);
	}

	void display_all() {

		name.display();
		year.display();
		score.display();
		cout << score.is_movie_any_good() << endl << endl << endl;

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
