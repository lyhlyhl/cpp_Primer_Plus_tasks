#include "iostream"

using namespace std;

const string months[12] = {"一月", "二月", "三月", "四月", "五月", "六月", "七月",
                           "八月", "九月", "十月", "十一月", "十二月"};
int main()
{
    int sellMoney[3][12];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cout << "请输入第" << i + 1 << "年" << months[j] << "销售额:";
            cin >> sellMoney[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int yearSum = 0;
        for (int j = 0; j < 12; j++)
        {
            cout << "第" << i + 1 << "年" << months[j] << "销售额是" << sellMoney[i][j] << endl;
            yearSum += sellMoney[i][j];
        }
        cout << "该年总销售额为" << yearSum << endl;
    }

    return 0;
}