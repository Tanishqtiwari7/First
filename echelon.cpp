#include <iostream>
using namespace std;

int main()
{
    std::cout << "\n\n\n\t*********************************************************************************\n\n\n";
    std::cout << "Only for positive,non zero element\n";
    std::cout << "\n\nPlease enter the value after subtracting a,e,i with 'lemda'\n\n";

    double a, b, c, d, e, f, g, h, i;
    double matrix[3][3] = {{a, b, c},
                           {d, e, f},
                           {g, h, i}};

    cout << "The value of a :-";
    cin >> a;

    cout << "The value of b :-";
    cin >> b;

    cout << "The value of c :-";
    cin >> c;

    cout << "The value of d :-";
    cin >> d;

    cout << "The value of e :-";
    cin >> e;

    cout << "The value of f :-";
    cin >> f;

    cout << "The value of g :-";
    cin >> g;

    cout << "The value of h :-";
    cin >> h;

    cout << "The value of i :-";
    cin >> i;

    matrix[0][0] = a;
    matrix[0][1] = b;
    matrix[0][2] = c;
    matrix[1][0] = d;
    matrix[1][1] = e;
    matrix[1][2] = f;
    matrix[2][0] = g;
    matrix[2][1] = h;
    matrix[2][2] = i;

    cout << "\n\nYour matrix is :-\n\n\n";

    for (int t = 0; t < 3; t++)
    {
        for (int q = 0; q < 3; q++)
        {
            cout << '\t';

            cout << " |" << '\t' << matrix[t][q];
            if (q == 2)
            {
                cout << "\t|";
            }
        }
        cout << '\n';
    }
    cout << "\n\n";

    matrix[0][0] = a / a;
    matrix[0][1] = b / a;
    matrix[0][2] = c / a;

    matrix[1][0] = (d * matrix[0][0]) - d;
    matrix[1][1] = (d * matrix[0][1]) - e;
    matrix[1][2] = (d * matrix[0][2]) - f;
    matrix[2][0] = (g * matrix[0][0]) - g;
    matrix[2][1] = (g * matrix[0][1]) - h;
    matrix[2][2] = (g * matrix[0][2]) - i;

    matrix[1][1] = e / e;
    matrix[1][2] = f / e;

    matrix[2][1] = (h * matrix[1][1]) - h;
    matrix[2][2] = (h * matrix[1][2]) - i;

    matrix[2][2] = i / i;

    for (int t = 0; t < 3; t++)
    {
        for (int q = 0; q < 3; q++)
        {
            cout << '\t';

            cout << " |" << '\t' << matrix[t][q];
            if (q == 2)
            {
                cout << "\t|";
            }
        }
        cout << '\n';
    }
    cout << "\n\n";
}
