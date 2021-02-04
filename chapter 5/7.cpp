#include "iostream"
#include "string"
using namespace std;

struct car
{
    string carName;
    int carYear;
};

int main()
{
    car *NewCars = new car[5];
    int carNum;
    cout << "how many cars do you wish to catalog? ";
    cin >> carNum;

    for (int i = 0; i < carNum; i++)
    {
        cin.get();
        cout << "Car #" << i + 1 << endl;
        cout << "Please enter the make: ";
        getline(cin, (NewCars[i].carName));
        cout << "Please enter the year made: ";
        cin >> NewCars[i].carYear;
    }
    cout << "Here is your collection:" << endl;
    for (int i = 0; i < carNum; i++)
    {
        cout << NewCars[i].carYear << " " << NewCars[i].carName << endl;
    }

    return 0;
}