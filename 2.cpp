#include "iostream"
#include "array"
using namespace std;

const int Arsize = 100;

int main()
{
    array<long double, Arsize> factorials;
    factorials.at(0) = 1;
    factorials.at(1) = 1;
    for (int i = 2; i < Arsize; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }
    for (int i = 0; i < Arsize; i++)
    {
        cout << i << "! = " << factorials[i] << endl;
    }

    return 0;
}