#include <iostream>
#include <stack>

int main() {
    std::stack<int> Plats;

    Plats.push(1); 
    Plats.push(2); 
    Plats.push(3); 

    std::cout << "Top element is: "<< Plats.top() << std::endl;
    Plats.pop();
    std::cout << "Top element after pop: " << Plats.top() << std::endl;
    return 0;
}