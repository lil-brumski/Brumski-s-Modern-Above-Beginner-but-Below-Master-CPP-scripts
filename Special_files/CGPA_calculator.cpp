#include <iostream>
#include <limits>
#include <iomanip>
#include <cctype>

template <typename T>
  T getInput(const std::string& prompt){
      T value;
      std::cout<<prompt;
      while(!(std::cin>>value)){
          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
          std::cerr<<"Invalid input. Try again."<<std::endl;
          std::cout<<prompt;
      }
      return value;
  }
  
void John(char e1, char e2, char e3, char e4, double c1, double c2, double c3, double c4){
    double cu_points = 550;
    double t_course_units = 120;
    std::cout<<"Name: J. John\n"
    <<"MAT. NO.: DE.2021/2946\n"
    <<"EEE401 grade: "<<e1
    <<"\nEEE402 grade: "<<e2
    <<"\nEEE403 grade: "<<e3
    <<"\nEEE404 grade: "<<e4<<std::endl;
     double g_p_a = (c1+c2+c3+c4)/12;
     double c_g_p_a = (cu_points+c1+c2+c3+c4)/(t_course_units+12);
     std::cout<<"This semester GPA: "<<g_p_a
     <<"\nCGPA: "<<std::setprecision(3)<<c_g_p_a
     <<"\nCurrent year and semester: 3Yr 1Se"<<std::endl;
}

void Amaka(char e1, char e2, char e3, char e4, double c1, double c2, double c3, double c4){
    double cu_points = 550;
    double t_course_units = 120;
    std::cout<<"Name: A. Amaka\n"
    <<"MAT. NO.: DE.2021/2947\n"
    <<"EEE401 grade: "<<e1
    <<"\nEEE402 grade: "<<e2
    <<"\nEEE403 grade: "<<e3
    <<"\nEEE404 grade: "<<e4<<std::endl;
     double g_p_a = (c1+c2+c3+c4)/12;
      double c_g_p_a = (cu_points+c1+c2+c3+c4)/(t_course_units+12);
     std::cout<<"This semester GPA: "<<g_p_a
     <<"\nCGPA: "<<std::setprecision(3)<<c_g_p_a
     <<"\nCurrent year and semester: 3Yr 1Se"<<std::endl;
}

void Peter(char e1, char e2, char e3, char e4, double c1, double c2, double c3, double c4){
    double cu_points = 550;
    double t_course_units = 120;
    std::cout<<"Name: P. Peter\n"
    <<"MAT. NO.: DE.2021/2948\n"
    <<"EEE401 grade: "<<e1
    <<"\nEEE402 grade: "<<e2
    <<"\nEEE403 grade: "<<e3
    <<"\nEEE404 grade: "<<e4<<std::endl;
    double g_p_a = (c1+c2+c3+c4)/12;
     double c_g_p_a = (cu_points+c1+c2+c3+c4)/(t_course_units+12);
     std::cout<<"This semester GPA: "<<g_p_a
     <<"\nCGPA: "<<std::setprecision(3)<<c_g_p_a
     <<"\nCurrent year and semester: 3Yr 1Se"<<std::endl;
}

void Miracle(char e1, char e2, char e3, char e4, double c1, double c2, double c3, double c4){
    double cu_points = 550;
    double t_course_units = 120;
    std::cout<<"Name: M. Miracle\n"
    <<"MAT. NO.: DE.2021/2949\n"
    <<"EEE401 grade: "<<e1
    <<"\nEEE402 grade: "<<e2
    <<"\nEEE403 grade: "<<e3
    <<"\nEEE404 grade: "<<e4<<std::endl;
     double g_p_a = (c1+c2+c3+c4)/12;
      double c_g_p_a = (cu_points+c1+c2+c3+c4)/(t_course_units+12);
     std::cout<<"This semester GPA: "<<g_p_a
     <<"\nCGPA: "<<std::setprecision(3)<<c_g_p_a
     <<"\nCurrent year and semester: 3Yr 1Se"<<std::endl;
}

