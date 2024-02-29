#include <iostream>
void drawSquare(int sideLength){
    for (int i = 0; i < sideLength; i++) {
        for (int j = 0; j < sideLength; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;

    }
}

int main() {
    int x;
    std::cout << "Enter the side lentgh of the square: ";
    std::cin >> x;

    drawSquare(x);
    return 0;

}