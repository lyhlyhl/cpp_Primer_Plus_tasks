#include "iostream"
#include "string"

using namespace std;

int main()
{
    struct CandyBar
    {
        string name;
        double weight;
        int heat;
    };

    CandyBar snack{"Mocha Munch", 2.3, 350};
    cout << "Name is " << snack.name << endl;
    cout << "Weight is " << snack.weight << endl;
    cout << "Heat is " << snack.heat << endl;

    cin.get();

    return 0;
}