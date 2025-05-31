#include <iostream>
#include <cmath>
using namespace std;


//multiplication function :
void multiplication(int a, int b){
    std::cout << "your result opration : " << a * b <<std::endl;
};


//division function :
void division(int a , int b){
    std::cout << "your result opration : " << a / b << std::endl;
};


//plural function :
void plural(int a , int b){
    std::cout << "your result opration : " << a + b << std::endl;
}
//subtraction funciton:
void subtraction(int a , int b){
    std::cout << "your result opration : " << a - b <<std::endl ;
}

//radical function :
void radical(int a){
    std::cout << "your result opration : " << sqrt(a) << std::endl;
}

//for power funciton :

void power(int a ,int b){
    std::cout << "your result opration : " << pow(a , b) << std::endl;
}






int main(){
    std::string opration ;
    //getting opration:
    std::cout << "Enter the opration you want : " << std::endl;
    cin >> opration;
    //for calling funcitons :
    std::cout << "now you can enter your the first number :" << std::endl ;
    int firstNumber;
    cin >> firstNumber;
    std::cout << "right now you can enter the second number :" << std::endl;
    int secondNumber ;
    cin >> secondNumber;
    if(opration == "*"){
        multiplication(firstNumber , secondNumber);
    }
    else if(opration == "+"){
        plural(firstNumber , secondNumber);
    }
    else if(opration == "/"){
        division(firstNumber  , secondNumber);
    }
    else if(opration == "**"){
        power(firstNumber , secondNumber);
    }
    else if(opration == "//"){
        radical(firstNumber);
    }
    else {
        std::cout << "error in opration" << std::endl;
        return -1;
    }
    return 0;
}