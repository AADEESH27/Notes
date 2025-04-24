#include "Student.hpp"

Student::Student(){
    std::cout << "Constructor" << std::endl;
}

Student::Student(std::string name){
    m_name = name;
    std::cout << "Constructor" << std::endl;
    std::cout << "Name: " << m_name << std::endl;
}

Student::~Student(){
    std::cout << "Destructor" << std::endl;
}
