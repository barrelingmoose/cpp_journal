#include <iostream> 
#include <string>
#include <cstdio> 



using namespace std; 


// Adding a comment for funsies

// Global Variable
int a = 10;
// Showing String Creation 

string statement = "String formatting ";


// Function Prototype 
int second_fun(int x); 

// Main Function 
int main(){
    int userInput = 1; 
    cout<<"Hello World\n"; 
    cout<<"Enter how many times you would like the loop to run: ";
    cin >> userInput; 
    for(int i = 0; i<userInput; i++){
    second_fun(i); 

    }
    return 0; 
}

// Second Function to show global variable usage 
int second_fun(int x){
    cout<<statement<<x<<endl; 
    return 0; 
}