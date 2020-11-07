#include "iostream"

using namespace std;

const int transformDate = 12;
int main()
{
    int height_inch, height_foot;
    cout << "please enter your height:___\b\b\b";
    cin >> height_inch;
    cout << "The result of the conversion is " << height_inch * transformDate << endl;
    cin.get();
    cin.get();

    return 0;
}