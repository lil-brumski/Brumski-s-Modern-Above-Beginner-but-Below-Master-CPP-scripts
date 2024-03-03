#include <iostream>
#include <limits>
#include <string>

//This template allows users to reinput a variable value after entering the wrong data type.
template <typename T>
  T getInput(const std::string& prompt){
      T value;
          while(!(std::cout<<prompt && std::cin>>value)){
              std::cin.clear();
              std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
              std::cerr<<"Invalid input!"<<std::endl;          
          }
          return value;
  }
  
 //This template allows the user to enter strings on the same line but included with spaces. The whole line is one string variable value.
  template <>
    std::string getInput<std::string>(const std::string& prompt){
        std::string value;
        std::cout<<prompt;
        std::cin.ignore();
        std::getline(std::cin,value);
        return value;
    }
    
 //Class name called "Student". A class is a blueprint for creating objects.
class Student{
    public:
    std::string name;
    int age;
    bool gender;
    std::string likes;

            void about(){
              if(gender){
                   //If the gender is 1(male), then this code will run.
                   std::cout<<"\nYour name is "<<name<<".\nYou are "<<age<<" years old.\nYou are a male.\nYour interest(s): "<<likes<<std::endl;
                 }
             else{
                      //If the gender is 0(female), then this one will run.
                      std::cout<<"\nYour name is "<<name<<".\nYou are "<<age<<" years old.\nYou are a female.\nYour interest(s): "<<std::endl;
                  }
           }
};


int main(){
    
    //The class "Student" with its object "details".
    Student details;

    //The variables of "Students" belong to "details" now.
    details.name = getInput<std::string>("Enter your name: ");

    details.age = getInput<int>("Enter your age: ");

    details.gender = getInput<bool>("Enter your gender(1 for male and 0 for female): ");

    details.likes = getInput<std::string>("Enter your interest(s): ");
    
    //This calls the "about();" function in the "Student" class.
    details.about();
}
