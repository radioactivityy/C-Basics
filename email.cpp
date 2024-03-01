#include <iostream>
#include <string>
  
class email{
public:
    std::string Sender;
    std::string Reciever;
    std::string Title;
    std::string Message;
    int Date;

void displayInfo() {
    std::cout << "Sender: " << Sender << std::endl;
    std::cout << "Reciever: " << Reciever << std::endl;
    std::cout << "Title: " << Title << std::endl;
    std::cout << "Message: " << Message << std::endl;
    std::cout << "Date: " << Date<< std::endl;  
}
};

email createEmail() {
    email newEmail;

    std::cout << "Enter the Reciever: ";
    std::cin >> newEmail.Reciever;   

    
    std::cout << "Enter the title: ";
    std::cin >> newEmail.Title;  
    
    std::cout << "Enter the message: ";
    std::cin >> newEmail.Message;

    return newEmail;


}


int main() {

email newEmailFromConsole = createEmail();

newEmailFromConsole.displayInfo();


}