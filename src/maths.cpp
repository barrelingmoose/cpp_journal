#include <iostream> 
using namespace std; 
/* In order to get compiler error for out of bounds array 
   Compile using the following command:
   g++ -Wall -Wextra -O2 maths.cpp -o maths*/

// Instantiate Array and the size
int sizedArray[10] = {};
 

int *multiplyArray(int *pArray, int size, int scale);

int main(){
    int i=0; 
    int j = 0; 
    cout<<"Index\tElement\n";
    while(i <10){
        sizedArray[i] = i+1; 
        cout<<i<<"\t"<<sizedArray[i]<<endl; 
        i++;
    }
    // cout<<sizeof(sizedArray[0])<<endl;
    int sizeOfArray = sizeof(sizedArray)/sizeof(sizedArray[0]);
    int scaleFactor = 2; 
    int *p; 
    p = multiplyArray(sizedArray, sizeOfArray, scaleFactor);
    cout<<"\nIndex\tScaled Element\n";
    while(j<sizeOfArray){
        cout<<j<<"\t"<<p[j]<<endl;
        j++;
    }
    return 0; 
}

// Theory: https://technoteshelp.com/c-warning-address-of-local-variable-angles-returned-wreturn-local-addr/
// Solution: https://www.tutorialspoint.com/cplusplus/cpp_return_arrays_from_functions.htm
int *multiplyArray(int *pArray,int size, int scale){
    static int scaledArray[10];
    for (int i =0 ; i<size; i++){
        scaledArray[i] = pArray[i]*scale;
    }
    return scaledArray; 
}