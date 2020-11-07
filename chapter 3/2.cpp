#include "iostream"
#include "cmath"
using namespace std;
const int inchTofoot = 12;
const double inchTometric = 0.0254;
const double poundToKG = 2.2;

int main()
{
    int inch, foot, pound;
    cout << "please enter your height in inch and foot" << endl;
    cout << "first enter the inch:";
    cin >> inch;
    cout << "second enter the foot:";
    cin >> foot;
    cout << "finally enter your weight:";
    cin >> pound;
    cout << "Your BMI is " << pound * poundToKG / pow(((foot * inchTofoot + inch) * inchTometric), 2) << endl;
    cin.get();
    cin.get();
    return 0;
}