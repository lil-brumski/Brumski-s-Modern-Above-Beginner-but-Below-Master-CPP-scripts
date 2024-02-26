#include <iostream>
#include <limits>
#include <string>

template <typename T>
  T getInput(const std::string& prompt){
      T value;
      while(!(std::cout<<prompt && std::cin>>value)){
          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
          std::cerr<<"Try again."<<std::endl;
      }
      return value;
  }

template <>
std::string getInput<std::string>(const std::string& prompt){
    std::string value;
    std::cout<<prompt;
    std::getline(std::cin,value);
    return value;
}
     
  class Boy{
  public:
      std::string name;
      int age;
      bool e18_or_above;
      
      void about(){
              if(e18_or_above){
                  std::cout<<"Name: "<<name<<".\nAge: "<<age<<".\nStudent: Yes."<<std::endl;
              }
              else{
                  std::cout<<"Name: "<<name<<".\nAge: "<<age<<".\nStudent: No."<<std::endl;
              }
      }
      
  };
  
  int main(){
      Boy boy2;
      boy2.name = getInput<std::string>("You are: ");
      boy2.age = getInput<int>("Your age: ");
      boy2.e18_or_above = getInput<bool>("Are you a student? 1 for yes, 0 for no: ");
      
      boy2.about();
  }
