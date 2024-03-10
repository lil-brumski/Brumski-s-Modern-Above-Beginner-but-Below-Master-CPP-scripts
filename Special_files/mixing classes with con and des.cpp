#include <iostream>


template <typename T>
  T getInput(const std::string& prompt){
      T value;
      while(!(std::cout<<prompt && std::cin>>value)){
          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
          std::cerr<<"Invalid input. Enter the value that you are required to enter 😡💢"<<std::endl;
      }
      return value;
  }


class Human{
public:
    int age;
    int mass;
    }; 


class Male: public Human{
public:
    Male(){
        std::cout<<"Gender: Male\n";
        age = getInput<int>("Your age: ");
        std::cout<<"Your age is: "<<age<<"\n";
                if(age < 18 && age >= 0){
                   std::cout<<"You're still a child.\n";
                   }
                else if(age >= 18){
                   std::cout<<"You're an adult.\n";
                   }
        }
    ~Male(){
            std::cout<<"Lol\n";
             }
};  

    
class Female: public Human{
public:
    Female(){
        std::cout<<"Gender: Female\n";
        age = getInput<int>("Your age: ");
        std::cout<<"Your age is: "<<age<<"\n";
        if(age < 18 && age >= 0){
                   std::cout<<"You're still a child.\n";
                   }
                else if(age >= 18){
                   std::cout<<"You're an adult.\n";
                   }
        }
    ~Female(){
           std::cout<<"Lol\n";
           }
}; 

        
int main(){
    
    bool morf = getInput<bool>("Are you male or female? Enter \'1\' for male and \'0\' for female: ");
   if(morf == true){
       Male object;
   }
   else{
       Female object1;
   }
    
}