#include "Movie.hpp"

Movie::Movie()
{
    this->name = new std::string("No name");
    this->genere = "No genere";
    this->rating = 0;
}

void Movie::getMovie()
{
    std::cout << *this->name << std::endl;
}

Movie::Movie(std::string name, std::string genere, int rating)
{
    this->name = new std::string(name);
    this->genere = genere;
    this->rating = rating;
}

Movie::Movie(const Movie &source)
{
    this->name = new std::string(*source.name);
    this->genere = source.genere;
    this->rating = source.rating;
}

Movie &Movie::operator=(const Movie &source)
{
    if (this == &source)
    {
        return *this;
    }

    delete name;
    this->name = new std::string(*source.name);
    this->genere = source.genere;
    this->rating = source.rating;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Movie &obj)
{
    out << *(obj.name) << " " << obj.genere << " " << obj.rating << std::endl;
    return out;
}

Movie::~Movie()
{
    std::cout << "Movie object destroyed: " << *this->name << std::endl;
    delete name;
}