#include <iostream>

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
  
bool or_gate(bool x, bool y){
         return x || y;
}

bool and_gate(bool x, bool y){
        return x && y;
}

bool nor_gate(bool x, bool y){
         return !(x || y);
}

bool nand_gate(bool x, bool y){
         return !(x && y);
}

bool xor_gate(bool x, bool y){
         return (x && !y) || (!x && y);
}

bool not_gate(bool x){
         return !x;
}

int main(){
     std::cout<<"Logic Gates.\n";
     
     bool a, b, c, d, e, f, g, h, i, j, k;
     
     while(true){
     std::cout<<"Select the logic gate you'd like to use: 1-OR, 2-AND, 3-NOR, 4-NAND, 5-XOR, 6-NOT, 7-end."<<std::endl;
     
     int option = getInput<int>("Choose any number option from 1-7 (each number in ascending order directly relates to the functions above this main function, e.g '1' for or_gate): ");
     
     switch(option){   
       case 1:
          a = getInput<bool>("Enter a value: ");     
          b = getInput<bool>("Enter a second value: ");
         std::cout<<a<<" + "<<b<<" = "<< or_gate(a,b) <<std::endl;
         break;        
                   
       case 2:
          c = getInput<bool>("Enter a value: ");     
          d = getInput<bool>("Enter a second value: ");
         std::cout<<c<<"•"<<d<<" = "<< and_gate(c,d)<<std::endl;
         break; 
                 
       case 3:
          e = getInput<bool>("Enter a value: ");   
          f = getInput<bool>("Enter a second value: ");     
         std::cout<<"!("<<e<<" + "<<f<<") = "<< nor_gate(e,f) <<std::endl;
         break;  
                
       case 4:
          g = getInput<bool>("Enter a value: ");     
          h = getInput<bool>("Enter a second value: ");     
         std::cout<<"!("<<g<<"•"<<h<<") = "<<nand_gate(g,h) <<std::endl;
         break; 
                 
       case 5:
           i = getInput<bool>("Enter a value: ");     
           j = getInput<bool>("Enter a second value: ");     
          std::cout<<i<<" (+) "<<j<<" = "<< xor_gate(i,j) <<std::endl;
          break;  
                
       case 6:
          k = getInput<bool>("Enter a value: ");        
         std::cout<<"!"<<k<<" = "<< not_gate(k) <<std::endl;
         break;
       
       case 7:
         std::cout<<"Goodbye for now!"<<std::endl;
         return 0;
       default:
         std::cout<<"Invalid number!"<<std::endl;
     }
}    
    
}