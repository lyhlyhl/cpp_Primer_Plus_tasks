#include "iostream"
#include "cmath"
using namespace std;

const int transform = 60;
int main()
{
    double degrees, minutes, seconds;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees:";
    cin >> degrees;
    cout << "Next, enter the minutes of arc:";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc:";
    cin >> seconds;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << degrees + minutes / transform + seconds / pow(transform, 2) << " degrees" << endl;
    cin.get();
    cin.get();
}