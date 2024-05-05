#include <iostream>
#include <chrono>
#include <thread>

void Time(){
    static int count = 1;
    
    int sleep = 1;
    
    std::chrono::milliseconds duration(sleep * 1000);
    
    std::this_thread::sleep_for(duration);
    
    std::cout<<"Loading..."<<count<<"% complete."<<std::endl;
    
    count += 2;
    
    if(count == 99){
        count++;
        std::cout<<"Loading Complete!"<<std::endl;
    }
    
}

int main(){
    
    for(int y = 0; y < 49; y++){
        Time();
    }
    
}