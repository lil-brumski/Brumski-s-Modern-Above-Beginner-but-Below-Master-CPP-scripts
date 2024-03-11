#include <iostream>
#include <string>
#include <random>
#include <limits>

//Template for wrong data type entry. 
template <typename T>
  T getInput(const std::string& prompt){
      T value;
      while(!(std::cout<<prompt && std::cin>>value)){
          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
          std::cerr<<"Wrong input, try again!"<<std::endl;          
      }
      return value;
  }

//Main function. 
int main(){
   
    //Array for storing a string of animals. 
    std::string arr[7] = {"cow", "dog", "pig", "rat", "cat", "bee", "hen" };
    
    //Pointer that points to the arr[7].
    std::string *ptr = arr;
    
    //Random number generators. 
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(0,6);
    
    //Integer that stores the random number(s).
    int word = distribution(gen);
    
    //Variable for the user to enter the lucky animal. 
    std::string luckyAnimal;
    
    //Number of tries the user is given. 
    int tries = 3;
    
    //Entry message. 
    std::cout<<"A game for guessing three-lettered animals."<<std::endl;
    
    //Message 
    std::cout<<"Animals to guess from: ";
    for(int i = 0; i < 6; i++){
        std::cout<<"\""<<ptr[i]<<"\", ";
    }
    std::cout<<"\""<<arr[6]<<".\""<<std::endl;
    
    //Prompts the user to enter the lucky animal. 
    std::cout<<"Enter the animal that you think is the lucky animal: ";
    std::cin>>luckyAnimal;
   
    //While loop that runs until the user enters the lucky animal . 
    while(luckyAnimal != arr[word]){
        tries--;
        if(tries == 0){
            std::cout<<"You have used up all your tries, you lose!"<<std::endl;
            break;
        }
        std::cout<<"Wrong animal, "<<tries<<" tries left. Try again: ";
        std::cin>>luckyAnimal;
    }
    
    //If-statement for when the user enters the lucky animal. 
    if(luckyAnimal == arr[word]){
        std::cout<<"You guessed the right number, you win!"<<std::endl;
    }
    
}