#include <iostream>
#include <cmath>
#include <stdexcept>
#include <chrono>
#include <thread>
#include <iomanip>

void TiMe(){
	       //Message.
	       std::cout<<"Time dilation."<<std::endl;
	       //Time interval.
	       int sec = 5;
	       //Wait message.
	       std::cout<<"Wait..."<<std::endl;
	       //Converting seconds to milliseconds.
	       std::chrono::milliseconds duration(1000*sec);
	       //Code that makes the program wait.
	       std::this_thread::sleep_for(duration);
	       std::cout<<"Done waiting!"<<std::endl;
}

void lOgA(){
         //Message.
         std::cout<<"Logarithm."<<std::endl;
         //Declaring the log and base.
         double num1, num2;
         //Message.
         std::cout<<"Enter the base of the logarithm: ";
         //Taking input.
         std::cin>>num1;
         //Message.
         std::cout<<"Enter the log: ";
         //Taking input.
         std::cin>>num2;   
         //Calculations.      
         double loga  = std::log(num1)/std::log(num2);
         //Print the calculation with a precision of 4.
         std::cout<<std::setprecision(4)<<"The log of "<<num1<<" is "<<loga<<std::endl;
}

void AdSb(){
         //Message.
         std::cout<<"Addition, Subtraction, Divsion, Multiplication and Exponents."<<std::endl;
         //Declaring the two numbers.
         double num1, num2;
         //Declaring the operator.
         char oper;
         //Message.
         std::cout<<"Enter 1st number: ";
         //Taking input.
         std::cin>>num1;
         //Message.
         std::cout<<"Enter operator(+,-,/,*,^): ";
         //Taking input.
         std::cin>>oper;
         //Message
         std::cout<<"Enter 2nd number: ";
         //Taking input.
         std::cin>>num2;
         //Switch statement.
         switch(oper){
            //Plus
           case '+':
            std::cout<<num1<<" + "<<num2<<" = "<<num1+num2;
            break;
           //Minus
           case '-':
            std::cout<<num1<<" - "<<num2<<" = "<<num1-num2;
            break;
           //Multiplication
           case '*':
            std::cout<<num1<<" × "<<num2<<" = "<<num1*num2;
            break;
           //Divsion
           case '/':
            try{
                if(num2 == 0){
                    throw
                    std::runtime_error("Can't divide by zero");
                }
                std::cout<<num1<<" / "<<num2<<" = "<<num1/num2;
            }
             catch(const std::exception& err){
                 std::cerr<<"Error: "<<err.what()<<std::endl;
             }
             break;
            //Offpoint
            case '^':
             std::cout<<num1<<" ^ "<<num2<<" = "<<std::pow(num1,num2)<<std::endl;
             break;
            default:
              std::cout<<"Invalid operator!"<<std::endl;
           }
}

void GuEsS(){
         //Lucky number that user has to guess.
         int lucky = 14;
         //Number of tries the user has.
         int tries = 5;
         //Declaring of "user" variable.
         int user;
         //Message.
         std::cout<<"Guessing game.\nEnter a number(1-20): ";
         //Taking input.
         std::cin>>user;
         //While loop.
         while(user != lucky){
             tries--;
             if(tries == 0){
                 std::cout<<"You lose!"<<std::endl;
                 break;
             }
            std::cout<<"Enter a number: ";
            std::cin>>user;
         }
         //Message.
         if(user == lucky){
         std::cout<<"You guessed the right number.\nYou win!"<<std::endl;   
         }            
}

int main(){
	 
	 while(true){
	 std::cout<<"\nA math related game.\nChoose any option from 1-5: time-1, logarithm-2, Add/Sub/etc-3, guessing_game-4, end_program-5.\nEnter their respective numbers to choose them: ";
	   int op;
	   std::cin>>op;
	   switch(op){
	       case 1:
	         TiMe();
	         break;
	       case 2:
	         lOgA();
	         break;
	       case 3:
	         AdSb();
	         break;
	       case 4:
	         GuEsS();
	         break;
	       case 5:
	        std::cout<<"Goodbye, see you later!"<<std::endl;
	        return 0;
	       default:
	         std::cout<<"Invalid number"<<std::endl;
	      }
	 
	}  

}	