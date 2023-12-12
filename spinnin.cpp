#include <iostream>
#include <ctime>

int main()
{
  srand(time(NULL));

  int p;
  double z;
  int t;
  int k = 1;
  char a = 'y';
  char g = 'Y';

  do
  {

    std::cout << "\t\t\t***********************************************\n";
    std::cout << "\t\t\t********************welcome********************\n";
    std::cout << "\t\t\t******************To the game******************\n";
    std::cout << "\t\t\t***********************************************\n\n\n";

    std::cout << "For adding your crazy dares enter : 1\n";
    std::cout << "For having default numbers enter : 2\n";
    std::cout << ":>-";
    std::cin >> z;

    // for(t=0;(t<k)&&((t==q)||(t>l));t++)
    for (t = 0; t < k; t++)
    {
      if (z == 1 || z == 2)
      {
        if (z == 1)
        {
          std::cout << "How many sections you want on the the wheel of the hell:-";
          std::cin >> p;

          int x = (rand() % p) + 1;

          std::cout << "Fill your crazy dares\n";
          std::string dares[p];
          int i = 1;
          int j = 0;
          while (j != p)
          {
            std::cout << "Enter the dare no." << i << ":-";
            std::cin >> dares[j];
            j++;
            i++;
          }
          std::cout << "\nThe dare you got :-" << dares[x] << '\n';
        }
        else
        {
          std::cout << "How many sections you want on the the wheel of the hell:-";
          std::cin >> p;
          int x = (rand() % p) + 1;
          std::cout << "Your no. is :-" << x << '\n';
        }
      }
      else
      {

        std::cout << "Enter the correct no.:-";
        std::cin >> z;
        k++;
      }
    }
    std::cout << "\n\nwant to play this game ? (Y/N)\n";
    std::cin >> a;

    std::cout << "\n\n\n\t*********************************************************************************\n\n\n";

  } while ((a = 'y') || (g = 'Y'));
}
