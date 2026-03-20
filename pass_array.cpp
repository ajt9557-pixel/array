#include <iostream>

double gettotal(double prices[], int size);

int main()
{

    double prices[] = {56.00, 70.80 , 87.00 };
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = gettotal(prices, size);

    std::cout << "P" << total;



    return 0;

}
double gettotal(double prices[], int size ){
    double total = 0;

    for ( int i = 0; i < size; i++)
    {
        total += prices[0];

    }
    


    return total;

}