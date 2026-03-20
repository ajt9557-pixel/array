#include <iostream>

int main ()
{
    //std::string students[] = {" will ", " chito "," macmac "};
    int grade[] = {90 , 75 , 87 , 96 };


    for(int grades : grade )
    {
       std::cout << grades << '\n';
    }
    


  
    return 0;

}