#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <ctime> /* time */

bool PlayGameAtDifficulty(int Difficulty) {
    srand(time(0));
    const int CodeA = rand() % Difficulty + 1;
    const int CodeB = rand() % Difficulty + 1;
    const int CodeC = rand() % Difficulty + 1;
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    std::cout << "LEVEL " << Difficulty << std::endl;
    std::cout << "+ There are 3 numbers in the code\n";
    std::cout << "+ The numbers added together equal " << CodeSum << std::endl;
    std::cout << "+ The numbers multiplied together equal " << CodeProduct << std::endl;
    std::cout << "Please enter your guesses: \n";
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "NICE! You guessed Correctly! \n";
        return true;
    } else 
    {
        std::cout << "Sorry that guess was incorrect. \n";
        return false;
    }

}

void PrintTitle()
{
    std::cout << "   ('-. .-.    ('-.                       .-') _   .-') _       ('-.    _ .-') _           .-')       ('-.      ('-.          .-') _                 ('-.   \n";
    std::cout << "  ( OO )  /   ( OO ).-.                  ( OO ) ) (  OO) )    _(  OO)  ( (  OO) )         ( OO ).   _(  OO)    ( OO ).-.     ( OO ) )              _(  OO)  \n";
    std::cout << "  ,--. ,--.   / . --. /  ,--. ,--.   ,--./ ,--,'  /     '._  (,------.  \\     .'_        (_)---\\_) (,------.   / . --. / ,--./ ,--,'     .-----.  (,------. \n";
    std::cout << "  |  | |  |   | \\-.  \\   |  | |  |   |   \\ |  |\\  |'--...__)  |  .---'  ,`'--..._)       /    _ |   |  .---'   | \\-.  \\  |   \\ |  |\\    '  .--./   |  .---' \n";
    std::cout << "  |   .|  | .-'-'  |  |  |  | | .-') |    \\|  | ) '--.  .--'  |  |      |  |  \\  '       \\  :` `.   |  |     .-'-'  |  | |    \\|  | )   |  |('-.   |  |     \n";
    std::cout << "  |       |  \\| |_.'  |  |  |_|( OO )|  .     |/     |  |    (|  '--.   |  |   ' |        '..`''.) (|  '--.   \\| |_.'  | |  .     |/   /_) |OO  ) (|  '--.  \n";
    std::cout << "  |  .-.  |   |  .-.  |  |  | | `-' /|  |\\    |      |  |     |  .--'   |  |   / :       .-._)   \\  |  .--'    |  .-.  | |  |\\    |    ||  |`-'|   |  .--'  \n";
    std::cout << "  |  | |  |   |  | |  | ('  '-'(_.-' |  | \\   |      |  |     |  `---.  |  '--'  /       \\       /  |  `---.   |  | |  | |  | \\   |   (_'  '--'\\   |  `---. \n";
    std::cout << "  `--' `--'   `--' `--'   `-----'    `--'  `--'      `--'     `------'  `-------'         `-----'   `------'   `--' `--' `--'  `--'      `-----'   `------' \n";
}

int main() {
    PrintTitle();
    std::cout << "You are a secret agent trying to break into the secure server room. \n";
    std::cout << "You need the correct codes to continue... \n\n";
    std::cout << std::endl;
    int Difficulty = 2;
    int MaxDifficulty = 10;
    while (Difficulty <= MaxDifficulty) {
        if (PlayGameAtDifficulty(Difficulty)) {
            Difficulty++;
        }

    }
    return 0;
}