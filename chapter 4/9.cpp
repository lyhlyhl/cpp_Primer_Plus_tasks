#include "iostream"

using namespace std;

struct CandyBar
{
    string name;
    double weight;
    int heat;
};
int main()
{
    CandyBar *snake = new CandyBar[3];
    for (int i = 0; i < 3; i++)
    {
        snake[i].name = "hello";
        snake[i].weight = 5.2;
        snake[i].heat = 10;
    }
    cout << "name: " << snake[0].name << " weight: " << snake[0].weight << " heat:" << snake[0].heat << endl;
    cout << "name: " << snake[1].name << " weight: " << snake[1].weight << " heat:" << snake[1].heat << endl;
    cout << "name: " << snake[2].name << " weight: " << snake[2].weight << " heat:" << snake[2].heat << endl;

    cin.get();
    return 0;
}