#include <iostream>
#include "Movie.hpp"

int main()
{
    Movie movie1;
    std::cout << movie1;

    Movie movie2("Spider Man", "superhero", 10);
    movie2.getMovie();

    Movie movie3 = movie2;
    movie3.getMovie();

    Movie movie4("Iron Man", "superhero", 10);
    movie4.getMovie();

    movie4 = movie2;

    return 0;
}