#include <iostream>
#include <string>

class Person {
public:
    std::string Name;    
    std::string Surname;
    int Age;    


void displayInfo() {
    std::cout << "Name: " <<Name << std::endl;
    std::cout << "Surname: " << Surname << std::endl;
    std::cout << "Age: " << Age<< std::endl;
}
};

Person createPersonFromConsole() {
    Person newPerson;

    std::cout << "Enter your name: ";
    std::cin >> newPerson.Name;   

    
    std::cout << "Enter your surname: ";
    std::cin >> newPerson.Surname;  
    
    std::cout << "Enter your age: ";
    std::cin >> newPerson.Age;

    return newPerson;
}


int main() {
    Person personFromConsole = createPersonFromConsole();

    personFromConsole.displayInfo();
    
 


    return 0;


}

