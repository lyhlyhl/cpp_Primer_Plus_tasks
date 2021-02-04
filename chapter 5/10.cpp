#include "iostream"

using namespace std;

int main()
{
    int rows;
    cout << "Enter number of row: ";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < rows - i - 1; j++)
        {
            cout << '.';
        }
        for (size_t j = 0; j < i + 1; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}