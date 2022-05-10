#include <iostream> 
#include <string>
#include <cstdio> 



using namespace std; 


// Adding a comment for funsies

// Global Variable
int a = 10;
// Showing String Creation 




// Function Prototype 
int second_fun(int x); 

// Main Function 
int main(){
    cout<<"Hello World\n"; 
    cout<<a<<endl; 
    for(int i = 0; i<10; i++){
    second_fun(i); 

    }
    return 0; 
}

// Second Function to show global variable usage 
int second_fun(int x){
    printf("String formatting %i\n", x); 
    return 0; 
}