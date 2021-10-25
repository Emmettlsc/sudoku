#include <iostream>

using namespace std;
void setup(int (*p)[9]);

int main()
{
    int(*p)[9];
    setup(p);
    for (int i = 0; i < 9; i++)
    {
        for (int ii = 0; ii < 9; ii++)
        {
            (ii + 1) % 3 == 0 && ii != 8 ? cout << p[i][ii] << "|"
                                         : cout << p[i][ii];
        }
        cout << endl;
        if (i % 3 == 0)
        {
            for (int k = 0; k < 9; k++)
            {
                cout << "_";
            }
            cout << endl;
        }
    }
}

void setup(int (*p)[9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int ii = 0; ii < 9; ii++)
        {
            cin >> p[i][ii];
        }
    }
}

//bool checkCol(int *num)
//{
//}