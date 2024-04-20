//The velocities will be randomly generated.


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

class SpeedSter{
    protected:
      int velocity;
    
    public:
       SpeedSter(int v) : velocity(v) {
           
       }
       
       virtual void display() const{
           std::cout<<"Running..."<<std::endl;
       }
       
       virtual ~SpeedSter(){
           
       }
};

class GoodSpeedSter: public SpeedSter{     
    public:
      GoodSpeedSter(int v) : SpeedSter(v) {
      }
      
      void display() const override{
          SpeedSter::display();
          std::cout<<"You're moving at "<<velocity<<"m/s!"<<std::endl;
      }
      
      ~GoodSpeedSter(){
      }
};


class BadSpeedSter: public SpeedSter{
    public:
      BadSpeedSter(int v) : SpeedSter(v) {
      }
    
      void display() const override{
          SpeedSter::display();
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
    std::uniform_int_distribution<int> villian(343,1000000);
   
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
         std::unique_ptr<SpeedSter> speed = std::make_unique<GoodSpeedSter>(ran);
        speed->display();
        
        std::unique_ptr<SpeedSter> speed1 = std::make_unique<BadSpeedSter>(ran1);
        speed1->display();
        
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