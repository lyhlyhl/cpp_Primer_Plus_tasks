#include "iostream"
using namespace std;

struct Pizzer
{
    char name[20];
    double diameter;
    double weight;
};

int main()
{
    Pizzer mypizzer;
    cout << "Please input the company:";
    cin.getline(mypizzer.name, 20);
    cout << "Please input the diameter:";
    cin >> mypizzer.diameter;
    cout << "Please input the weight:";
    cin >> mypizzer.weight;

    cout << "Company name is " << mypizzer.name << ",diameter is " << mypizzer.diameter << ",weight is " << mypizzer.weight << "!" << endl;

    cin.get();

    return 0;
}
