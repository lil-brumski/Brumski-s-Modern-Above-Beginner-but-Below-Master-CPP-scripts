#include <iostream>
#include <limits>
#include <string>

//Error checking; Makes sure correct data type is entered.
template <typename T>
  T getInput(const std::string& prompt){
      T value;
      while(!(std::cout<<prompt && std::cin>>value)){
          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
          std::cerr<<"Invalid input, try again!"<<std::endl;         
      }
      return value;
  }
  

//Allows multiple string values on one line to be considered as one while using the template above 👆
template <>
  std::string getInput<std::string>(const std::string& prompt){
      std::string value;
      std::cout<<prompt;
      std::cin.ignore();
      std::getline(std::cin,value);
      return value;
  }


//Class named "Animal".  
class Animal{
    public:
    bool eatMeat;
};


//Class named "Dog".
class Dog: public Animal{
    public: 
    bool barkingNow;
    bool petNow;
             //A void function inside the "Dog" class.
             void doge(){
                      //1. If dog is barking and is someone's pet.
                      if(barkingNow && petNow && eatMeat){                          
                          std::cout<<"That guy's dog is barking while eating the meat!"<<std::endl;                      
                        }
                        //2. Barking, Not eating, someone's pet.
                     else if(barkingNow && petNow && !eatMeat){
                         std::cout<<"That guy's loud dog isn't eating it's meat."<<std::endl;
                     }
                     //3. Barking, eating but a stray.
                     else if(barkingNow && !petNow && eatMeat){
                         std::cout<<"That stray dog barked at us to get our eat."<<std::endl;
                     }
                      //4. If dog is not barking and is someone's pet.
                     else if(!barkingNow && petNow && eatMeat){                                 
                                 std::cout<<"That guy's dog is quietly eating its meat."<<std::endl;
                                }
                                //5. Barking, not eating and a stray.
                     else if(barkingNow && !petNow && !eatMeat){
                      std::cout<<"That stray dog barks at us when we wanted to feed it."<<std::endl;
                      } 
                       //6. Not eating, not a pet and not barking.
                      else if(!barkingNow && !petNow && !eatMeat){
                             std::cout<<"That stray dog hasn't eaten anything since, that's why it's quiet."<<std::endl;
                      }
                      //7. 
                     else if(!barkingNow && petNow && !eatMeat){
                      std::cout<<"That guy's dog was sleeping when we came to his house."<<std::endl;
                      }                  
                      //8. If dog is not barking and is not someone's pet, but is eating.
                     else if(!barkingNow && !petNow && eatMeat){                            
                             std::cout<<"That quiet stray dog is eating the meat I kept outside for it."<<std::endl;
                            }                           
             }
};


class Human: public Animal{
    public:
    std::string name;
    bool male;
    
};


int main(){
     //Class named "Dog" creating an object named "qual".
     Dog qual;
     
     //Getting the value for eatMeat(1 || 0).
     qual.eatMeat = getInput<bool>("Should the dog be eating meat right now? `1` for yes and `0` for no: ");
     
     //Getting the value for barkingNow(1 || 0).
     qual.barkingNow = getInput<bool>("Should the dog be barking too? `1` for yes and `0` for no: ");
     
     //Getting the value for petNow(1 || 0).
     qual.petNow = getInput<bool>("What about being owned? `1` for yes and `0` for no: ");
     
     //Calling the function inside of the "Dog" class.
     qual.doge();
}