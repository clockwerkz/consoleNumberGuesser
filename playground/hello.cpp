#include <iostream>
#include <vector>

using std::cout;

void PrintVectorSize(std::vector<int> *v)
{
    cout<< "Size of vector: " << v->size() << std::endl;
}

int main()
{
    std::vector<int> v1 {1,2,3,4,5}; //size of 5
    std::vector<int> *v2 = new std::vector<int>{4,5,6}; //initial size of 3
    v2->push_back(10); //Increasing size to 4
    cout << "Printing sizes of Vectors: \n";
    PrintVectorSize(&v1);
    PrintVectorSize(v2);
}