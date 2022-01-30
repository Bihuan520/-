# include <iostream>
# include <cstdlib>
# include <time.h>
using namespace std;

int main(void){
    
    time_t t;
    srand((unsigned) time(&t));
    
    int rand(void);
    int input,computer,i;

    cout<<"--- HINT: 1=scissors, 2=rock, 3=paper ---"<<endl;
    cout<<"   --- Enter any numbers to start! ---   \n"<<endl;
    
    while(cin>>input){
        for(i=1;i<=1;i++){
        
        computer=rand()%3+1;
        
        switch(computer){
            
            case 1:{
                cout<<"COMPUTER: scissors"<<endl;
                
                if(input==1){
                cout<<"YOU: scissors"<<endl;
                cout<<"-> RESULT: tied <-\n"<<endl;
                }
                
                else if(input==2){
                cout<<"YOU: rock\n"<<endl;
                cout<<"-> RESULT: win <-\n"<<endl;
                }
                
                else{
                cout<<"YOU: paper\n"<<endl;
                cout<<"-> RESULT: lost <-\n"<<endl;
                }
                
                break;
                }
                
            case 2:{
                cout<<"COMPUTER: rock"<<endl;
                
                if(input==1){
                cout<<"YOU: scissors\n"<<endl;
                cout<<"-> RESULT: lost <-\n"<<endl;
                }
                
                else if(input==2){
                cout<<"YOU: rock\n"<<endl;
                cout<<"-> RESULT: tied <-\n"<<endl;
                }
                
                else{
                cout<<"YOU: paper\n"<<endl;
                cout<<"-> RESULT: win <-\n"<<endl;
                }
                
                break;
                }
                
            case 3:{
                cout<<"COMPUTER: paper"<<endl;
                
                if(input==1){
                cout<<"YOU: scissors\n"<<endl;
                cout<<"-> RESULT: win <-\n"<<endl;
                }
                
                else if(input==2){
                cout<<"YOU: rock\n"<<endl;
                cout<<"-> RESULT: lost <-\n"<<endl;
                }
                
                else{
                cout<<"YOU: paper\n"<<endl;
                cout<<"-> RESULT: tied <-\n"<<endl;
                }
                
                break;
                }
                
        }
        
    }
    
    }
    
return 0;
}

