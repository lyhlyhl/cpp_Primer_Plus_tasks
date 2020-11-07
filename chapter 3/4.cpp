#include "iostream"

using namespace std;

const int dayToyear = 365;
const int hourToday = 24;
const int minuteTohour = 60;
const int secondTominute = 60;

int main()
{
    long inputseconds;
    cout << "Enter the number of seconds:";
    cin >> inputseconds;
    int seconds = inputseconds % secondTominute;
    int allminutes = inputseconds / secondTominute;
    int minutes = allminutes % minuteTohour;
    int allhours = allminutes / minuteTohour;
    int hours = allhours % hourToday;
    int allday = allhours / hourToday;
    int days = allday % dayToyear;
    int years = allday / dayToyear;

    cout << "seconds = " << allday << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    cin.get();
    cin.get();

    return 0;
}