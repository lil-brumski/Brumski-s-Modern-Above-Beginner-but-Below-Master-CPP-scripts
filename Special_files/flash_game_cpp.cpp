#include <iostream>
#include <chrono>
#include <thread>
#include <random>

void TIME(){
    int TiMe = 3;
    std::cout<<"Running...\n\n";
    std::chrono::milliseconds duration(1000*TiMe);
    std::this_thread::sleep_for(duration);
}


class GoodSpeedSter{ 
    private:
      int velocity;
      
    public:
      GoodSpeedSter(int v) : velocity(v) {
      }
      
      void display(){
          std::cout<<"You're moving at "<<velocity<<"m/s!"<<std::endl;
      }
      
      ~GoodSpeedSter(){
      }
};


class BadSpeedSter{
    private:
      int velocity;
    public:
      BadSpeedSter(int s) : velocity(s) {
      }
    
      void show(){
          std::cout<<"He's moving at "<<velocity<<"m/s!"<<std::endl;
      }
    
      ~BadSpeedSter(){
       }
};


int main(){
    std::cout<<"A Flash game, you're the flash."<<std::endl;
    std::cout<<"Zoom just took an innocent person hostage, stop him!\n"<<std::endl;
    
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> hero(343,300000);
    std::uniform_int_distribution<int> villian(343,900000);
   
    int tries = 20; 
    int ran;
    int ran1;
    while(true){
        
        if(tries == 0){
            std::cout<<"You're too slow, he killed the victim!\n";
            break;
        }
        
        ran = hero(gen);
        ran1 = villian(gen);
        
        {
         std::unique_ptr<GoodSpeedSter> speed(new GoodSpeedSter(ran));
        speed->display();
        
        std::unique_ptr<BadSpeedSter> speed1(new BadSpeedSter(ran1));
        speed1->show();
        
        if(ran > ran1){
            std::cout<<std::endl;
            std::cout<<"You caught him and saved the hostage, you win!\n";
            break;
        }
        else{
            std::cout<<"You're not fast enough 😢\n";
        }
        
        tries--;
        
        std::cout<<std::endl;
        
        TIME();
       
        }
    }
    
}