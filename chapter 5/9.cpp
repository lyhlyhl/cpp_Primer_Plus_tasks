#include "iostream"
#include "cstring"
#include "string"
using namespace std;

int main()
{
    string inputStr;
    char *token;
    int j = 0;
    cout << "Enter words (to stop, type the word done)" << endl;
    getline(cin, inputStr);
    int position = inputStr.find("done");
    if (position != inputStr.npos)
    {
        printf("position is : %d\n", position);
    }
    string spStr = inputStr.substr(0, position);
    for (int i = 0; i < spStr.size(); i++)
    {
        if (spStr[i] == ' ')
        {
            j++;
        }
    }
    cout << "You entered a total of " << j << " words" << endl;
    return 0;
}