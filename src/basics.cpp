// Look at all those imports 
#include <iostream> 
#include <string>
#include <cstdio> 

using namespace std; 

// To Compile put following commands in terminal:
// g++ file_name.cpp -o executable_name
// ./executable_name

// Adding a comment for funsies

// Global Variable
int a = 10;
// Showing String Creation 

string statement = "String formatting ";

// Function Prototype 
int second_fun(int x); 
void pointingFingers(int *x); 
// Main Function 
int main(){
    // Example of a local variable 
    int userInput = 1; 
    // Declare Pointer Variable 
    int *pUserInput; 
    // Define address held in variable 
    pUserInput = &userInput;

    
    // Simple terminal output statement 
    cout<<"Hello World\n"; 
    // Creating a user prompt 
    cout<<"Enter how many times you would like the loop to run: ";
    // Asking for user input 
    cin >> userInput; 
    // Example of a loop using User Input 
    for(int i = 0; i<userInput; i++){
        // Using second function to show function usage 
        second_fun(i); 

    }
    pointingFingers(pUserInput); 
    // Comparing Values from pointingFigners
    cout<<userInput<<endl; 
    // Ensuring address of &userInput == pUserInput (address of userInput is equal to the stored value in pUserInput)
    cout<<&userInput<<endl; 
    // Exit statement from the funtion 
    return 0; 
}

// Second Function to show global variable usage 
int second_fun(int x){
    cout<<statement<<x<<endl; 
    return 0; 
}

void pointingFingers(int *x){
    // Prints address of the pinter x 
    cout<<&x<<endl; 
    // Prints the address held within the x pointer variable 
    cout<<x<<endl; 
    // Unpacks the address the pointer variable stores 
    cout<<*x<<endl; 
}