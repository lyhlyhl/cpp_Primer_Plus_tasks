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
    Pizzer *mypizzer = new Pizzer;
    cout << "Please input the diameter:";
    cin >> mypizzer->diameter;
    cin.get();
    cout << "Please input the company:";
    cin.getline(mypizzer->name, 20);
    cout << "Please input the weight:";
    cin >> mypizzer->weight;

    cout << "Company name is " << mypizzer->name << ",diameter is " << mypizzer->diameter << ",weight is " << mypizzer->weight << "!" << endl;
    delete mypizzer;
    cin.get();

    return 0;
}