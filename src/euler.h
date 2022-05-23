#include <iostream>
#include<math.h>
using namespace std; 
/*************************************************************
Function Protoypes
 *************************************************************/
int multiples3and5(); 
int fibonacci(); 
long long int primeFactors(long long int x); 
int palindrome(int p1, int p2); 
/*************************************************************
 Project Euler Answers 
 *************************************************************/
// Archive ID #1 
int multiples3and5(){
    int sum = 0; 
    int i = 0; 
    while(i<1000){
        if (i%3==0){
            sum += i; 
            i++;
        }
        else if (i%5==0){
            sum+=i;
            i++;
        }
        else{
            i++;
        }
    }
    return sum; 
}

// Archive ID #2 
int fibonacci(){
    int sum = 0; 
    int n1 = 1; 
    int n2 = 1;
    int evenSum = 0; 
    while (sum < 4000000){
        if(sum%2==0){
            evenSum+=sum; 
        }
        sum = n1+n2; 
        n2 = n1; 
        n1 = sum; 
    }
    return evenSum; 
}

// Archive ID #3 
// Brute Force Method 
// Test Git 2
long long int primeFactors(long long int x){
    long long int i = 2; 
    long int test = 0; 
 
    long int prime = 0; 
    while(i*i<x){
        if (x%i==0){
            test = i;
            long long int j = 2; 
            while(j<test){
                if(test%j==0){ 
                    break; 
                }
                else if(j==(test-1)){
                    prime = test; 
                }
                j++; 
            }
        }
        i++;
    }
    return prime; 
}

// Archive ID #4 - Still has major bug 
int returnPalindrome(int p1, int p2){
    int palindrome_n = 0; 
    for(int i = p2; i>=p1;i--){
        for (int j = p2; j>=p1; j--){
            int rem = 0; 
            int numReversed = 0; 
            int product = i*j; 
            int step = product;
            while ( step!=0){
                rem = step%10; 
                numReversed = numReversed*10 + rem; 
                step/=10; 
            }
            if (numReversed==product){
                palindrome_n = numReversed;
                break; 
            }
        }
    }
    return palindrome_n; 
}