int main(){
	 
     char gr[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
     //Scores grades of each course.
     char ee1, ee2, ee3, ee4;
     //Cumulative Points of each course.
     double cpj1, cpj2, cpj3, cpj4;
     
     double A = 15, B = 12, C = 9, D = 6, E = 3, F = 0;
     
	unsigned int EEE401, EEE402, EEE403, EEE404;
	 
	 std::string option = getInput<std::string>("Enter the student's matric number(DE.2021/2946 - DE.2021/2949): ");
	 
	 for(int x = 0; x < option.size(); x++){
	     option[x] = std::toupper(option[x]);
	 }
	 
	 while(true){
	     if(option == "DE.2021/2946"){
	 
	 //J. JOHN.
	 std::cout<<"\nSTUDENT: "<<std::endl;
	 EEE401 = getInput<unsigned int>("Enter the EEE401 score: ");	
	 EEE402 = getInput<unsigned int>("Enter the EEE402 score: ");	 
	 EEE403 = getInput<unsigned int>("Enter the EEE403 score: ");	 
	 EEE404 = getInput<unsigned int>("Enter the EEE404 score: ");
	 //EEE401.
	 if(EEE401 >= 70 && EEE401 <= 100){
	     ee1 = gr[0];
	     cpj1 = A;
	 }
	 else if(EEE401 >= 60 && EEE401 <= 69){
	     ee1 = gr[1];
	     cpj1 = B;
	 }
	 else if(EEE401 >= 50 && EEE401 <= 59){
	     ee1 = gr[2];
	     cpj1 = C;
	 }
	 else if(EEE401 >= 45 && EEE401 <= 49){
	     ee1 = gr[3];
	     cpj1 = D;
	 }
	 else if(EEE401 >= 40 && EEE401 <= 44){
	     ee1 = gr[4];
	     cpj1 = E;
	 }
	 else if(EEE401 >= 0 && EEE401 <= 39){
	     ee1 = gr[5];
	     cpj1 = F;
	 }	
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee1 = gr[5];
	     cpj1 = F;
	     } 
	 //EEE402.
	 if(EEE402 >= 70 && EEE402 <= 100){
	     ee2 = gr[0];
	     cpj2 = A;
	 }
	 else if(EEE402 >= 60 && EEE402 <= 69){
	     ee2 = gr[1];
	     cpj2 = B;
	 }
	 else if(EEE402 >= 50 && EEE402 <= 59){
	     ee2 = gr[2];
	     cpj2 = C;
	 }
	 else if(EEE402 >= 45 && EEE402 <= 49){
	     ee2 = gr[3];
	     cpj2 = D;
	 }
	 else if(EEE402 >= 40 && EEE402 <= 44){
	     ee2 = gr[4];
	     cpj2 = E;
	 }
	 else if(EEE402 >= 0 && EEE402 <= 39){
	     ee2 = gr[5];
	     cpj2 = F;
	 }
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee2 = gr[5];
	     cpj2 = F;
	     }	 
	 //EEE403.
	  if(EEE403 >= 70 && EEE403 <= 100){
	     ee3 = gr[0];
	     cpj3 = A;
	 }
	 else if(EEE403 >= 60 && EEE403 <= 69){
	     ee3 = gr[1];
	     cpj3 = B;
	 }
	 else if(EEE403 >= 50 && EEE403 <= 59){
	     ee3 = gr[2];
	     cpj3 = C;
	 }
	 else if(EEE403 >= 45 && EEE403 <= 49){
	     ee3 = gr[3];
	     cpj3 = D;
	 }
	 else if(EEE403 >= 40 && EEE403 <= 44){
	     ee3 = gr[4];
	     cpj3 = E;
	 }
	 else if(EEE403 >= 0 && EEE403 <= 39){
	     ee3 = gr[5];
	     cpj3 = F;
	 }
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee3 = gr[5];
	     cpj3 = F;
	     }	 
	 //EEE404.
	 if(EEE404 >= 70 && EEE404 <= 100){
	     ee4 = gr[0];
	     cpj4 = A;
	 }
	 else if(EEE404 >= 60 && EEE404 <= 69){
	     ee4 = gr[1];
	     cpj4 = B;
	 }
	 else if(EEE404 >= 50 && EEE404 <= 59){
	     ee4 = gr[2];
	     cpj4 = C;
	 }
	 else if(EEE404 >= 45 && EEE404 <= 49){
	     ee4 = gr[3];
	     cpj4 = D;
	 }
	 else if(EEE404 >= 40 && EEE404 <= 44){
	     ee4 = gr[4];
	     cpj4 = E;
	 }
	 else if(EEE404 >= 0 && EEE404 <= 39){
	     ee4 = gr[5];
	     cpj4 = F;
	 }
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee4 = gr[5];
	     cpj4 = F;
	     }
	 John(ee1, ee2, ee3, ee4, cpj1, cpj2, cpj3, cpj4);
	    }
	    
	    
	    
	    
	    //AMAKA
	 else if(option == "DE.2021/2947"){
	 
	 //A. Amaka
	 std::cout<<"\nSTUDENT: "<<std::endl;
	 EEE401 = getInput<unsigned int>("Enter the EEE401 score: ");	
	 EEE402 = getInput<unsigned int>("Enter the EEE402 score: ");	 
	 EEE403 = getInput<unsigned int>("Enter the EEE403 score: ");	 
	 EEE404 = getInput<unsigned int>("Enter the EEE404 score: ");
	 //EEE401.
	 if(EEE401 >= 70 && EEE401 <= 100){
	     ee1 = gr[0];
	     cpj1 = A;
	 }
	 else if(EEE401 >= 60 && EEE401 <= 69){
	     ee1 = gr[1];
	     cpj1 = B;
	 }
	 else if(EEE401 >= 50 && EEE401 <= 59){
	     ee1 = gr[2];
	     cpj1 = C;
	 }
	 else if(EEE401 >= 45 && EEE401 <= 49){
	     ee1 = gr[3];
	     cpj1 = D;
	 }
	 else if(EEE401 >= 40 && EEE401 <= 44){
	     ee1 = gr[4];
	     cpj1 = E;
	 }
	 else if(EEE401 >= 0 && EEE401 <= 39){
	     ee1 = gr[5];
	     cpj1 = F;
	 }	
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee1 = gr[5];
	     cpj1 = F;
	     } 
	 //EEE402.
	 if(EEE402 >= 70 && EEE402 <= 100){
	     ee2 = gr[0];
	     cpj2 = A;
	 }
	 else if(EEE402 >= 60 && EEE402 <= 69){
	     ee2 = gr[1];
	     cpj2 = B;
	 }
	 else if(EEE402 >= 50 && EEE402 <= 59){
	     ee2 = gr[2];
	     cpj2 = C;
	 }
	 else if(EEE402 >= 45 && EEE402 <= 49){
	     ee2 = gr[3];
	     cpj2 = D;
	 }
	 else if(EEE402 >= 40 && EEE402 <= 44){
	     ee2 = gr[4];
	     cpj2 = E;
	 }
	 else if(EEE402 >= 0 && EEE402 <= 39){
	     ee2 = gr[5];
	     cpj2 = F;
	 }
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee2 = gr[5];
	     cpj2 = F;
	     }	 
	 //EEE403.
	  if(EEE403 >= 70 && EEE403 <= 100){
	     ee3 = gr[0];
	     cpj3 = A;
	 }
	 else if(EEE403 >= 60 && EEE403 <= 69){
	     ee3 = gr[1];
	     cpj3 = B;
	 }
	 else if(EEE403 >= 50 && EEE403 <= 59){
	     ee3 = gr[2];
	     cpj3 = C;
	 }
	 else if(EEE403 >= 45 && EEE403 <= 49){
	     ee3 = gr[3];
	     cpj3 = D;
	 }
	 else if(EEE403 >= 40 && EEE403 <= 44){
	     ee3 = gr[4];
	     cpj3 = E;
	 }
	 else if(EEE403 >= 0 && EEE403 <= 39){
	     ee3 = gr[5];
	     cpj3 = F;
	 }
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee3 = gr[5];
	     cpj3 = F;
	     }	 
	 //EEE404.
	 if(EEE404 >= 70 && EEE404 <= 100){
	     ee4 = gr[0];
	     cpj4 = A;
	 }
	 else if(EEE404 >= 60 && EEE404 <= 69){
	     ee4 = gr[1];
	     cpj4 = B;
	 }
	 else if(EEE404 >= 50 && EEE404 <= 59){
	     ee4 = gr[2];
	     cpj4 = C;
	 }
	 else if(EEE404 >= 45 && EEE404 <= 49){
	     ee4 = gr[3];
	     cpj4 = D;
	 }
	 else if(EEE404 >= 40 && EEE404 <= 44){
	     ee4 = gr[4];
	     cpj4 = E;
	 }
	 else if(EEE404 >= 0 && EEE404 <= 39){
	     ee4 = gr[5];
	     cpj4 = F;
	 }
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee4 = gr[5];
	     cpj4 = F;
	     }
	 Amaka(ee1, ee2, ee3, ee4, cpj1, cpj2, cpj3, cpj4);
	    }
	    
	    
	    
	    
	    //PETER
	 else if(option == "DE.2021/2948"){
	 
	 //P. Peter.
	 std::cout<<"\nSTUDENT: "<<std::endl;
	 EEE401 = getInput<unsigned int>("Enter the EEE401 score: ");	
	 EEE402 = getInput<unsigned int>("Enter the EEE402 score: ");	 
	 EEE403 = getInput<unsigned int>("Enter the EEE403 score: ");	 
	 EEE404 = getInput<unsigned int>("Enter the EEE404 score: ");
	 //EEE401.
	 if(EEE401 >= 70 && EEE401 <= 100){
	     ee1 = gr[0];
	     cpj1 = A;
	 }
	 else if(EEE401 >= 60 && EEE401 <= 69){
	     ee1 = gr[1];
	     cpj1 = B;
	 }
	 else if(EEE401 >= 50 && EEE401 <= 59){
	     ee1 = gr[2];
	     cpj1 = C;
	 }
	 else if(EEE401 >= 45 && EEE401 <= 49){
	     ee1 = gr[3];
	     cpj1 = D;
	 }
	 else if(EEE401 >= 40 && EEE401 <= 44){
	     ee1 = gr[4];
	     cpj1 = E;
	 }
	 else if(EEE401 >= 0 && EEE401 <= 39){
	     ee1 = gr[5];
	     cpj1 = F;
	 }	
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee1 = gr[5];
	     cpj1 = F;
	     } 
	 //EEE402.
	 if(EEE402 >= 70 && EEE402 <= 100){
	     ee2 = gr[0];
	     cpj2 = A;
	 }
	 else if(EEE402 >= 60 && EEE402 <= 69){
	     ee2 = gr[1];
	     cpj2 = B;
	 }
	 else if(EEE402 >= 50 && EEE402 <= 59){
	     ee2 = gr[2];
	     cpj2 = C;
	 }
	 else if(EEE402 >= 45 && EEE402 <= 49){
	     ee2 = gr[3];
	     cpj2 = D;
	 }
	 else if(EEE402 >= 40 && EEE402 <= 44){
	     ee2 = gr[4];
	     cpj2 = E;
	 }
	 else if(EEE402 >= 0 && EEE402 <= 39){
	     ee2 = gr[5];
	     cpj2 = F;
	 }
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee2 = gr[5];
	     cpj2 = F;
	     }	 
	 //EEE403.
	  if(EEE403 >= 70 && EEE403 <= 100){
	     ee3 = gr[0];
	     cpj3 = A;
	 }
	 else if(EEE403 >= 60 && EEE403 <= 69){
	     ee3 = gr[1];
	     cpj3 = B;
	 }
	 else if(EEE403 >= 50 && EEE403 <= 59){
	     ee3 = gr[2];
	     cpj3 = C;
	 }
	 else if(EEE403 >= 45 && EEE403 <= 49){
	     ee3 = gr[3];
	     cpj3 = D;
	 }
	 else if(EEE403 >= 40 && EEE403 <= 44){
	     ee3 = gr[4];
	     cpj3 = E;
	 }
	 else if(EEE403 >= 0 && EEE403 <= 39){
	     ee3 = gr[5];
	     cpj3 = F;
	 }
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee3 = gr[5];
	     cpj3 = F;
	     }	 
	 //EEE404.
	 if(EEE404 >= 70 && EEE404 <= 100){
	     ee4 = gr[0];
	     cpj4 = A;
	 }
	 else if(EEE404 >= 60 && EEE404 <= 69){
	     ee4 = gr[1];
	     cpj4 = B;
	 }
	 else if(EEE404 >= 50 && EEE404 <= 59){
	     ee4 = gr[2];
	     cpj4 = C;
	 }
	 else if(EEE404 >= 45 && EEE404 <= 49){
	     ee4 = gr[3];
	     cpj4 = D;
	 }
	 else if(EEE404 >= 40 && EEE404 <= 44){
	     ee4 = gr[4];
	     cpj4 = E;
	 }
	 else if(EEE404 >= 0 && EEE404 <= 39){
	     ee4 = gr[5];
	     cpj4 = F;
	 }
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee4 = gr[5];
	     cpj4 = F;
	     }
	 Peter(ee1, ee2, ee3, ee4, cpj1, cpj2, cpj3, cpj4);
	    }
	    
	    
	    
	    
	    //MIRACLE
	  else if(option == "DE.2021/2949"){
	 
	 //M. Miracle 
	 std::cout<<"\nSTUDENT: "<<std::endl;
	 EEE401 = getInput<unsigned int>("Enter the EEE401 score: ");	
	 EEE402 = getInput<unsigned int>("Enter the EEE402 score: ");	 
	 EEE403 = getInput<unsigned int>("Enter the EEE403 score: ");	 
	 EEE404 = getInput<unsigned int>("Enter the EEE404 score: ");
	 //EEE401.
	 if(EEE401 >= 70 && EEE401 <= 100){
	     ee1 = gr[0];
	     cpj1 = A;
	 }
	 else if(EEE401 >= 60 && EEE401 <= 69){
	     ee1 = gr[1];
	     cpj1 = B;
	 }
	 else if(EEE401 >= 50 && EEE401 <= 59){
	     ee1 = gr[2];
	     cpj1 = C;
	 }
	 else if(EEE401 >= 45 && EEE401 <= 49){
	     ee1 = gr[3];
	     cpj1 = D;
	 }
	 else if(EEE401 >= 40 && EEE401 <= 44){
	     ee1 = gr[4];
	     cpj1 = E;
	 }
	 else if(EEE401 >= 0 && EEE401 <= 39){
	     ee1 = gr[5];
	     cpj1 = F;
	 }	
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee1 = gr[5];
	     cpj1 = F;
	     } 
	 //EEE402.
	 if(EEE402 >= 70 && EEE402 <= 100){
	     ee2 = gr[0];
	     cpj2 = A;
	 }
	 else if(EEE402 >= 60 && EEE402 <= 69){
	     ee2 = gr[1];
	     cpj2 = B;
	 }
	 else if(EEE402 >= 50 && EEE402 <= 59){
	     ee2 = gr[2];
	     cpj2 = C;
	 }
	 else if(EEE402 >= 45 && EEE402 <= 49){
	     ee2 = gr[3];
	     cpj2 = D;
	 }
	 else if(EEE402 >= 40 && EEE402 <= 44){
	     ee2 = gr[4];
	     cpj2 = E;
	 }
	 else if(EEE402 >= 0 && EEE402 <= 39){
	     ee2 = gr[5];
	     cpj2 = F;
	 }
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee2 = gr[5];
	     cpj2 = F;
	     }	 
	 //EEE403.
	  if(EEE403 >= 70 && EEE403 <= 100){
	     ee3 = gr[0];
	     cpj3 = A;
	 }
	 else if(EEE403 >= 60 && EEE403 <= 69){
	     ee3 = gr[1];
	     cpj3 = B;
	 }
	 else if(EEE403 >= 50 && EEE403 <= 59){
	     ee3 = gr[2];
	     cpj3 = C;
	 }
	 else if(EEE403 >= 45 && EEE403 <= 49){
	     ee3 = gr[3];
	     cpj3 = D;
	 }
	 else if(EEE403 >= 40 && EEE403 <= 44){
	     ee3 = gr[4];
	     cpj3 = E;
	 }
	 else if(EEE403 >= 0 && EEE403 <= 39){
	     ee3 = gr[5];
	     cpj3 = F;
	 }
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee3 = gr[5];
	     cpj3 = F;
	     }	 
	 //EEE404.
	 if(EEE404 >= 70 && EEE404 <= 100){
	     ee4 = gr[0];
	     cpj4 = A;
	 }
	 else if(EEE404 >= 60 && EEE404 <= 69){
	     ee4 = gr[1];
	     cpj4 = B;
	 }
	 else if(EEE404 >= 50 && EEE404 <= 59){
	     ee4 = gr[2];
	     cpj4 = C;
	 }
	 else if(EEE404 >= 45 && EEE404 <= 49){
	     ee4 = gr[3];
	     cpj4 = D;
	 }
	 else if(EEE404 >= 40 && EEE404 <= 44){
	     ee4 = gr[4];
	     cpj4 = E;
	 }
	 else if(EEE404 >= 0 && EEE404 <= 39){
	     ee4 = gr[5];
	     cpj4 = F;
	 }
	 else{
	     std::cout<<"Invalid option."<<std::endl;
	     ee4 = gr[5];
	     cpj4 = F;
	     }
	 Miracle(ee1, ee2, ee3, ee4, cpj1, cpj2, cpj3, cpj4);
	    }
	    
	    else{
	        std::string option = getInput<std::string>("\nEnter the student's matric number(DE.2021/2946 - DE.2021/2949): ");
	 
	 for(int x = 0; x < option.size(); x++){
	     option[x] = std::toupper(option[x]);
	 }
	        }
	        
	    
	     option = getInput<std::string>("\nEnter the student's matric number(DE.2021/2946 - DE.2021/2949): ");
	 
	 for(int x = 0; x < option.size(); x++){
	     option[x] = std::toupper(option[x]);
	      }
	      
	 }
}