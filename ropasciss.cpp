#include <iostream>
#include <ctime>

char userin()
{
    char input;
    std::cout<<"\t\tROCK PAPER SCISSORS\n";
    std::cout<<"\t\t*******GAME********\n\n";
// do{
    std::cout<<"choose any of the actions:\n";
    std::cout<<"1. 'r' for rock\n";
    std::cout<<"2. 'p' for paper\n";
    std::cout<<"3. 's' for scissors\n";
    std::cin>> input;
     return input;
// } while (input == r) &&);
    
}

char comp()
{

    char com;
    int compu;
    compu = (rand()%3)+1;

    switch (com)
    {
    case 1: com == 'r';
        
        break;

        case 2 : com == 'p';
        break;
        case 3: com =='s';
        break;
    
   
    }
    return com;

}


int main()
{
    // =

    char x,y;
    x=userin();
    y=comp();

    if (x==y)
    {
       std::cout<<"you win!\n";

    }
    else 
    {
        std::cout<<"you loose!\n";
    }
    


}



