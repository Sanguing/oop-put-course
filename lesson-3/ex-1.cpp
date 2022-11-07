#include <iostream>
#include <cstdlib>
#include <string>

class year_list {
private:
    int years[10];
public:
    year_list()
    {
        for (int i = 1990; i <= 1999; i += 1)
        {

            years[i - 1990] = i;

        }
    }

    void display()
    {
        for (int i = 1990; i <= 1999; i += 1)
        {

            std::cout << years[i - 1990] << "\n";

        }
    }

};

class genres {
private:
    std::string genre;
public:
    genres() {
        std::string genre = "Tragycomedy";
        std::cout << "Genre of this movie is: " << genre << "\n";
    }

    std::string change_genre(std::string new_name) {
        std::string genre = new_name;
    }
};

class critic_score_class {

private:
    float score;
public:
    critic_score_class() {

        score = rand() % 101;
        score /= 10;

    }

    void judge(float score) {
        if (score < 5)
            std::cout << "Movie is below average";
        else
            std::cout << "Movie is above average";
    }
};

class movie {

private:

    std::string name;
    genres genre;
    year_list year;
    critic_score_class critic_score;

public:
    //default constructor

    movie() {
        std::string name = "asdf";
        std::string genre = "comedy";
        int year = 1999;
        float critic_score = 7.6;
    }

};


int main()
{
   
}
