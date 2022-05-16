#include <iostream> 
using namespace std; 

float avgVelocity(float distance, float time); 
float acceleration(float vFinal, float vInitial, float time); 
float finalVelocity(float acceleration, float vInitial, float time); 

int main(){
    float vf = 10.0; 
    float t = 2.0; 
    float vi = 0; 

    float avgV = avgVelocity(vf, t); 
    float accel = acceleration(vf, vi, t); 
    float finalV = finalVelocity(accel, vi, t);

    cout<<"Average Velocity: "<<avgV<<endl; 
    cout<<"Acceleration: "<<accel<<endl; 
    cout<<"Final Velocity: "<<finalV<<endl; 
    return 0; 
}

// Velocity = Distance/time 
float avgVelocity(float distance, float time){
    return distance/time; 
}

// Acceleration = (vFianle-vInitial)/time
float acceleration(float vFinal, float vInitial, float time){
    return (vFinal-vInitial)/time; 
}

float finalVelocity(float acceleration, float vInitial, float time){
    return vInitial+acceleration*time; 
}