#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <iostream>
#include <string>

class Movie
{
private:
    std::string *name;
    std::string genere;
    int rating;

public:
    Movie();
    Movie(std::string name, std::string genere, int rating);
    Movie(const Movie &source);
    Movie &operator=(const Movie &rhs);
    void getMovie();
    friend std::ostream &operator<<(std::ostream &out, const Movie &obj);

    ~Movie();
};

#endif