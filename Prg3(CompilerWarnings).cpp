#include <iostream>
int main()
{   
    int favourite_number;
    int num;
    num=100;
    // here the compiler will give a warning that the variable num is not being used
    std::cout<<favourite_number<<std::endl;
    // compiler warning is syntactically not wrong as in this case we are trying to print the number which is
    // uninitialized
    return 0;
}