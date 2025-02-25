#include<string>
#include<iostream>

class Student {
    private:
        std::string m_name;

    public:
        Student(); //Default Constructor
        Student(std::string name); //Parameterized Constructor
        ~Student();
};