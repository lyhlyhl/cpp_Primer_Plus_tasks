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
    CandyBar snake[3] = {{"name1", 0.1, 3}, {"name2", 0.2, 5}, {"name3", 0.3, 8}};
    cout << "name: " << snake[0].name << " weight: " << snake[0].weight << " heat:" << snake[0].heat << endl;
    cout << "name: " << snake[1].name << " weight: " << snake[1].weight << " heat:" << snake[1].heat << endl;
    cout << "name: " << snake[2].name << " weight: " << snake[2].weight << " heat:" << snake[2].heat << endl;

    cin.get();
    return 0;
}