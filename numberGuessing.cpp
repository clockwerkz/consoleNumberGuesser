#include <iostream>

void gameFunction(int difficulty) {
    std::cout << "Game difficulty will be: " << difficulty << ".";
}


int main() {
    std::cout << "This is a test print \n";
    gameFunction(45);
}