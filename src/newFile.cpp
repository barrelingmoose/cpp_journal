#include <iostream>
#include "euler.h"

using namespace std; 

int main(){
   int ans = multiples3and5(); 
   cout<<"Sum of Multiples of 3 and 5: "<<ans<<endl; 

   int fib = fibonacci(); 
   cout<<"Fibonacci Sequence Even Sum: "<<fib<<endl; 

   long long int prime = primeFactors(600851475143);
   cout<<"Largest Prime Factor of Vale: "<<prime<<endl; 
}

