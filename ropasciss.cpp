#include <iostream>
#include <ctime>

char userin ();


int main()
{
    // =
    userin();
}


char userin()
{
    char input;
    std::cout<<"\t\tROCK PAPER SCISSORS\n";
    std::cout<<"\t\t*******GAME********\n\n";

    std::cout<<"choose any of the actions:\n";
    std::cout<<"1. 'r' for rock\n";
    std::cout<<"2. 'r' for paper\n";
    std::cout<<"3. 'r' for scissors\n";
    std::cin>> input;
    std::cout<<input;
    
}

