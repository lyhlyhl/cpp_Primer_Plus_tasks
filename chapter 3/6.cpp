#include "iostream"

using namespace std;

int main()
{
    double distance, oil;
    cout << "Please enter the distance(KM):";
    cin >> distance;
    cout << "please enter the oil(L):";
    cin >> oil;
    cout << "every 100KM need " << oil / distance * 100 << "L";
    cin.get();
    cin.get();

    return 0;
}