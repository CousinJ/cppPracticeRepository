#include <iostream>
//practing STRUCTS, REFERENCES, POINTERS, DEREFERENCING, FUNCTIONS 




int simpleMultiplication(int x, int y) {
    return x * y;
}

// default value, making a reference and pointer and no return value..
void opFunction() {
    //var declare
    std::string secret = "kkvoanrkmccihtq]jbu";
    
    // referencing secret from var code. this makes a variable the value of another variable.
    std::string &code = secret; 
    std::cout << code << "\n";
    //  cout reference..
    std::cout << &secret << "\n";
    //creating pointer variable...
    std::string* pntr = &secret;
    //cout the pointer by using the dereference operator now
    std::cout << *pntr << "\n";

}
int main() {
    //note that it is the same as js here. cout returnable functions to get values back.
    //also you can set the result of a function to variable. useful.
    int product = simpleMultiplication(5, 5);
    opFunction();
   

// structure example.
    struct {             // Structure declaration
  int myNum;         // Member (int variable)
  std::string myString;   // Member (string variable)
} myStructure1;       // Structure variable

myStructure1.myNum = product;
myStructure1.myString = "this is the way";

//cout the structure you made.
std::cout << "struct num = " << myStructure1.myNum << " struct string = " << myStructure1.myString;


    return 0;
}

