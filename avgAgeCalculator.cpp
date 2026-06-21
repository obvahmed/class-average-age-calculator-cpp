#include <iostream>
int main(){

    // declaring variables
    double age[1000], grade = 0, number = 0, totalAge = 0, avgAge = 0;

    // asking user for input
    std::cout<<"Please Enter The Grade-Level: ";
    std::cin>>grade;

    std::cout<<"Please Enter The Number of Students: ";
    std::cin>>number;


    // asking user for input using for-loop
    for(int i = 0; i < number; i++){

        // asking user for age input 
        std::cout<<"Please Enter Age "<<i + 1<<": ";
        std::cin>>age[i];
    }

    // running calculations using for-loop
    for(int i = 0; i < number; i++){

        // adding up all the ages
        totalAge += age[i];
    }

    // calculating average
    avgAge = totalAge / number; 
    

    // displaying results
    std::cout<<"The Average Age of The Grade "<<grade<<" is: "<<avgAge;

    return 0;
}