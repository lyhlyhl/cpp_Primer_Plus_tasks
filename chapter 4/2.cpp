#include "iostream"
#include "string"
using namespace std;
const int ArSize = 20;
int main()
{
    string name, dessert;
    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << "for your, " << name << ".\n";
    cin.get();
    return 0;
}