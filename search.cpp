#include <iostream>

int searcharray(std::string numbers [] , int size, std::string elements);

int main()
{
       std::string foods [] = {"pizza", "burgers", "mac and cheese"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myfoods;
    char choice;
    
do{
   

    std::cout << "enter element to find : \n";
    std::getline(std::cin, myfoods);

    index = searcharray(foods, size, myfoods);

    if (index != -1)
    {
        std::cout << myfoods << " is at the menu " << index ;
    }
    else{
        std::cout << myfoods << " is not in the menu ";
    }
    
    std::cout << " do you want to search again? y/n \n";
    std::cin >> choice ;
    std::cin.ignore();



   } while (choice == 'y' || choice == 'Y');


    return 0;
}
int searcharray(std::string foods [] , int size, std::string elements){

    for (int i = 0; i < size; i++)
    {
      if (foods[i] == elements)
      {
     return i;
      }
      
    }
    return -1;
    
}