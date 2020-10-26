#include <iostream>
using namespace std;

int main()
{
    int luckyNumbers[5];
    // cout << luckyNumbers << endl;
    // cout << &luckyNumbers[0] << endl;
    // cout << luckyNumbers[2] << endl; //will return 3, the third element of the array
    // cout << *(luckyNumbers+2) << endl;  //will also return the third element - this is adding 2 to the array's address, and then dereferencing it
    for (int i=0; i < 5; i++)
    {
        cout << "Number: ";
        cin >> luckyNumbers[i];
    }

    for (int i=0; i < 5; i++)
    {
        cout << *(luckyNumbers+i) << " ";
    }
    system("pause>0");
    return 0;
}