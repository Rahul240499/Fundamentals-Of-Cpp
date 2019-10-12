#include <iostream>

extern int x;
// here the x is defined by someone else so the linker is not able to find x
int main()
{
    std::cout<<"Hello testing.."<<std::endl;
    std::cout<<x;
    return 0;
}
// Linker Errors
//=> The linker is having trouble linking all the files together to create an executable
// => Usually there is a library or object file missing 
//=> You will get a clean compile but when you run it you will get a linker error