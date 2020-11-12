#include <iostream>
using std::cout;

int main() {
    double sugar {1.5};
    double butter{1};
    double flour{2.75};
    double recipeAmount{48};
    double cookieAmount;
    double sugarAmt, butterAmt, flourAmt;
    cout << "Enter the number of cookies you'd like to make!\n";
    std::cin >> cookieAmount;
    cout << "In order to make " << cookieAmount << " cookies, you'll need:\n";
    sugarAmt = sugar * (cookieAmount/recipeAmount);
    butterAmt = butter * (cookieAmount/recipeAmount);
    flourAmt = flour * (cookieAmount/recipeAmount);
    cout << sugarAmt << " cup(s) of sugar\n";
    cout << butterAmt << " cup(s) of butter\n";
    cout << flourAmt <<  "cup(s) of flour\n";
    return 0;
}