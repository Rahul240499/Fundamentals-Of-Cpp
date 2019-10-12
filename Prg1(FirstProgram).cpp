#include <iostream>
// iostream is there because all the input output library is defined there
int main()
{   
    int favourite_number;
    std::cout<<"Enter your favourite number between 1 and 100: "; //insertion operator <<,extraction opr >>,std is namespace
    std::cin>>favourite_number; 
    std::cout<<"Amazing!! That's my favourite number too!"<<std::endl;
    //endl will flush out the buffer and move to the next line
    // All C++ file should have a main function and exactly one main function

    return 0;
}
// Building means compiling +linking to create the exe file which can be used to run
//After compilation the .cpp file will be converted into an .obj file so the clean command will remove all the object files
// ,exe files and the  keep only the source code
// Rebuild => Clean + Build
// The ide generally hide the .exe and .obj files
// The debug version has all the debug info but the release version removes all the info  and optimizes it
// There are around 90 keywords in C++

// Here include,main,std,cout,cin,endl are identifiers which are named by programmer to have some meaning
// Operators in C++ => +,-... << (stream insertion operator -> to insert whatever there is on right hand side of a 
// screen to the stream in this case it's stream insertion operator
// >>(stream extraction operator , it takes something from console and stores it into variable)
//:: scope resolution operator
// "", ; ,{} Punctuation
// These things are known as syntax of the program

// C++ Preprocessor Directive
// C++ Preprocessor is a program that process your source code before the compiler sees it
// The preprocessor strips all the comments from source file and replaces each comment with single space 
//then it looks for preprocessor directives and executes them like "include" .
// Preprocessor will know that include is a preprocessor directive because it has a # symbol
// Then the preprocessor will replace #include with a file it's referring to
//  Then it recursively process that file too
// It's  also used for conditional compilation (eg. to compile only those parts which are availaible for a particular OS.
// The C++ preprocessor does not understand C++ it just readies the source code ready for the compiler
// Compiler understands C++
