#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <ctime> /* time */

void PlayGameAtDifficulty(int difficulty) {
    srand(time(0));
    const int CodeA = rand() % 5 + 1;
    const int CodeB = rand() % 5 + 1;
    const int CodeC = rand() % 5 + 1;
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    std::cout << "+ There are 3 numbers in the code\n";
    std::cout << "+ The numbers added together equal " << CodeSum << std::endl;
    std::cout << "+ The numbers multiplied together equal " << CodeProduct << std::endl;
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You have guessed: " << GuessA << GuessB << GuessC << std::endl;
    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "NICE! You guessed Correctly! \n";
    } else 
    {
        std::cout << "Incorrect! The correct numbers are: " << CodeA << CodeB << CodeC << std::endl;
    }

}


int main() {
    std::cout << "You are a secret agent trying to break into the secure server room. \n";
    std::cout << "You need the correct codes to continue... \n";
    std::cout << std::endl;
    PlayGameAtDifficulty(2);
    return 0;
}