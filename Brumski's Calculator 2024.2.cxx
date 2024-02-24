#include <iostream>
#include <cmath>
#include <stdexcept>
#include <chrono>
#include <thread>
#include <iomanip>
#include <limits>

template <typename T>
  T getInput(const std::string& prompt){
      T value;
      while(!(std::cout<<prompt && std::cin>>value)){
          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
          std::cerr<<"Invalid input. Try again."<<std::endl;
      }
      return value;
  }
  
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
         double num1 = getInput<int>("Enter the base of the logarithm: ");
         double num2 = getInput<int>("Enter the log: ");  
         //Calculations.      
         double loga  = std::log(num1)/std::log(num2);
         //Print the calculation with a precision of 4.
         std::cout<<std::setprecision(4)<<"The log of "<<num1<<" is "<<loga<<std::endl;
}

void AdSb(){
         //Message.
         std::cout<<"Addition, Subtraction, Divsion, Multiplication and Exponents."<<std::endl;         
         //Declaring of variable, message and taking input.
         double num1 = getInput<double>("Enter 1st number: ");  
         //Declaring of variable, message and taking input.                          
         char oper = getInput<char>("Enter operator(+,-,/,*,^): ");         
          //Declaring of variable, message and taking input.
         double num2 = getInput<double>("Enter 2nd number: ");         
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
         //Message.
         std::cout<<"Guessing game."<<std::endl;
         //Taking input.
         int user = getInput<int>("Enter a number(1-20): ");
         //While loop.
         while(user != lucky){
             tries--;
             if(tries == 0){
                 std::cout<<"You lose!"<<std::endl;
                 break;
             }
           user = getInput<int>("Enter a number(1-20): ");
         }
         //Message.
         if(user == lucky){
         std::cout<<"You guessed the right number.\nYou win!"<<std::endl;   
         }            
}

int main(){
	 
	 while(true){
	 std::cout<<"\nA math related game.\nChoose any option from 1-5: time-1, logarithm-2, Add/Sub/etc-3, guessing_game-4, end_program-5.\n";
	   int op = getInput<int>("Enter their respective numbers to choose them: ");
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
