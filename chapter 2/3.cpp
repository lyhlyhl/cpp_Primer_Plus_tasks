#include <iostream>

using namespace std;

void firstPrint();
void secondPrint();

int main()
{
    firstPrint();
    firstPrint();
    secondPrint();
    secondPrint();
    cin.get();
}

void firstPrint()
{
    cout << "Three blind mice" << endl;
}
void secondPrint()
{
    cout << "See how they run" << endl;
}