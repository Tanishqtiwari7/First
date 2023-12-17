#include <iostream>
#include "maths.cpp"
#include "games.cpp"
#import Username.username;
// #include "userin.cpp"

class Main
{
    public:


int main()

{
int x;

void Username::main()
{

    Username obj;
    obj.username;
}
    

    std::cout << "**********************Hey "<< username<<"**********************\n\n";

    std::cout << "**********welcome to the legendary program**********\n";

    do
    {
        std::cout << "Choose one from the following :- \n\n";

        std::cout << "1. Maths Program:-\n";
        std::cout << "2. Games:-\n";

        std::cin >> x;

        if ((x == 1) || (x == 2))
        {

            if (x == 1)
            {

                mat obj;
                obj.mats();
            }

            else if (x == 2)
            {
                Games obj;
                obj.games();
            }
        }

        else
        {

            std::cout << "Enter the correct no:-\n\n";
        }
    } while ((x != 1) && (x != 2));
}
};