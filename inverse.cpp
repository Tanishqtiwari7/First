#include <iostream>
using namespace std;

int main()
{
std::cout << "\n\n\n\t*********************************************************************************\n\n\n";

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

    
        double a1, b1, c1, d1, e1, f1, g1, h1, i1;

        a1 = (e * i) - (h * f);
        b1 = -((d * i) - (g * f));
        c1 = (d * h) - (g * e);
        d1 = -((b * i) - (h * c));
        e1 = (a * i) - (g * c);
        f1 = -((a * h) - (b * g));
        g1 = (b * f) - (e * c);
        h1 = -((a * f) - (d * c));
        i1 = (a * e) - (d * b);

        double determinant;
        determinant = (a * a1) + (b * b1) + (c * c1);

        cout << "The inverse of given matrix is :-\n\n";

        double inverse [3][3] = {{a1, d1, g1},
                                 {b1, e1, h1},
                                 {c1, f1, i1}};

        matrix[0][0] = a1;
        matrix[0][1] = d1;
        matrix[0][2] = g1;
        matrix[1][0] = b1;
        matrix[1][1] = e1;
        matrix[1][2] = h1;
        matrix[2][0] = c1;
        matrix[2][1] = f1;
        matrix[2][2] = i1;

        for (int t = 0; t < 3; t++)
        {
            if (t == 1)
            {
                cout << "1/" << determinant;
            }
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
    std::cout << "\n\n\n\t*********************************************************************************\n\n\n";
}
       
       