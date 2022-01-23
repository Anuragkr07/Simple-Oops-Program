#include<bits/stdc++.h>
using namespace std;
class Hero{
    int health;
    char level;
     public:
     int getHealth(){  //member function to access Health
         return health;
     }
     
     char getLevel(){   //member function to access Level
         return level;
     }
     
     void setHealth(int h){  //member function to set the health(mutator function)
         health=h;
     }
     
     void setLevel(char l){   //member function to set the health ((mutator function))
         level=l;
     }
     
     Hero(){
         cout<<"Normal Constructor Called\n";
     }
     
     Hero(int health,char level)
     {
         cout<<"\nparamaterised Constructor called\n";
         this->health=health;
         this->level=level;
     }
};



int main(){
    Hero A;   //object A created
    A.setHealth(99);
    A.setLevel('8');
    cout<<"Health of Hero is : "<<A.getHealth()<<" and his level is : "<<A.getLevel();
    
    Hero B(85,'6');
    cout<<"Health of Hero is : "<<B.getHealth()<<" and his level is : "<<B.getLevel();
    
    return 0;
}
