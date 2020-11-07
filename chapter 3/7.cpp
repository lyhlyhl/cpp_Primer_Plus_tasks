#include "iostream"

using namespace std;

const double kmTomeil = 0.6214;
const double jialunToL = 3.875;
int main()
{
    double inputdata;
    cout << "Please enter the data:";
    cin >> inputdata;
    cout << "transform data is " << 1 / (inputdata / 100 * kmTomeil / jialunToL) << endl;
    cin.get();
    cin.get();
}