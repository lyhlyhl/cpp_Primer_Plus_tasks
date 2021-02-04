#include "iostream"
#include "cstring"

using namespace std;

int main()
{
    char inpustr[100];
    char *token;
    int i = 0;
    cout << "Enter words (to stop, type the word done)" << endl;
    cin.getline(inpustr, 100);
    token = strtok(inpustr, " ");
    if (strcmp(token, "done") == 0)
    {
        cout << "You entered a total of " << i << " words" << endl;
        return 0;
    }
    i++;
    while (token != NULL)
    {
        token = strtok(NULL, " ");
        if (strcmp(token, "done") == 0)
        {
            break;
        }
        i++;
    }
    cout << "You entered a total of " << i << " words" << endl;
    return 0;
}