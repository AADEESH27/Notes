#include <iostream>
#include "Student.hpp"

int main()
{
    // Dynamically = In heap memory
    Student *student1 = new Student("Aadeesh");

    // Statically = In stack memory
    //  Student student1("Aadeesh");
    return 0;
}