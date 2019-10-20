#include <iostream>
using namespace std ;
int main()
{   
    int num1;
    int num2;
    double num3;
    cout<<"Enter a number : ";
    cin>>num1;
   /*  It will take the input from keyword and store it in buffer then from buffer the characters are read and it will 
only read those characters which makes sense like here num1 is integer therefore it will only accept integer,so 
finally the number is stored in num1 , the use of buffer is there to make the program more efficient. 
 All the whitespace while taking the input is ignored.*/  
    cout<<"Your number is  "<<num1<<endl;
    // Chaining extraction operator
    cout<<"Enter two integer separated by space ";
    cin>>num1>>num2;
    cout <<"num 1 is  "<<num1<<" & num 2 is "<<num2<<endl;
    
    cout<<"Enter a real number  ";
    cin>>num3;
    cout <<"Your number is "<<num3<<"\n";
    
    // The extraction operator doesn't wait if it already has a data in buffer
    cout<<"*************************************"<<endl;
    
    cout<<"Enter an integer  ";
    cin>>num1;
    cout<<"Enter  a  double ";
    cin>>num3;
    cout<<"integer is  "<<num1<<" & double is "<<num3<<endl;
    
//Here if we enter a double in place of num1 which stores integer 
//      eg 45.6 so here the number will be taken from keyboard and stored in buffer then from buffer the digits 
//      will be read one by one so it will store till 45 in num1 and it will stop after that because there will be decimal point
//     after that then double will ask for a number but already 
// if we dont enter a number and instead take a string or something else then it  will give unreliable value.
  
    return 0;
}
