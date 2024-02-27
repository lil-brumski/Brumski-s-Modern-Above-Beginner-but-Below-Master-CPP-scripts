#include <iostream>
#include <limits>

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
  
  
  template <>
    std::string getInput<std::string>(const std::string& prompt){
        std::string value;
        std::cout<<prompt;
        std::cin.ignore();
        std::getline(std::cin,value);
        return value;
    }
    

class Student{
    public:
    std::string name;
    int age;
    bool gender;
    std::string likes;
            void about(){
              if(gender){
                   std::cout<<"\nYour name is "<<name<<".\nYou are "<<age<<" years old.\nYou are a male.\nYour interest(s): "<<likes<<std::endl;
                 }
             else{
                      std::cout<<"\nYour name is "<<name<<".\nYou are "<<age<<" years old.\nYou are a female.\nYour interest(s): "<<std::endl;
                  }
           }
};


int main(){
    Student details;
    details.name = getInput<std::string>("Enter your name: ");
    details.age = getInput<int>("Enter your age: ");
    details.gender = getInput<bool>("Enter your gender(1 for male and 0 for female): ");
    details.likes = getInput<std::string>("Enter your interest(s): ");
    details.about();
}
